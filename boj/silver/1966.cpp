#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		vector<pair<int, int>> q;
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			if (j == m) q.push_back({ temp, 1 });
			else q.push_back({ temp,0 });
		}
		if (n == 1) cout << n << '\n';
		else {
			int cnt = 0;
			while (1) {
				int flag = 0;
				for (int k = 1; k < q.size(); k++) {
					if (q[0].first < q[k].first) {
						flag = 1; break;
					}
				}
				if (flag) {
					int temp = q[0].first, temp1 = q[0].second;
					q.erase(q.begin());
					q.push_back({ temp, temp1 });
				}
				else {
					if (q[0].second == 1) {
						cnt++; break;
					}
					else {
						q.erase(q.begin());
						cnt++;
					}
				}
			}
			cout << cnt << '\n';
		}
	}
	return 0;
}
