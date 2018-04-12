#include "iostream"
using namespace std;


double quadratic(double a, double b, double c, double x) {
	return a * x*x + b * x + c;
}


int main() {
	double a = 1.0, b = 2.2, c = 1.21, x = 0.1;
	cout << quadratic(a, b, c, x) << endl;
	return 0;
}


//int firstDigit (int i);
//double sqrt (double d);
//string oddString (string input);
//string randomWord ();
