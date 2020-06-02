#include "Functions.h"

/*
	���
	����� ������� ��������
	��� ������
	���������
	������� �� ������
	����� ������������� �� �������
*/
void DataEntry(Data* (&d), int& n)
{
	cout << "������� ���-�� ������: ";
	cin >> n;

	// ������� ������
	d = new Data[n];

	for (int i = 0; i < n; i++)
	{
		cout << "������� ���: ";
		cin >> d[i]._fio.surname >> d[i]._fio.name >> d[i]._fio.patronomic;
	
		cout << "������� ����� ������� ��������: ";
		cin >> d[i]._info._accountNumber;

		cout << "������� ��� ������ (������������,�������������� � ��.): ";
		cin >> d[i]._info._typeofwork;

		cout << "������� ��������� ������: ";
		cin >> d[i]._info._costofwork;
		
		cout << "������� ������� �� ������ (��������/�� ��������): ";
		cin >> d[i]._info._paymentmark;

		cout << "������� ����� �����������: ";
		cin >> d[i]._info._zadoljnost;

		cout << "________________________________________________________ ";
	}
}

void ReadingData(Data* (&d), int& n, string fileName)
{
	ifstream reading(fileName);

	if (reading)
	{
		reading >> n;

		// ������� ������
		d = new Data[n];

		for (int i = 0; i < n; i++)
		{
			reading >> d[i]._fio.surname;
			reading >> d[i]._fio.name;
			reading >> d[i]._fio.patronomic;

			reading >> d[i]._info._accountNumber;
			reading >> d[i]._info._typeofwork;
			reading >> d[i]._info._costofwork;
			reading >> d[i]._info._paymentmark;
			reading >> d[i]._info._zadoljnost;
		}

		cout << "������ �������!!!" << endl;
	}
	else
		cout << "������ �������� �����!!!" <<endl;

	reading.close();
}

void Print(Data* d, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "������ #" << i + 1 << ": " << endl;
		
		cout << "���: " << d[i]._fio.surname << " " << d[i]._fio.name << " " << d[i]._fio.patronomic << endl;
		cout << "����� ������� ��������: " << d[i]._info._accountNumber << endl;
		cout << "��� ������: " << d[i]._info._typeofwork << endl;
		cout << "��������� ������: " << d[i]._info._costofwork << endl;
		cout << "������� �� ������: " << d[i]._info._paymentmark << endl;
		cout << "����� ����������� �� �������: " << d[i]._info._zadoljnost << endl;

		cout << "_____________________________________________________________________" << endl;

	}
}

void DataChange(Data* (&d), int n)
{
	int _n;
	cout << "������� ����� �������� (�� 1 �� " << n << "): ";
	cin >> _n;
	_n--;

	system("cls");


	if (_n >= 0 && _n < n) // �������� �� ������������ ��������
	{
		
		cout << "������� ���: ";
		cin >> d[_n]._fio.surname >> d[_n]._fio.name >> d[_n]._fio.patronomic;

		cout << "������� ����� ������� ��������: ";
		cin >> d[_n]._info._accountNumber;

		cout << "������� ��� ������ (������������,�������������� � ��.): ";
		cin >> d[_n]._info._typeofwork;

		cout << "������� ��������� ������: ";
		cin >> d[_n]._info._costofwork;

		cout << "������� ������� �� ������ (��������/�� ��������): ";
		cin >> d[_n]._info._paymentmark;

		cout << "������� ����� �����������: ";
		cin >> d[_n]._info._zadoljnost;

		system("cls");

		cout << "������ ��������!" << endl;
	}
	else
		cout << "����� ������ �� �����!!!" << endl;
}

void DeleteData(Data* (&d), int& n)
{
	int _n;
	cout << "������� ����� �������� (�� 1 �� " << n << "): ";
	cin >> _n;
	_n--;

	system("cls");


	if (_n >= 0 && _n < n) // �������� �� ������������ ��������
	{
		Data* buf = new Data[n];  // ��������� ������

		Copy(buf, d, n);

		// ��������� ����� ������
		--n;
		d = new Data[n];

		int q = 0;

		
		// ����������� ������ (����� �� �������)
		for (int i = 0; i <= n; i++)
		{
			if (i != _n)
			{
				d[q] = buf[i];
				++q;
			}
		}

		system("cls");
		delete[]buf;

		cout << "������ �������!" << endl;
	}
	else
		cout << "����� ������ �� �����!!!" << endl;
}

void Copy(Data* (&d_n), Data* (&d_o), int n)
{
	for (int i = 0; i < n; i++)
	{
		d_n[i] = d_o[i];
	}
}

void Copy(Data& d_n, Data& d_o)
{
	d_n._fio.surname = d_o._fio.surname;
	d_n._fio.name = d_o._fio.name;
	d_n._fio.patronomic = d_o._fio.patronomic;

	d_n._info._accountNumber = d_o._info._accountNumber;
	d_n._info._typeofwork = d_o._info._typeofwork;
	d_n._info._costofwork = d_o._info._costofwork;
	d_n._info._paymentmark = d_o._info._paymentmark;
	d_n._info._zadoljnost = d_o._info._zadoljnost;
}

void AddData(Data* (&d), int &n)
{
	// ��������� ������
	Data* buf;
	buf = new Data[n];

	Copy(buf, d, n); // ��������� ������ � ��������� ������

	// ��������� ����� ������
	n++;
	d = new Data[n];

	Copy(d, buf, --n); // ����������� ������

	cout << "������� ���: ";
	cin >> d[n]._fio.surname >> d[n]._fio.name >> d[n]._fio.patronomic;

	cout << "������� ����� ������� ��������: ";
	cin >> d[n]._info._accountNumber;

	cout << "������� ��� ������ (������������,�������������� � ��.): ";
	cin >> d[n]._info._typeofwork;

	cout << "������� ��������� ������: ";
	cin >> d[n]._info._costofwork;

	cout << "������� ������� �� ������ (��������/�� ��������): ";
	cin >> d[n]._info._paymentmark;

	cout << "������� ����� �����������: ";
	cin >> d[n]._info._zadoljnost;

	system("cls");

	cout << "������ ���������!!!" << endl;

	delete[]buf;
}

void DataSorting(Data *d, int n)
{

	Data buf;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (d[i]._fio.surname > d[i]._fio.surname)
			{
				Copy(buf, d[j]);
				Copy(d[j], d[i]);
				Copy(d[i], buf);
			}
		}
	}

	cout << "������ ��������������!!!" << endl;
}

void SavingData(Data* d, int n, string fileName)
{
	ofstream record(fileName, ios::out);  // ����� ��� ������

	if (record)
	{
		record << n << endl;

		for (int i = 0; i < n; i++)
		{
			record << d[i]._fio.surname << endl;
			record << d[i]._fio.name << endl;
			record << d[i]._fio.patronomic << endl;

			record << d[i]._info._accountNumber << endl;
			record << d[i]._info._typeofwork << endl;
			record << d[i]._info._costofwork << endl;
			record << d[i]._info._paymentmark << endl;
			if (i < n - 1)
				record << d[i]._info._zadoljnost << endl;
			else
				record << d[i]._info._zadoljnost;


		}
	}
	else
		cout << "������ �������� �����!!!" << endl;

	record.close();
}
