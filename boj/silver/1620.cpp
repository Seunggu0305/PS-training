#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
	int  n,m;
	cin >> n >> m;
	vector<string> pocketmon;
	map<string, int> pockmap;
	for(int i=1;i<=n;i++) {
		string name;
		cin >> name;
		pockmap.insert({name, i});
		pocketmon.push_back(name);
	}
	for(int i=0;i<m;i++) {
		string req;
		cin >> req;
		if(isdigit(req[0])) {
			int idx = stoi(req) - 1;
			cout << pocketmon[idx] << '\n';
		}
		else {
			cout << pockmap[req] << '\n';
		}
	}
	return 0;
}
