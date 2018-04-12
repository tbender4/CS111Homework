#include "iostream"
using namespace std;



void factorIt (int number) {
	//"Prime Factorization" is finding which prime numbers multiply together to make the original number.
	
	for (int i = 2; i <= number; i++) {		//loop will run until number is equal to the smallest factor, which is 2.
		if (number % i == 0) {			//check if i can be a clean divisor
			cout << i << " ";		//outputs clean divisor
			number = number / i;		//updates divisor to find new smallest 
			i = 1;				//sets i=1. for loop will increment it to 2.
		}
	}
	cout << endl;
	return;
}

int main() {
	string input;

	cout << "Enter a number greater than 1: ";
	getline(cin, input);

	if (		cin.fail() ||		//cin tools to sanitize input
			cin.eof() ||
			input.find_first_not_of("0123456789") != string::npos ||
			atoi(input.c_str()) <= 1 )	//converts string to int before comparing
	{
		cout << "Invalid input.";
		return 1;
	}
	int number = atoi(input.c_str());		//see line 29.

	for (int i = 2; i <= number; i++) {		//start with smallest prime. calls factorIt to find all factors. Increments up until the user's given number.
		cout << "Prime factors of " << i << ": ";
		factorIt(i);
	}

	return 0;
}

