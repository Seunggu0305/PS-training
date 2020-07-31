#include <iostream>
#include <cstring>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int M, N;
	cin >> M >> N;
	int *prime = new int[N+1];
	prime[0] = prime[1] = -1;
	for(int i=2;i<=N;i++)
		prime[i] = i;
	for(int i=2;i*i<=N;i++) {
		if(prime[i] == i) {
			for(int j = i*i;j<=N;j+=i) {
				if(prime[j] ==j)
					prime[j] = i;
			}
		}
	}
	for (int i = M; i <= N; i++) {
		if (prime[i] == i)
			cout << i << "\n";
	}
	return 0;
}
