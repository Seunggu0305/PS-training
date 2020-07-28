#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(3*n+1, 987654321);
	v[1]=0;
	for(int i=1;i<=n;i++) {
		v[i+1] = min(v[i]+1, v[i+1]);
		v[i*2] = min(v[i]+1, v[i*2]);
		v[i*3] = min(v[i]+1, v[i*3]);
	}
	cout << v[n] << '\n';
	return 0;
}
