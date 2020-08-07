#include <iostream>

using namespace std;
int main()
{
	int n;
	bool arr[250000];
	for (int i = 1; i < 250000; i++)
		arr[i] = true;
	arr[1] = false;
	for (int i = 2; i < 250000; i++) {
		if (arr[i] == false) continue;
		else {
			for (int j = i + i; j < 250000; j += i)
				arr[j] = false;
		}
	}
	while (1) {
		int cnt = 0;
		cin >> n;
		if (n == 0) break;
		for (int i = n+1; i <= 2 * n; i++) {
			if (arr[i]) cnt++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
