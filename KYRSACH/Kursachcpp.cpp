#include "Functions.h"

int _stateMenu;

string spaceN =  "\n\n\n\n\n\n\n\n\n";
string spaceT = "\t\t\t\t ";

void MENU()
{
	system("mode con cols=90 lines=40");

	int pass;
	bool Pass = true;

	cout << spaceN;
	cout << spaceT  << "������� ������:" << endl;
	cout << spaceT << "������ - ";
	cin >> pass;

	 

	while (Pass == true)
	{
		if (pass == 12345)
		{
			bool passOk = true;
			Pass = false;
			system("cls");
			cout << spaceN;
			cout <<spaceT<< "�������� ��������: " << endl;
			cout <<spaceT<< "(1) ���� ������" << endl;
			cout <<spaceT<< "(2) ����� ������" << endl;
			cout <<spaceT<< "(3) ���������" << endl;
			cout <<spaceT<< "(4) ��������" << endl;
			cout <<spaceT<< "(5) ����������" << endl;
			cout <<spaceT<< "(6) ����������" << endl;
			cout <<spaceT<< "(7) ����������" << endl;
			cout <<spaceT<< "(0) ����� �� ���������" << endl;
			cout <<spaceT<< "��� �����: ";
			cin >> _stateMenu;
		}
		else
		{
			system("cls");
			cout << spaceN;
			cout << spaceT << "������ �� ���������� ������. " << endl;
			cout << spaceT <<"������ - ";
			cin >> pass;
		}
	}
		
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
			cout << spaceN;
			cout <<spaceT<< "���� ������� ��� �� �����?: " << endl;
			cout <<spaceT<< "���� ������� - 1 " << endl;
			cout <<spaceT<< "���� �� ����� - 2 " << endl;
			cin >> _actions;

			system("cls");


			

			if (_actions == 1)
			{
				DataEntry(d, amountOfData);
			}
			else if (_actions == 2)
			{
				cout << spaceN;
				cout << spaceT << "������� �������� �����: ";
				cin >> fileName;

				ReadingData(d, amountOfData, fileName);
			}
			else
			{
				
					system("cls");
					cout << spaceN;
					cout << spaceT << "�� ������ ����� ��������!" << endl;;

					cout << spaceT << "���� ������� ��� �� �����?: " << endl;
					cout << spaceT << "���� ������� - 1 " << endl;
					cout << spaceT << "���� �� ����� - 2 " << endl;
					cin >> _actions;

					system("cls");

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
				cout << spaceN;
				cout << spaceT << "������ �����!!!" << endl;

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
				cout << spaceN;
			cout << spaceT << "������ �����!!!" << endl;

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
				cout << spaceN;
			cout << spaceT << "������ �����!!!" << endl;

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
				cout << spaceN;
			cout << spaceT << "������ �����!!!" << endl;

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
				cout << spaceN;
			cout << spaceT << "������ �����!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		case 7:
			system("cls");
			cout << spaceN;
			cout << spaceT << "������� �������� �����: ";
			cin >> fileName;

			if (amountOfData != 0)
			{
				SavingData(d, amountOfData, fileName);

			}
			else
				cout << spaceN;
			cout << spaceT << "������ �����!!!" << endl;

			system("pause");
			system("cls");
			MENU();
			break;
			//////////////////////////////////////////////////
		default:
			cout << spaceN;
			cout << spaceT << "�� ������ ����� ��������!!!" << endl;
			system("pause");
			system("cls");
			MENU();
			break;
		}

	}

}