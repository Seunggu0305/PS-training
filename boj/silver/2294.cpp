#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, k;
	vector<int> p;
	cin >> n >> k;
	for(int i=0;i<n;i++) {
		int temp;
		cin >> temp;
		p.push_back(temp);
	}
	sort(p.begin(), p.end());
	p.erase(unique(p.begin(), p.end()), p.end());
	vector<int> res(k+p[n-1]+1, 987654321);
	res[0]=0;
	for(int i=0;i<=k;i++) {
		for(int j=0;j<n;j++) {
			res[i+p[j]] = min(res[i+p[j]], res[i]+1);
		}	
	}
	if(res[k]==987654321)
		cout << "-1" << endl;
	else
		cout << res[k] << endl;
	return 0;
}
