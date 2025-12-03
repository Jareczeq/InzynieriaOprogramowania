#include <iostream>

using namespace std;

int main() {
	long long i;
	
	if (!(cin >> i)) {
		return 1;
	}

	if (i <= 0) {
		cout << "Liczba musi byc dodatnia!" << endl;
		return 1;
	}

	cout << i << endl;
	return 0;
}
