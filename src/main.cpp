#include <iostream>
#include <fstream>
#include <algorithm>
#include <AntibodyParser.h>
#include <AntibodyLoader.h>
#include <BloodSample.h>
#include <vector>

using namespace std;

BloodSample Unkown;
vector<BloodSample> Screen;
vector<BloodSample> Reflex;

int main(int argc, char *argv[]) {
/*
	//ifstream file ( "data/screen4.csv" );
	ifstream file ( "data/reflexPanel.csv" );
	string value, dummyValue, subString;

	getline ( file, dummyValue, '\r' );

	Row test;
	cout << sizeof(antibody_e);
	while(file.good()){
		getline ( file, dummyValue, '\r' );
		test.setString(dummyValue, ",");
		antigen_data_t testData;
		testData.data = test.extract();

	}
*/

// Check UNKNOWN blood sample against SCREEN samples

// If NEGATIVE then NO ANTIGENS

// else if POSITIVE then check UNKNOWN against NEGATIVE REFLEX

// return ANTIGENS


}
