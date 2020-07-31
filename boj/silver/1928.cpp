#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	vector<int> in, ch;
	cin >> n;
	for(int i=0;i<n;i++) {
		int temp;
		cin >> temp;
		in.push_back(temp);
	}
	cin >> m;
	for(int i=0;i<m;i++) {
		int temp;
		cin >> temp;
		ch.push_back(temp);
	}
	for(int i=0;i<m;i++) {
		if(find(in.begin(), in.end(), ch[i]) != in.end()) cout << '1' << '\n';
		else cout << '0' << '\n';
	}
	return 0;
}
