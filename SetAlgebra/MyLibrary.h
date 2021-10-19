#pragma once
#include <string>
using namespace std;
#define AllSeparators " .,/;:'\"|?\\&?()*^%$#=@!+_][}{<>~`"

string* StringToWords(string str, string separators, int& emptySize) // Возвращает массив слов
{
	int k = 0;
	string* words = new string[(str.length()+1) / 2];
	string addWord = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (separators.find(str[i]) != -1) // Найден знак-разделитель
		{
			if (addWord.length() != 0) words[k++] = addWord;
			addWord = "";
		}
		else
		{
			addWord += str[i];
		}
			
	}
	if (addWord.length() != 0) words[k++] = addWord;
	emptySize = k;
	return words;
}
