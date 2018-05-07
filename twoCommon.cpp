#include "iostream"
using namespace std;

/*
1. It asks the user to enter 10 numbers each of which is an integer between 0 and 10.

2. It reads the 10 numbers.

3. It prints out the most common number.

For example if the numbers 5 and 9 were the two most common numbers, the output would be: 5 9

Note: You will want to make use of an array for this assignment
*/


int numberOfTimes(int array[], int number) {
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (array[i] == number)
            count++;
    }
    return count;

}

int main () {
	int most = 0;
	int mostIndex = 0, secondIndex = 0;
	int count = 0;

	int numbers[10];
	int input;
	for (int i = 0; i < 10; i++) {
		cout << "Enter a number: ";
		cin >> input;
		while (input > 10 || input < 0) {
			cout << "Invalid input.\nEnter a number: ";
			cin >> input;
		}
		numbers[i] = input;
	}

	for (int j = 0; j < 10; j++) {
        if (numberOfTimes(numbers, j) >= most)
            most = numberOfTimes(numbers, j);
    }

    cout << "Most common number(s): ";

    for (int i = 0; i < 10; i++) {
        if ( numberOfTimes(numbers, i) == most )
            cout << numbers[i] << " ";
    }
    
    cout << endl;
	return 0;
}
