#include "iostream"
using namespace std;


bool isValid (int x) {
		if (x > 0 && (x % 7 == 4 || x % 7 == 3))
			return true;
		else
			return false;
}

int askForInput() {
	int x, attempts = 0;
	while (true) {
		cin >> x;
		attempts++;
		if (isValid(x))
			break;
		else
			cout << "Wrong. Try Again: ";
	}
	return attempts;
}



int main () {

	cout << "Enter a positive integer that is 3 or 4 modulo 7: ";
	int numberOfTries = askForInput();
	cout << "Good. You passed after " << numberOfTries << " attempts\n";
	return 0;
}

