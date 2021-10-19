#include <iostream>
#include "TSet.h"
using namespace std;


void TestTBitField()
{
	int universe = 100, item = 45;
	int arr1[] = { 2, 4, 7, 65, 100, 23, 3, -2 }; int size1 = 8;
	int arr2[] = { 4, 2, 65, 12 }; int size2 = 4;
	string arr3 = "25 23 , | 4| / 4. 43. -34.54.;64;35/42/310";

	TBitField a(universe);
	TBitField b(a);
	TBitField c;
	c = a;
	cout << "\t=== ���� ������ TBitField ===" << endl;
	cout << "\t=== ���� 1 �����: ������������, �������� ������������ ===" << endl;
	cout << "������� ����� " << universe << endl;
	cout << "a.GetBit(" << item << ") = " << a.GetBit(item) << endl;
	cout << "a.GetNumberMem(" << item << ") = " << a.GetNumberMem(item) << endl;
	cout << "b.GetBit(" << item << ") = " << b.GetBit(item) << endl;
	cout << "b.GetNumberMem(" << item << ") = " << b.GetNumberMem(item) << endl;
	cout << "c.GetBit(" << item << ") = " << c.GetBit(item) << endl;
	cout << "c.GetNumberMem(" << item << ") = " << c.GetNumberMem(item) << endl;

	cout << "\n\t=== ���� 2 �����: ���������� ��������� � ����������� � ������ ===" << endl;

	for (int i = 0; i < size1; i++) a.Add(arr1[i], universe);
	cout << "����������� �������� � �: ";
	for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
	cout << "\n���������� ������ a.ToString: " + a.ToString(universe) << endl;
	c.AddString(arr3, universe);
	cout << "������, ����������� � �: " + arr3 << endl;
	cout << "���������� ������ � �.ToString: " << c.ToString(universe) << endl;

	cout << "\n\t=== ���� 3 �����: �����������, �����������, ��������� ===" << endl;

	for (int i = 0; i < size2; i++) b.Add(arr2[i], universe);
	cout << "����������� �������� � �: ";
	for (int i = 0; i < size2; i++) cout << arr2[i] << " ";
	cout << "\n��� ������� ��������:" << endl;
	cout << "A: " << a.ToString(universe) << endl;
	cout << "B: " << b.ToString(universe) << endl;
	cout << "�����������: " << (a + b).ToString(universe) << endl;
	cout << "�����������: " << (a * b).ToString(universe) << endl;
	cout << "��������� A: " << (~a).ToString(universe) << endl;

	cout << '\n';
}

void TestStringToWords()
{
	cout << "\t=== ���� ������ StringToWords ===" << endl;
	string str = "abf gooas ...,!Q< sa,,, sa23! f3445 ++''| f32g;_=";
	string* words; int size;
	words = StringToWords(str, AllSeparators, size);
	cout << "������ " << str << " ���������� � �����:" << endl;
	for (int i = 0; i < size; i++)
		cout << words[i] << endl;
}

void TestTSet()
{
	int universe = 100, item = 45;
	int arr1[] = { 2, 4, 7, 65, 100, 23, 3, -2 }; int size1 = 8;
	int arr2[] = { 4, 2, 65, 12 }; int size2 = 4;
	string arr3 = "25 23 , | 4| / 4. 43. -34.54.;64;35/42/310";
	string arr4 = "234, 53, 2512. 15.-12 3 21";

	cout << "\t=== ���� ������ TSet ===" << endl;
	cout << "\t=== ���� 1 �����: ������������, �������� ������������ ===" << endl;
	cout << "������� ����� " << universe << endl;
	TSet a(universe, arr3);
	cout << "�������� ��������� � �� �������: " << arr3 << endl;
	cout << "� ��������� � �����: " << a.ToString() << endl;
	TSet b(a);
	cout << "����������� � � � ���������. � ��������� � �����: " << b.ToString() << endl;
	TSet c; c = a;
	cout << "������������ � = � ���������. � ��������� � �����: " << c.ToString() << endl;


	cout << "\n\t=== ���� 2 �����: ���������� ��������� � ����������� � ������ ===" << endl;

	for (int i = 0; i < size1; i++) a.Add(arr1[i]);
	cout << "����������� �������� � �: ";
	for (int i = 0; i < size1; i++) cout << arr1[i] << " ";
	cout << "\n���������� ������ a.ToString: " + a.ToString() << endl;
	c.AddString(arr4);
	cout << "������, ����������� � �: " + arr4 << endl;
	cout << "���������� ������ � �.ToString: " << c.ToString() << endl;

	cout << "\n\t=== ���� 3 �����: �����������, �����������, ��������� ===" << endl;

	for (int i = 0; i < size2; i++) b.Add(arr2[i]);
	cout << "����������� �������� � �: ";
	for (int i = 0; i < size2; i++) cout << arr2[i] << " ";
	cout << "\n��� ������� ��������:" << endl;
	cout << "A: " << a.ToString() << endl;
	cout << "B: " << b.ToString() << endl;
	cout << "�����������: " << (a + b).ToString() << endl;
	cout << "�����������: " << (a * b).ToString() << endl;
	cout << "��������� A: " << (~a).ToString() << endl;
	cout << "A - B: " << (a-b).ToString() << endl;

	cout << '\n';
}


void main()
{
	setlocale(LC_ALL, "ru");
	//TestTBitField();
	TestTSet();
	//TestStringToWords();

	system("pause");
}