/*
 * BloodSample.h
 *
 *  Created on: Feb 11, 2015
 *      Author: Stuart
 */

#include <iostream>

#ifndef BLOODSAMPLE_H_
#define BLOODSAMPLE_H_

typedef enum{
	D = 0,C,E,c,e,f,
	C_w,V,M,N,S,s,P1,
	Le_a,Le_b,Lu_a,
	Lu_b,K,k,Kp_a,
	Js_a,Fy_a,Fy_b,
	Jk_a,Jk_b,Xg_a


}antibody_e;


typedef union {
	int32_t blob;
	struct{
		int32_t react:1;
		int32_t data:31;

	};
}antigen_data_t;


class BloodSample {
public:
	BloodSample();
	virtual ~BloodSample();



};

class TestSample:public BloodSample{
public:
	TestSample( int id, bool reaction );
	int
		getID( void ) const ;

	bool
		getReactionStatus( void ) const;


private:
	int const
			_ID;
	bool const
		_reactionStatus;

	antigen_data_t
		_antigens;
};


class PatientSample:public BloodSample{
public:
	PatientSample();

	void
		eliminatePossibleAntigens( int32_t negativeTest );

private:
	int32_t _reactionBV;
};


#endif /* BLOODSAMPLE_H_ */
