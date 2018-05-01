#include "iostream"
using namespace std;





int numberOfDigits (int number) {
	//BASE CASE
	if (number == 0)		//base case
		return 0;
	
	//code
	return ( 1 + numberOfDigits(number / 10) );
	//return statement takes note of something and then attempts one digit less.
	//it adds up ALL the 1s together to give one final answer at the end.
}



int main () {

	cout<< numberOfDigits(232) << endl;

}
