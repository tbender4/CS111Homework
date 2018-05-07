#include "iostream"
using namespace std;

int interlaceDigits(int a, int b) {
    
    int digita = a % 10;
    int digitb = b % 10;
    int combinedDigits = digita * 10 + digitb;
    int number;

    if (digita == a) {
        cout << "Base case called. Output is: " << combinedDigits <<endl<<endl;
        return combinedDigits;
    }
    cout << "Number a: " << a << " Digit a: " << digita << " "
        << "Number b: " << b << " Digit b: " << digitb << endl 
        << "combined digits: " << combinedDigits << endl;
    cout << "100 * interlaceDigits (" << a/10 << ", " << b/10 << ") + " << combinedDigits << endl;
    cout << "          ^\n";
    cout << "          |\n";
    cout << "          *- Called interlaceDigits. Let's work on that.\n\n";
    number =  100 * interlaceDigits(a / 10, b / 10);
    cout << "finally finished interlacedDigits(" << a / 10 <<", " << b/10 << "). Got " << number/100 << endl
        << "Adding combinedDigits, which is " << combinedDigits <<". Number is currently: ";
    number = number + combinedDigits;
    cout << number << endl;
    return number;
}


int main () {

//    cout << interlaceDigits(1, 2) << endl;       // prints 12
    cout << interlaceDigits(117, 302) << endl;   // prints 131072
//    cout << interlaceDigits(1357, 2468) << endl; // prints 12345678

    return 0;
}
