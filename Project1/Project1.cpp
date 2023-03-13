#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

//int main() {
//	int number{}; //empty brace initializer (same as int number = 0;) 
//	cout << number;
//}

//int main() {
//	int number = 0b11111111; //binary = 255
//	int number = 0xff; //hexadecimal = 255
//	cout << number;
//	
//}

//int main() {
//	int number = 1'000'000;
//	short another = number; //narrowing conversion - changes a value to a data type that may not be able to hold some of the possible values
//	cout << another;
//
//}
//

//--------Random number from 0 to 10-----------
int main() {
	srand(time(0)); //initialize random number generator
	for (int i = 0; i < 10; i++) {
		cout << (rand() % 10) + 1 << endl;
		//cout << (rand() % 10) + 1 << " "; <--If you want the results on the same line
	}
}