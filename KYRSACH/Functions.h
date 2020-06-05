#pragma once

#include <iostream>  // Для работы ввода и вывода
#include <fstream>   // Для работы с файлами
#include <string>    // Для работы с строками
#include <Windows.h> // Для работы с функциями системы
#include <conio.h>

using namespace std;

/* 
	ФИО
	Номер учетной карточки
	вид работы
	стоимость
	отметка об оплате
	сумма задолженность за лечение
*/



struct FIO  // Структура ФИО
{
	string surname,
		   name,
		   patronomic;
};

struct Info // Структура доп.данных
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

void DataEntry(Data* (&d), int &n);						// Ввод данных вручную
void ReadingData(Data* (&d), int& n, string fileName);  // Чтение данных из файла
void Print(Data* d, int n);								// Вывод даных
void DataChange(Data* (&d), int n);						// Изменение 
void DeleteData(Data* (&d), int& n);					// Удаление
void Copy(Data* (&d_n), Data* (&d_o), int n);			// Копия данных
void Copy(Data& d_n, Data& d_o);						// Копия даных элемента
void AddData(Data* (&d),int &n);						// Добавление
void DataSorting(Data *d, int n);						// Сортировка
void SavingData(Data* d,int n, string fileName);		// Сохранение 