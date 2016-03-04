





class Compl
{
private:

	double real;
	double imaginary;

public:

	Compl();
	Compl(double r, double i) : real(r), imaginary(i){}
	~Compl();

	void SetNumber(double a, double b);				//добавить значения
	void PrintNumber();				//вывести значения



	Compl sopryazh(); // сопряженное число
	double scalarUmn(Compl);  // скалярное произведение
	double  vectorUmn(Compl);  // векторное произведение
	double  distanc(Compl);  // растояние между числами
	double  modul();  // модуль числа
	double  argum();  // аргумент числа
	bool sravn(Compl &); // сравнение
	Compl sum (Compl &); // сумма
	Compl vych (Compl &); // разность
	Compl umn (Compl &); // умножение
	Compl delen (Compl &); // деление




};