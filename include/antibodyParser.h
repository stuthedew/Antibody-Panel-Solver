/*
 * AntibodyParser.h
 *
 *  Created on: Feb 10, 2015
 *      Author: Stuart
 */

#ifndef ANTIBODYPARSER_H_
#define ANTIBODYPARSER_H_

#include <iostream>
#include <fstream>
#include <string>



class Row{
	public:
		Row( );

		void
			setString( std::string s, std::string delim );

		int32_t extract( int skip = 1 );

	private:
		/*
		typedef struct antibody_t{
			antibody_e epitope ;
			bool const reaction ;

			antibody_t( antibody_e e, bool b):epitope( e ), reaction( b ){}
		}antibody_t;
*/
		std::string
			_rawString,
			_delim ;
};



#endif /* ANTIBODYPARSER_H_ */
