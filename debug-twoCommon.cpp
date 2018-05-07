#include "iostream"
using namespace std;
/*
1. It asks the user to enter 10 numbers each of which is an integer between 0 and 10.

2. It reads the 10 numbers.

3. It prints out the most common number.

For example if the numbers 5 and 9 were the two most common numbers, the output would be: 5 9

Note: You will want to make use of an array for this assignment
*/


int main () {
    int numbers[10] = { 1, 2, 3, 4, 5, 5, 5, 9, 9, 9 };
	int most = 0;
	int mostIndex = 0, secondIndex = 0;
	int count = 0;

/*
	int userInput[10];
	int input;
	for (int i = 0; i < 10; i++) {
		cout << "Enter a number: ";
		cin >> input;
		while (input > 10) {
			cout << "Too big.\nEnter a number: ";
			cin >> input;
		}
		userInput[i] = input;
	}
*/

	for (int j = 0; j < 10; j++) {
        cout << "j = " << j << endl;
		for (int i = 0; i < 10; i++) {
            cout << "i = " << i << endl;
			if (numbers[i] == numbers[j]) {
                cout << "numbers[i] = numbers[j]\n";
				count++;
                cout << "count = " << count << " most = " << most << " secondIndex = " << secondIndex << " firstIndex " << mostIndex << endl;
            }
        }
        if (count >= most) {
            if (numbers[j] != numbers[mostIndex])
                secondIndex = mostIndex;
            most = count;
            mostIndex = j;
            cout << "count >= most. most = " << most << " second Index = " << secondIndex << " mostIndex = " << mostIndex << endl;
        }
        count = 0;
        cout << "Reset count to zero." << endl;
    }



    cout << "secondIndex:" << secondIndex  << ". Most index: " << mostIndex << endl;
	cout << numbers[mostIndex] << " " << numbers[secondIndex] << endl;
	return 0;
}
