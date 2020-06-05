#pragma once

#include <iostream>  // ��� ������ ����� � ������
#include <fstream>   // ��� ������ � �������
#include <string>    // ��� ������ � ��������
#include <Windows.h> // ��� ������ � ��������� �������
#include <conio.h>

using namespace std;

/* 
	���
	����� ������� ��������
	��� ������
	���������
	������� �� ������
	����� ������������� �� �������
*/



struct FIO  // ��������� ���
{
	string surname,
		   name,
		   patronomic;
};

struct Info // ��������� ���.������
{
	string	_accountNumber,
		_costofwork,
		_zadoljnost;

	string _typeofwork,
		   _paymentmark;
};

struct Data
{
	FIO _fio;
	Info _info;
};

void DataEntry(Data* (&d), int &n);						// ���� ������ �������
void ReadingData(Data* (&d), int& n, string fileName);  // ������ ������ �� �����
void Print(Data* d, int n);								// ����� �����
void DataChange(Data* (&d), int n);						// ��������� 
void DeleteData(Data* (&d), int& n);					// ��������
void Copy(Data* (&d_n), Data* (&d_o), int n);			// ����� ������
void Copy(Data& d_n, Data& d_o);						// ����� ����� ��������
void AddData(Data* (&d),int &n);						// ����������
void DataSorting(Data *d, int n);						// ����������
void SavingData(Data* d,int n, string fileName);		// ���������� 