// ConsoleApplication6.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "compl.h"
#include <iostream>
#include "conio.h"

using namespace std;







int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	Compl cn;
	Compl cn2;
	int menu;
	int a, b;

	do{
		system("cls");
		cout << "1. ����� ������������ �����" << endl;
		cout << "2. ��������� ������������ ���� �����" << endl;
		cout << "3. ��������� ������������ ����" << endl;
		cout << "4. ���������� ����� �������" << endl;
		cout << "5. ������ �����" << endl;
		cout << "6. ������� �����" << endl;
		cout << "7. ��������� ���� �����" << endl;
		cout << "8. �������� ���� �����" << endl;
		cout << "9. �������� ���� �����" << endl;
		cout << "10. ������������ ���� �����" << endl;
		cout << "11. ������� ���� �����" << endl;
		cout << "0. �����" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{  
		system("cls");
		cout << "������� ����������� �����" << endl;
		cin >> a >> b;
		cn.SetNumber(a, b);
		cout << "��������� �����: ";
		cn.PrintNumber();
		Compl cn3;
		cn3 = cn.sopryazh();
		cout << "���������: ";
		cn3.PrintNumber();
		_getch();
		break;
		}
		case 2:
			double sc;
			{   system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			sc = cn.scalarUmn(cn2);
			cout << "���������: " << sc << endl;
			_getch();
			break;
			}
		case 3:
			double vp;
			{   system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			vp = cn.vectorUmn(cn2);
			cout << "���������: " << vp;
			_getch();
			break;

			}
		case 4:
		{
			system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();
			cout << "���������: " << cn.distanc(cn2);
			_getch();
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();
			cout << "���������: " << cn.modul();
			_getch();
			break;
		}
		case 6:
		{
			system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();
			cout << "��������� :" << cn.argum();
			_getch();
			break;
		}
		case 7:
			bool c;
			{   system("cls");
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			c = cn.sravn(cn2);
			if (c == 1) cout << "����� �����" << endl;
			else cout << "����� �� �����" << endl;
			_getch();
			break;
			}
		case 8:
		{
			system("cls");
			Compl cn3;

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cn3 = cn.sum(cn2);
			cout << "���������: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 9:
		{
			system("cls");
			Compl cn3;
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			cn3 = cn.vych(cn2);
			cout << "���������: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 10:
		{
			system("cls");
			Compl cn3;
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			cn3 = cn.umn(cn2);
			cout << "���������: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 11:
		{
			system("cls");
			Compl cn3;
			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "��������� �����: ";
			cn.PrintNumber();

			cout << "������� ������ ����������� �����" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "��������� �����: ";
			cn2.PrintNumber();

			cn3 = cn.delen(cn2);
			cout << "���������: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		}
	} while (menu);
	return 0;
}

