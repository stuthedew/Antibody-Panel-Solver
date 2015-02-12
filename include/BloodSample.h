/*
 * BloodSample.h
 *
 *  Created on: Feb 11, 2015
 *      Author: Stuart
 */



#ifndef BLOODSAMPLE_H_
#define BLOODSAMPLE_H_

#include <iostream>
#include <string>
#include <SampleFactory.h>

class SampleFactory;
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
friend class SampleFactory;
public:
	//TestSample();
	int32_t
		getID( void ) const ,
		getAntigens( void ) const;

	bool
		getReactionStatus( void ) const;

	void
		setAntigenData( int32_t dateBV );


private:
	int
		_ID;

	int32_t
		_antigenBV;

	bool
		_reactionStatus;
};


class PatientSample:public BloodSample{
public:
	PatientSample();

	void
		eliminatePossibleAntigens( int32_t negativeTest );
	int32_t getPossibleAntigens( void ) const;

private:
	int32_t _reactionBV;
};


#endif /* BLOODSAMPLE_H_ */
