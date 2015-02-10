#include <iostream>
#include <fstream>
#include <antibodyParser.h>

using namespace std;
Row test;
int main(int argc, char *argv[]) {
	ifstream file ( "data/screen4.csv" );
	string value, dummyValue, subString;

	getline ( file, dummyValue, '\r' );

	while ( file.good() )
		{
		getline ( file, value, ',' );
		
		cout << value; // display value removing the first and the last character from it
		subString = value.substr();
		}
	cout << endl << test.testFunc();
}
