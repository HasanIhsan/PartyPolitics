/*!	\file		Party.cpp
	\author		Garth Santor
	\date		2019-09-07

	Tony's Party Politics exercise - Party class implementation.
*/

#include "Party.hpp"
#include <string>
#include <iomanip>
#include <istream>
#include <limits>
using namespace std;


/*! Formatted stream extraction operator.
	*/
istream& operator >> (istream& is, Party& p) {
	is >> ws;
	getline(is, p.name_, ',');
	is >> ws;
	getline(is, p.leader_, ',');
	is >> p.seatsWon_;
	is.ignore(numeric_limits<streamsize>::max(), ',');
	is >> p.votePercentage_;
	return is;
}


/*!	Formatted stream insertion operator.
	*/
ostream& operator << (ostream& os, Party const& p) {
	return os << left << setw(15) << p.name() << setw(15) << p.leader()
		<< setw(10) << p.seatsWon() << setw(10) << p.votePercentage() << endl;
}
