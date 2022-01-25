#pragma once
/*!	\file		Party.hpp
	\author		Garth Santor
	\date		2019-09-07

	Tony's Party Politics exercise - Party class declaration.
*/

#include <string>

class Party {
	std::string name_;
	std::string leader_;
	unsigned seatsWon_ = 0;
	float votePercentage_ = 0.0f;
public:
	inline decltype(name_) name() const { return name_; }
	inline decltype(leader_) leader() const { return leader_; }
	inline decltype(seatsWon_) seatsWon() const { return seatsWon_; }
	inline decltype(votePercentage_) votePercentage() const { return votePercentage_; }

	friend std::istream& operator >> (std::istream& is, Party& p);

	Party() = default;
	Party(std::string const& name, std::string const& leader, unsigned seatsWon = 0, float votePer = 0.0)
		: name_(name), leader_(leader), seatsWon_(seatsWon), votePercentage_(votePer) { }
};


std::ostream& operator << (std::ostream& os, Party const& p);

inline bool operator < (Party const& lhs, Party const& rhs) {
	return lhs.name() < rhs.name();
}
