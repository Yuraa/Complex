// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
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
		cout << "1. Поиск сопряженного числа" << endl;
		cout << "2. Скалярное произведение двух чисел" << endl;
		cout << "3. Векторное произведение двух" << endl;
		cout << "4. Расстояние между числами" << endl;
		cout << "5. Модуль числа" << endl;
		cout << "6. Аргумен числа" << endl;
		cout << "7. Сравнение двух чисел" << endl;
		cout << "8. Сложение двух чисел" << endl;
		cout << "9. Разность двух чисел" << endl;
		cout << "10. Произведение двух чисел" << endl;
		cout << "11. Частное двух чисел" << endl;
		cout << "0. Выход" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
		{  
		system("cls");
		cout << "Введите комплексное число" << endl;
		cin >> a >> b;
		cn.SetNumber(a, b);
		cout << "Введенное число: ";
		cn.PrintNumber();
		Compl cn3;
		cn3 = cn.sopryazh();
		cout << "Результат: ";
		cn3.PrintNumber();
		_getch();
		break;
		}
		case 2:
			double sc;
			{   system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			sc = cn.scalarUmn(cn2);
			cout << "Результат: " << sc << endl;
			_getch();
			break;
			}
		case 3:
			double vp;
			{   system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			vp = cn.vectorUmn(cn2);
			cout << "Результат: " << vp;
			_getch();
			break;

			}
		case 4:
		{
			system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();
			cout << "Результат: " << cn.distanc(cn2);
			_getch();
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();
			cout << "Результат: " << cn.modul();
			_getch();
			break;
		}
		case 6:
		{
			system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();
			cout << "Результат :" << cn.argum();
			_getch();
			break;
		}
		case 7:
			bool c;
			{   system("cls");
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			c = cn.sravn(cn2);
			if (c == 1) cout << "Числа равны" << endl;
			else cout << "Числа не равны" << endl;
			_getch();
			break;
			}
		case 8:
		{
			system("cls");
			Compl cn3;

			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cn3 = cn.sum(cn2);
			cout << "Результат: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 9:
		{
			system("cls");
			Compl cn3;
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			cn3 = cn.vych(cn2);
			cout << "Результат: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 10:
		{
			system("cls");
			Compl cn3;
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			cn3 = cn.umn(cn2);
			cout << "Результат: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		case 11:
		{
			system("cls");
			Compl cn3;
			cout << "Введите первое комплексное число" << endl;
			cin >> a >> b;
			cn.SetNumber(a, b);
			cout << "Введенное число: ";
			cn.PrintNumber();

			cout << "Введите второе комплексное число" << endl;
			cin >> a >> b;
			cn2.SetNumber(a, b);
			cout << "Введенное число: ";
			cn2.PrintNumber();

			cn3 = cn.delen(cn2);
			cout << "Результат: ";
			cn3.PrintNumber();
			_getch();
			break;
		}
		}
	} while (menu);
	return 0;
}

