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

	cout << czy_bezkwadratowa(i) << endl;
	return 0;
}
