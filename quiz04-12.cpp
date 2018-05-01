#include "iostream"
using namespace std;

int fun (int &x, int y) {
	x = x + 1;
	y = y - 1;
	return y;
}

int main () {
	int x = 2, y = 7, z = 10; string s = "007";
	cout << ((double) y) / x << endl;
	if (! (x > y) && (y > 5)) s = "008";
	cout << s << endl; //line (a)
	z %= y;
	cout << z << endl; //line (b)
	cout << fun(z, y) << endl; //line (c)
	fun (x, y);
	cout << y - x * 2 << endl; //line (d)
}
