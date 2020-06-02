#include "Functions.h"

int _stateMenu;


void MENU()
{

	cout << "Выберите Действие: " << endl;
	cout << "(1) Ввод данных" << endl;
	cout << "(2) Вывод данных" << endl;
	cout << "(3) Изменение" << endl;
	cout << "(4) Удаление" << endl;
	cout << "(5) Добавление" << endl;
	cout << "(6) Сортировка" << endl;
	cout << "(7) Сохранение" << endl;
	cout << "(0) Выход из программы" << endl;
	cout << "Ваш выбор: ";
		cin >> _stateMenu;
}


void main()
{
	SetConsoleCP(1251);  // Рус для ввода
	SetConsoleOutputCP(1251); // рус для вывода

	MENU();


	int _actions;
	int amountOfData = 0;
	string fileName;


	Data* d = new Data[amountOfData]; // массив данных



	while (_stateMenu != 0)
	{
		switch (_stateMenu)
		{
		case 1:
			system("cls");

			cout << "Ввод вручную или из файла?: ";
			cin >> _actions;

			system("cls");

			if (_actions == 1)
			{
				DataEntry(d, amountOfData);
			}
			else
			{

				cout << "Введите название файла: ";
				cin >> fileName;

				ReadingData(d, amountOfData, fileName);
			}

			system("pause");
			system("cls");
			MENU();
			break;
			///////////////////////////////////////////////////
		case 2:
			system("cls");

			if (amountOfData != 0)
			{
				Print(d, amountOfData);
			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 3:
			system("cls");

			if (amountOfData != 0)
			{
				DataChange(d, amountOfData);
			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 4:
			system("cls");

			if (amountOfData != 0)
			{
				DeleteData(d, amountOfData);
			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 5:
			system("cls");

			if (amountOfData != 0)
			{
				AddData(d, amountOfData);
				amountOfData++;
			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 6:
			system("cls");

			if (amountOfData != 0)
			{
				DataSorting(d, amountOfData);

			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 7:
			system("cls");

			cout << "Введите название файла: ";
			cin >> fileName;

			if (amountOfData != 0)
			{
				SavingData(d, amountOfData, fileName);

			}
			else
				cout << "Данные пусты!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		default:
			cout << "Не введен номер действия!!!" << endl;
			system("pause");
			system("cls");
			MENU();
			break;
		}
	}

}