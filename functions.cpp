#include "iostream"
using namespace std;


void printMeme (string message) {
	cout << message;
	return;
}

int printMeme (int message) {
	cout << message;
	return message;
}
int returnDouble (int number) {
	return number * 2;
}


int main () {
	cout << "Hello World!\n";
	cout << endl;

	printMeme("mememachine");

//	cout << returnDouble(50);
	cout << printMeme(50);

	return 0;
}

