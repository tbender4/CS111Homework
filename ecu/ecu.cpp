#include "iostream"
using namespace std;


int gcd(int a, int b) {

    if (a > b)
        swap(a,b);

    cout << "a: " << a << " b: " << b << endl;

    cout << b << " = (" << b/a << ") + " << a << " + " << b%a << endl;

    if (b % a == 0)
        return a;

    return gcd (b%a, a);
}



int main () {

    int a = 111, b = 201;

    cout << "GCD: " << gcd(a,b) << endl;
    return 0;
}
