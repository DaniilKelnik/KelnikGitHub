#include "stdafx.h"
#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	char type;
	cin >> type;
	switch (type)
	{
	case '1':
	{
		setlocale(0, "");
		double a, b, n;
		double c = 1;
		cout << "Введите число, которое вы хотите возвести в степень:";
		cin >> a;
		cout << "В какую степень вы хотите возвести:";
		cin >> b;
		if (b >= 0)
		{
			for (n = 1; n <= b; n++)
			{
				c = c * a;

			}
		}
		else if (b < 0)
		{
			if (a == 0)
			{
				cout << "Error" << endl;
				system("Pause");
				exit(1);
			}
			else
			{
				b = -b;
				for (n = 1; n <= b; n++)
				{
					c = c * a;
				}

				c = 1 / c;
			}
		}
		cout << "Результат возведения числа в степень:" << c << endl;
		system("Pause");
		return 0;
	}
	case '2':
	{
		int a, b = 1, n;
		cin >> a;
		if (a > 0)
		{
			for (n = 1; a >= n; n++)
			{
				b = b * n;
			}
			cout << b << endl;
		}
		else if (a == 0)
		{
			cout << "b=" << b << endl;
		}
		else
		{
			cout << "Число не может быть ,меньше 0" << endl;
		}
		system("Pause");
		return 0;
	}
	}
}