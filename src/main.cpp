#include <iostream>
#include <fstream>
#include <string>

typedef enum{
	D = 0,C,E,c,e,f,
	C_w,V,M,N,S,s,P1,
	Le_a,Le_b,Lu_a,
	Lu_b,K,k,Kp_a,
	Js_a,Fy_a,Fy_b,
	Jk_a,Jk_b,Xg_a

	
}antibody_e;

class Row{
	public:
		Row(){
			
		}
		
	private:
		typedef struct antibody_t{
			antibody_e epitope ;
			bool const reaction ;
			
			antibody_t( antibody_e e, bool b):epitope( e ), reaction( b ){}		
		}antibody_t;
		
	antibody_t* _screen;
};

using namespace std;
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

}
