#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int n, temp;
	cin >> n;
	vector<int> v(n+2, 0);
	queue<char> c;
	int cur = 1, flag=0;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		while(v[temp]!=1) {
			if (v[cur] == 0) {
				c.push('+');
				v[cur++]=1;
			}
			else {
				cur++;
			}
		}
		if (v[cur] == 1 && cur>temp) {
			flag = 1;
		}
		cur = temp;
		c.push('-');
		v[cur] = 2;
		while (v[cur] == 2 && cur>1)
			cur--;
	}
	if (flag)
		cout << "NO" << '\n';
	else {
		while (!c.empty()) {
			cout << c.front() << '\n';
			c.pop();
		}
	}
	return 0;
}
