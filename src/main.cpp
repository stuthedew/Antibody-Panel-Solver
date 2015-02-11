#include <iostream>
#include <fstream>
#include <algorithm>
#include <antibodyParser.h>
#include <bitset>

using namespace std;

typedef union {
	int32_t blob;
	struct{
		int32_t react:1;
		int32_t data:31;
	};
}data_t;


int main(int argc, char *argv[]) {

	ifstream file ( "data/screen4.csv" );
	string value, dummyValue, subString;

	getline ( file, dummyValue, '\r' );
	getline ( file, dummyValue, '\r' );
	Row test(dummyValue, ",");
	data_t testData;
	testData.data = test.extract();
	bitset<25> y(testData.data);
	cout << y  <<endl;

/*
	while ( file.good() )
		{
		getline ( file, value, ',' );
		
		cout << value << '_'; // display value removing the first and the last character from it
		subString = value.substr();
		}
*/

}
