#include <iostream>
#include <fstream>
#include <algorithm>
#include <AntibodyParser.h>
#include <bitset>
#include <BloodSample.h>
#include <SampleFactory.h>
#include <vector>

using namespace std;



PatientSample Unknown;
BloodSample* Screen;
BloodSample* Reflex;

char header[] = "D\tC\tE\tc\te\tf\tC_w\tV\tM\tN\tS\ts\tP1\tLe_a\tLe_b\tLu_a\tLu_b\tK\tk\tKp_a\tJs_a\tFy_a\tFy_b\tJk_a\tJk_b\tXg_a";

int main(int argc, char *argv[]) {




	SampleFactory sf( "data/screen4.csv", "data/reflexPanel.csv", "data/Unknown1_4.csv");
	TestSample * screen = sf.makeSamples(type_screen);
	TestSample * reflex = sf.makeSamples(type_reflex);
	bitset<26> y(Unknown.getPossibleAntigens());
	//cout << y << endl;

	if(screen[0].getReactionStatus() || screen[1].getReactionStatus()){
	for(int i = 0; i < 2; i++){
		//bitset<26> y(screen[i].getAntigens());
		//cout << y << ", " << screen[i].getReactionStatus() << endl;
		if(!screen[i].getReactionStatus()){
			Unknown.eliminatePossibleAntigens(screen[i].getAntigens());
		}

	}
	}
	//cout << endl;
	y=Unknown.getPossibleAntigens();
		//cout << y << endl;
		//cout << endl;

	for(int i = 0; i < 11; i++){
			//bitset<26> y(reflex[i].getAntigens());
			//cout << y << ", " << reflex[i].getReactionStatus() << endl;
		if(!reflex[i].getReactionStatus()){
					Unknown.eliminatePossibleAntigens(reflex[i].getAntigens());
				}
		}
	//cout << endl;
		y=Unknown.getPossibleAntigens();
			string bit = y.to_string();
			cout << header << endl;
			for(int i = 0; i < bit.length(); i++){
				cout << bit[i] << '\t';
			}
			cout << endl;
}
