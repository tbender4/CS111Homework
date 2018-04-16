#include "iostream"
using namespace std;


int oddToSeven (int number) {
	//12345
//	if (number / 10 == number)
	if (number == 0)
		return number;
	int currentDigit = number % 10;
	number = ((number / 10) * 10);
	if (currentDigit % 2 == 1)
		return (oddToSeven((number / 10)) * 10) + 7;
	else
		return (oddToSeven((number / 10)) * 10) + currentDigit;


}

int threesAndFives (int number) {
	if (number == 0)
		return 0;
	if (number % 10 == 3 || number % 10 == 5)
		return (1+ (threesAndFives(number / 10)));
	else
		return ((threesAndFives(number / 10)));
}
		
int prompt() {
	string input;
	do {
	cout << "Enter a positive number: ";
	getline (cin, input);
	if (		cin.fail() ||		//cin tools to sanitize input
			cin.eof() ||
			input.find_first_not_of("0123456789") != string::npos ||
			atoi(input.c_str()) <=0 )	//
		cout << "Invalid input.\n";
	else
		return atoi(input.c_str());
	} while (true);
}

int main () {
	//ask for positive number
	//if invalid, prompt again
	
	//write function threesAndFives.
	//count how many digits are equal to 3 or 5 in a positive int paramter.
	
	//write function oddToSeven. returns a result obtained by turning all odd digits in positive int to sevens.
	int number = 2353;
	
	number = prompt();
	cout << "Total count is " << threesAndFives(number) << endl;
	cout << "Result is " << oddToSeven(number) << endl;


	return 0;
}
