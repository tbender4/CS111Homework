#include "iostream"
using namespace std;

int main () {
	int x, attempts = 0;

	cout << "Enter a positive integer that is 3 or 4 modulo 7: ";
	while (true) {
		cin >> x;
		attempts++;
		if (x > 0 && (x % 7 == 4 || x % 7 == 3))
			break;
		else
			cout << "Wrong. Try Again: ";
	}
	cout << "Good. You passed after " << attempts << " attempts\n";
	return 0;
}

