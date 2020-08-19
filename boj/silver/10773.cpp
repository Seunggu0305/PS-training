#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, res=0;
	stack<int> s;
	cin >> n;
	for(int i=0;i<n;i++) {
		int temp;
		cin >> temp;
		if(temp == 0)
			s.pop();
		else s.push(temp);
	}
	while(!s.empty()) {
		res+=s.top();
		s.pop();
	}
	cout << res << endl;
	return 0;
}
