#pragma once
#include "MyLibrary.h"
using namespace std;

class TBitField
{
private:
	System::UInt32* mem;
	int size;


public:
	TBitField(int universe);
	TBitField(const TBitField& other);

	int GetBit(int itemNumber);
	int GetNumberMem(int itemNumber);

	void Add(int item, int universe);
	void Erase();
	string ToString(int universe);
	void AddString(string str, int universe);
	
	TBitField operator+(TBitField other);
	TBitField operator*(TBitField other);
	TBitField operator~();


	TBitField& operator=(TBitField other);

	~TBitField();




};

inline TBitField::TBitField(int universe = 0)
{
	size = universe / (8 * sizeof(System::UInt32)) + 1;
	mem = new System::UInt32[size];
	for (int i = 0; i < size; i++)
	{
		mem[i] = 0;
	}
}

inline TBitField::TBitField(const TBitField& other)
{
	size = other.size;
	mem = new System::UInt32[size];
	for (int i = 0; i < size; i++)
	{
		mem[i] = other.mem[i];
	}
}
inline int TBitField::GetBit(int itemNumber)
{
	return (itemNumber-1) % (sizeof(System::UInt32) * 8);
}
inline int TBitField::GetNumberMem(int itemNumber)
{
	return (itemNumber-1)/(sizeof(System::Int32)*8);
}
inline void TBitField::Add(int item, int universe)
{
	if (item <= 0 || item > universe) return; // Не можем добавить отрицательный или превышающий универс элемент
	int i = GetNumberMem(item);
	mem[i] = mem[i] | (1 << GetBit(item));
}
inline void TBitField::Erase()
{
	for (int i = 0; i < size; i++)
		mem[i] = 0;
}
inline string TBitField::ToString(int universe)
{
	string res;
	bool isFirstItem = true;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < 8 * sizeof(System::UInt32); j++)
		{
			if ((mem[i] & (1 << j)) > 0)
			{
				int k = i * 8 * sizeof(System::UInt32) + j + 1;
				if (k <= universe)
				{
					if (!isFirstItem) res += ", ";
					res += to_string(k);
					if (isFirstItem) isFirstItem = false;
				}
			}
		}
	return res;
}
inline void TBitField::AddString(string str, int universe)
{
	int size;
	string* words = StringToWords(str, AllSeparators, size);
	for (int i = 0; i < size; i++)
		Add(stoi(words[i]), universe);

}
inline TBitField TBitField::operator+(TBitField other)
{
	TBitField res(size*8*sizeof(System::UInt32));
	for (int i = 0; i < size; i++)
		res.mem[i] = (mem[i] | other.mem[i]);
	return res;
}
inline TBitField TBitField::operator*(TBitField other)
{
	TBitField res(size * 8 * sizeof(System::UInt32));
	for (int i = 0; i < size; i++)
		res.mem[i] = mem[i] & other.mem[i];
	return res;
}
inline TBitField TBitField::operator~()
{
	TBitField res(size * 8 * sizeof(System::UInt32));
	for (int i = 0; i < size; i++)
		res.mem[i] = ~mem[i];
	return res;
}
inline TBitField& TBitField::operator=(TBitField other)
{
	if (size != other.size)
	{
		delete[] mem;
		size = other.size;
		mem = new System::UInt32[size];
	}
	for (int i = 0; i < size; i++)
	{
		mem[i] = other.mem[i];
	}
	return *this;

}
inline TBitField::~TBitField()
{
	delete[] mem;
}