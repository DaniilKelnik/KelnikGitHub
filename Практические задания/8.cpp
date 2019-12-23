#include <iostream>
#include <cmath>
#include <locale>
using namespace std;
int main()
{
	setlocale (0 , "");
	int a, b, c;
	char type;
	cin >> a >> type >> b;
	switch (type)
	{
	case '+':
		c = a + b;
		cout << "Сумма слагаемых равна " << c << endl;
		break;
	case '-':
		c = a - b;
		cout << "Результат вычитания равен " << c << endl;
		break;
	case '*':
		c = a * b;
		cout << "Произведение чисел равно " << c << endl;
		break;
	case '/':
		if (b == 0)
		{
			cout << "Ошибка" << endl;
		}
		else
		{
			c = a / b;
			cout << "Результат деления равен " << c << endl;
		}
		break;
	default: cout << "Ошибка" << endl;
	}

	system("Pause");
	return 0;
}

