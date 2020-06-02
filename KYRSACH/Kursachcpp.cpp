#include "Functions.h"

int _stateMenu;


void MENU()
{

	cout << "�������� ��������: " << endl;
	cout << "(1) ���� ������" << endl;
	cout << "(2) ����� ������" << endl;
	cout << "(3) ���������" << endl;
	cout << "(4) ��������" << endl;
	cout << "(5) ����������" << endl;
	cout << "(6) ����������" << endl;
	cout << "(7) ����������" << endl;
	cout << "(0) ����� �� ���������" << endl;
	cout << "��� �����: ";
		cin >> _stateMenu;
}


void main()
{
	SetConsoleCP(1251);  // ��� ��� �����
	SetConsoleOutputCP(1251); // ��� ��� ������

	MENU();


	int _actions;
	int amountOfData = 0;
	string fileName;


	Data* d = new Data[amountOfData]; // ������ ������



	while (_stateMenu != 0)
	{
		switch (_stateMenu)
		{
		case 1:
			system("cls");

			cout << "���� ������� ��� �� �����?: ";
			cin >> _actions;

			system("cls");

			if (_actions == 1)
			{
				DataEntry(d, amountOfData);
			}
			else
			{

				cout << "������� �������� �����: ";
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
				cout << "������ �����!!!" << endl;

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
				cout << "������ �����!!!" << endl;

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
				cout << "������ �����!!!" << endl;

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
				cout << "������ �����!!!" << endl;

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
				cout << "������ �����!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 7:
			system("cls");

			cout << "������� �������� �����: ";
			cin >> fileName;

			if (amountOfData != 0)
			{
				SavingData(d, amountOfData, fileName);

			}
			else
				cout << "������ �����!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		default:
			cout << "�� ������ ����� ��������!!!" << endl;
			system("pause");
			system("cls");
			MENU();
			break;
		}
	}

}