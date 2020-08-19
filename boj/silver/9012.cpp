#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n,j;
	cin >> n;
	for(int i=0;i<n;i++) {
		stack<char> s;
		string temp;
		cin >> temp;
		for(j=0;j<temp.length();j++) {
			if(temp[j]=='(') {
				s.push('(');
			}
			else {
				if(s.empty()) {
					cout << "NO" << endl;
					break;
				}
				else s.pop();
			}
		}
		if(j==temp.length()) {
			if(s.empty()) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}
