#include <iostream>
#include <cstring>

using namespace std;

int zeros[41], ones[41];

void counter(int n) {
	for(int i=2;i<=n;i++) {
		zeros[i] = zeros[i-1] + zeros[i-2];
		ones[i] = ones[i-1] + ones[i-2];
	}
	cout << zeros[n] << " " << ones[n] << '\n';
}

int main()
{
	memset(zeros, -1, sizeof(zeros));
	memset(ones, -1, sizeof(ones));
	zeros[0]=1; zeros[1]=0;
	ones[0]=0; ones[1]=1;
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
		int n;
		cin >> n;
		counter(n);
	}
	return 0;
}
