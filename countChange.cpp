#include "iostream"
using namespace std;


double countChange (int q, int d, int n, int p) {
	
	double change = 0.00;

	change = change + (q * 0.25);
	change = change + (d * 0.10);
	change = change + (n * 0.05);
	change = change + (p * 0.01);

	return change;
}

int main () {
	int q = 10, d = 5, n = 1, p = 2;
	double x = countChange(q,d,n,p);
	cout << "You have $" << x << endl;
	return 0;
}
