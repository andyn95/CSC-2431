/*
	The purpose of this program is to 
	do tests on my code as I go along.
*/

#include "polynomial.h"

#include <iostream>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::stringstream;

int main(int argc, char* argv[]){
	stringstream buffer1;
	buffer1.str(
		"3 -1 2 0 -2.5"
	);

	Polynomial p(3);
	p.Read(buffer1);
	cout << p.ToString() << endl;
	p.Write(cout);
	cout << endl;

	cout << endl << endl;
	cout << p.Minus().ToString() << endl;

	return 0;
}
