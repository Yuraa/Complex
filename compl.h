





class Compl
{
private:

	double real;
	double imaginary;

public:

	Compl();
	Compl(double r, double i) : real(r), imaginary(i){}
	~Compl();

	void SetNumber(double a, double b);				//�������� ��������
	void PrintNumber();				//������� ��������



	Compl sopryazh(); // ����������� �����
	double scalarUmn(Compl);  // ��������� ������������
	double  vectorUmn(Compl);  // ��������� ������������
	double  distanc(Compl);  // ��������� ����� �������
	double  modul();  // ������ �����
	double  argum();  // �������� �����
	bool sravn(Compl &); // ���������
	Compl sum (Compl &); // �����
	Compl vych (Compl &); // ��������
	Compl umn (Compl &); // ���������
	Compl delen (Compl &); // �������




};