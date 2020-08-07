#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int i;
	string l;
	while (1) {
		string res = "yes";
		stack<char> s;
		getline(cin, l);
		if (l[0] == '.') break;
		for(int i=0;i<l.size();i++) {
			if (l[i] == '(' || l[i] == '[') s.push(l[i]);
			else if (l[i] == ')') {
				if(s.empty()) res = "no";
				else if (s.top() == '(')
					s.pop();
				else res = "no";
			}
			else if (l[i] == ']') {
				if(s.empty()) res = "no";
				else if (s.top() == '[')
					s.pop();
				else res = "no";
			}
			if (l[i] == '.') {
				if(!s.empty()) {
					res = "no";
				}
				cout << res << '\n';
				break;
			}
		}
	}
	return 0;
}
