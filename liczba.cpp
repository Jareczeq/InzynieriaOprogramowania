#include <iostream>

using namespace std;

bool czy_bezkwadratowa(long long n) {
	if (n <= 0) {
		return false;
	}

	for (long long k = 2; k * k <= n; ++k) {
		long long kwadrat = k * k;
		if (n % kwadrat == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	long long i;
	
	if (!(cin >> i)) {
		return 1;
	}

	if (i <= 0) {
		cout << "Liczba musi byc dodatnia!" << endl;
		return 1;
	}

	cout << i << " ";

	if (czy_bezkwadratowa(i)) {
		cout << "jest bezkwadratowa";
	} else {
		cout << "nie jest bezkwadratowa";
	}

	cout << endl;

	return 0;
}
