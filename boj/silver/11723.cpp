#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int sets[21];
	memset(sets, 0, sizeof(sets));
	int M;
	cin >> M;
	for(int i=0;i<M;i++) {
		string command;
		int n;
		cin >> command;
		if(command ==  "add") {
			cin >> n;
			sets[n] = 1;
		}
		else if(command == "check") {
			cin >> n;
			if(sets[n])
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if(command == "remove") {
			cin >> n;
			sets[n] = 0;
		}
		else if(command == "toggle") {
			cin >> n;
			sets[n] = 1 - sets[n];
		}
		else if(command == "all") {
			memset(sets, 1, sizeof(sets));
		}
		else if(command == "empty") {
			memset(sets, 0, sizeof(sets));
		}
	}
	return 0;
}
