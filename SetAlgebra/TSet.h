#pragma once
#include "TBitField.h"
using namespace std;

class TSet
{
private:
	int universe;
	TBitField bitField;

public:
	TSet(int universe = 0, string str = "");
	TSet(const TSet& other);
	TSet& operator=(const TSet& other);
	~TSet() {};

	void Add(int item);
	void AddString(string str);
	void Erase();
	string ToString();

	TSet operator+(TSet other);
	TSet operator*(TSet other);
	TSet operator~();
	TSet operator-(TSet other);
};
TSet::TSet(int universe, string str)
{
	this->universe = universe;
	bitField = TBitField(universe);
	bitField.AddString(str, universe);
}
inline TSet::TSet(const TSet& other)
{
	universe = other.universe;
	bitField = other.bitField;
}
inline TSet& TSet::operator=(const TSet& other)
{
	if (universe != other.universe)
		universe = other.universe;
	bitField = other.bitField;
	return *this;
}


inline void TSet::Add(int item)
{
	if (item >= 0 && item <= universe)
		bitField.Add(item, universe);
}

inline void TSet::AddString(string str)
{
	bitField.AddString(str, universe);
}

inline void TSet::Erase()
{
	bitField.Erase();
}

inline string TSet::ToString()
{
	return bitField.ToString(universe);
}

inline TSet TSet::operator+(TSet other)
{
	TSet result(universe);
	result.bitField = bitField + other.bitField;
	return result;
}

inline TSet TSet::operator*(TSet other)
{
	TSet result(universe);
	result.bitField = bitField * other.bitField;
	return result;
}

inline TSet TSet::operator~()
{
	TSet result(universe);
	result.bitField = ~bitField;
	return result;
}

inline TSet TSet::operator-(TSet other)
{
	TSet result(*this);
	result.bitField = bitField * (~other.bitField);
	return result;
}
