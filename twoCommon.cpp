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
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (numbers[i] == numbers[j])
				count++;
		}

		if (count > most) {
			most = count;
			secondIndex=mostIndex;
			mostIndex=j;
		}
		if (count == most && mostIndex != j)
			secondIndex=mostIndex;
		count = 0;


		cout << "Element: " << j << " Value: " << numbers[j] << " Max Count: " << count << " Most Index: " << mostIndex << endl;
	}
	cout << numbers[mostIndex] << " " << numbers[secondIndex] << endl;
	return 0;
}
