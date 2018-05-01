#include "iostream"
using namespace std;

int numberOfDigits (int number) {
	

///////////////////////////////BASE CASE////////////////////////
	if (number == 0)					
		return 0;					


///////////////////////////////CODE/////////////////////////////
	if (number % 2 == 1)					
		return ( 1 + numberOfDigits(number / 10) );	
	else							
		return (numberOfDigits(number / 10)) ;		
}



int main () {

	cout<< numberOfDigits(232) << endl;

}
