#include <iostream>
using namespace std;
int main()
{
	int a, b,c,d,e,j;
	setlocale(0, "");
	cin >> a;
	cout << "a=" << a << endl;
	cin >> b;
	cout << "b=" << b << endl;
	c = a + b;
	cout << "Результат суммы=" << c << endl;
	d = a - b;
	cout << "Результат вычитания=" << d << endl;
	e = a * b;
	cout << "Результат умножения=" << e << endl;
	j = a / b;
	cout << "Результат деления=" << j << endl;
	return 0;
	// Результат будет меняться , от измены с  int на double
}

