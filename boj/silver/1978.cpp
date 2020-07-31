#include <iostream>

using namespace std;
int main()
{
	int n, cnt=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num,j;
		cin >> num;
		for (j = 2; j < num; j++) {
			if (num % j == 0)
				break;
		}
		if (j == num) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
