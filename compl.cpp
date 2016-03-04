#include "stdafx.h"
#include "compl.h"
#include "math.h"
#include <conio.h>
#include <iostream>

using namespace std;

//Конструктор
Compl::Compl()
{
	real = 0;
	imaginary = 0;
}

//Деструктор
Compl::~Compl()
{
}


/*
BRIEF: Функция назначения мнимой и действительной части
IN: Значения для комплексного числа
OUT: none
*/

void Compl::SetNumber(double a, double b)
{
	real = a;
	imaginary = b;
}

/*
BRIEF: Функция вывода комплексного числа
IN: none
OUT: none
*/


void Compl::PrintNumber()
{
	if (imaginary < 0)
	{
		cout << real << " - " << sqrt(imaginary*imaginary) << "i" << endl;
	}
	else
	{
		cout << real << " + " << imaginary << "i" << endl;
	}
}

/*
BRIEF: Функция вычисления сопряженного числа
IN: none
OUT: Сопряженное число
*/

Compl Compl::sopryazh()
{
	Compl returnNumber;
	returnNumber = *this;
	returnNumber.imaginary = (-1)* imaginary;
	return returnNumber;
}


/*
BRIEF: Функция вычисления скалярнного произведения комплексных чисел
IN: Два комплексных числа
OUT: Скалярное произведение
*/
double Compl::scalarUmn(Compl number)
{
	double scalarProduct;
	scalarProduct = (real*number.real) + (imaginary*number.imaginary);
	return (scalarProduct);
}


/*
BRIEF: Функция вычисления векторного произведения комплексных чисел
IN: Два комплексных числа
OUT: Векторное произведение
*/

double  Compl::vectorUmn(Compl number)
{
	double vectorProduct;
	vectorProduct = (real*number.imaginary) - (imaginary*number.real);
	return (vectorProduct);
}


/*
BRIEF: Функция нахождения расстояния между комплексными числами
IN: Два комплексных числа
OUT: Расстояние
*/

double  Compl::distanc(Compl number)
{

	return sqrt((real - number.real)*(real - number.real) +
		(imaginary - number.imaginary)*(imaginary - number.imaginary));
}




/*
BRIEF: Функция нахождения модуля
IN: Комплексное число
OUT: Модуль
*/

double Compl::modul()
{
	return sqrt(real*real + imaginary*imaginary);

}

/*
BRIEF: Функция нахождения аргумента комплексного числа
IN: Комплексное число
OUT: Аргумент
*/

double  Compl::argum()
{
	return atan(imaginary / real);
}


/*
BRIEF: Функция сравнения двух комплексных чисел
IN: два комплексных числа
OUT: true, если числа равны, или false, если числа не равно
*/


bool  Compl::sravn(Compl &number)
{

	if ((real == number.real) && (imaginary == number.imaginary))
		return true;
	else
		return false;

}

/*
BRIEF: Функция сложения двух комплекнсых чисел
IN: none
OUT: Сумма двух комплексных чисел
*/

Compl Compl::sum(Compl &number)
{


	return Compl(real + number.real, imaginary + number.imaginary);
}


/*
BRIEF: Функция разности двух комплекнсых чисел
IN: none
OUT: Разность двух комплексных чисел
*/
Compl Compl::vych(Compl &number)
{

	return Compl(real - number.real, imaginary - number.imaginary);
}

/*
BRIEF: Функция произведения двух комплесных чисел
IN:  none
OUT: Произведение двух комплесных чисел
*/

Compl Compl::umn(Compl &number)
{

	return Compl(real*number.real - imaginary*number.imaginary,
		real*number.imaginary + number.real*imaginary);
}


/*
BRIEF: Функция деления двух комплексных чисел
IN: none
OUT: частное 
*/

Compl Compl::delen(Compl &number)
{

	Compl returnNumber;

	returnNumber.real = (real * number.real + imaginary * number.imaginary) /
		(number.real * number.real + number.imaginary * number.imaginary);


	returnNumber.imaginary = (imaginary * number.real - real*number.imaginary) /
		(number.real * number.real + number.imaginary * number.imaginary);

	return returnNumber;
}