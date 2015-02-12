/*
 * SampleFactory.h
 *
 *  Created on: Feb 11, 2015
 *      Author: Stuart
 */

#ifndef SAMPLEFACTORY_H_
#define SAMPLEFACTORY_H_

#include <iostream>
#include <string>
#include <fstream>
#include <AntibodyParser.h>
#include <BloodSample.h>


#define SCREEN_NUM 2
#define REFLEX_NUM 11

class TestSample;

typedef enum{
type_screen,
type_reflex

}sample_type_e;

class SampleFactory {
public:
	SampleFactory( std::string screenPath, std::string reflexPath, std::string reactionPath );
	virtual ~SampleFactory();

	TestSample*
		makeSamples(sample_type_e e );

private:
	std::ifstream
		_screenFile,
		_reflexFile,
		_reactionFile;

	void
		_loadReactions( std::ifstream* f, TestSample* b, int n , int start=0);
	TestSample* _loadAntigens( std::ifstream* f, TestSample* b, int n);

	TestSample* _screenAry;
	TestSample* _reflexAry;




};

#endif /* SAMPLEFACTORY_H_ */
