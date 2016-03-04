#include "stdafx.h"
#include "compl.h"
#include "math.h"
#include <conio.h>
#include <iostream>

using namespace std;

//�����������
Compl::Compl()
{
	real = 0;
	imaginary = 0;
}

//����������
Compl::~Compl()
{
}


/*
BRIEF: ������� ���������� ������ � �������������� �����
IN: �������� ��� ������������ �����
OUT: none
*/

void Compl::SetNumber(double a, double b)
{
	real = a;
	imaginary = b;
}

/*
BRIEF: ������� ������ ������������ �����
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
BRIEF: ������� ���������� ������������ �����
IN: none
OUT: ����������� �����
*/

Compl Compl::sopryazh()
{
	Compl returnNumber;
	returnNumber = *this;
	returnNumber.imaginary = (-1)* imaginary;
	return returnNumber;
}


/*
BRIEF: ������� ���������� ����������� ������������ ����������� �����
IN: ��� ����������� �����
OUT: ��������� ������������
*/
double Compl::scalarUmn(Compl number)
{
	double scalarProduct;
	scalarProduct = (real*number.real) + (imaginary*number.imaginary);
	return (scalarProduct);
}


/*
BRIEF: ������� ���������� ���������� ������������ ����������� �����
IN: ��� ����������� �����
OUT: ��������� ������������
*/

double  Compl::vectorUmn(Compl number)
{
	double vectorProduct;
	vectorProduct = (real*number.imaginary) - (imaginary*number.real);
	return (vectorProduct);
}


/*
BRIEF: ������� ���������� ���������� ����� ������������ �������
IN: ��� ����������� �����
OUT: ����������
*/

double  Compl::distanc(Compl number)
{

	return sqrt((real - number.real)*(real - number.real) +
		(imaginary - number.imaginary)*(imaginary - number.imaginary));
}




/*
BRIEF: ������� ���������� ������
IN: ����������� �����
OUT: ������
*/

double Compl::modul()
{
	return sqrt(real*real + imaginary*imaginary);

}

/*
BRIEF: ������� ���������� ��������� ������������ �����
IN: ����������� �����
OUT: ��������
*/

double  Compl::argum()
{
	return atan(imaginary / real);
}


/*
BRIEF: ������� ��������� ���� ����������� �����
IN: ��� ����������� �����
OUT: true, ���� ����� �����, ��� false, ���� ����� �� �����
*/


bool  Compl::sravn(Compl &number)
{

	if ((real == number.real) && (imaginary == number.imaginary))
		return true;
	else
		return false;

}

/*
BRIEF: ������� �������� ���� ����������� �����
IN: none
OUT: ����� ���� ����������� �����
*/

Compl Compl::sum(Compl &number)
{


	return Compl(real + number.real, imaginary + number.imaginary);
}


/*
BRIEF: ������� �������� ���� ����������� �����
IN: none
OUT: �������� ���� ����������� �����
*/
Compl Compl::vych(Compl &number)
{

	return Compl(real - number.real, imaginary - number.imaginary);
}

/*
BRIEF: ������� ������������ ���� ���������� �����
IN:  none
OUT: ������������ ���� ���������� �����
*/

Compl Compl::umn(Compl &number)
{

	return Compl(real*number.real - imaginary*number.imaginary,
		real*number.imaginary + number.real*imaginary);
}


/*
BRIEF: ������� ������� ���� ����������� �����
IN: none
OUT: ������� 
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