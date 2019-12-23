#include <iostream> 
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, x, d, D, x1, x2, X;
	cout << "Введите параметры переменных:" << endl;
	cout << "Введите первую переменную:" << endl;
	cin >> a;
	cout << "Введите вторую переменную:" << endl;
	cin >> b;
	cout << "Введите третию переменную:" << endl;
	cin >> c;
	cout << "Ответ:" << endl;
	if (b == 0 && c == 0 && a!=0) //ax^2+0x+0=0
	{
		cout << "x=0" << endl;
	}
	else if (a == 0) // bx=-c
	{
		x = -c/b;
		cout << "x=" << x << endl;
	}
	else if (b == 0)
	{
		X = c / a;
		x = sqrt(X);
		cout << "x=" << x << endl;
	}
	else if (c == 0)
	{
		x1 = 0;
		x2 = -b / a;
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else 
	{
		d = b * b - 4 * a * c;
		D = sqrt(d);
		cout << "Корень из дискриминната равен: " << D << endl;
		if (D < 0)
		{
			cout << "Корней нет";
		}
		else if (D == 0)
		{
			x = -b / (2 * a);
			cout << "x=" << x;
		}
		else if (D > 0)
		{
			x1 = (-b + D) / (2 * a);
			cout << "x1=" << x1 << endl;
			x2 = (-b - D) / (2 * a);
			cout << "x2=" << x2 << endl;


		}
	}
	system("Pause");
	return 0;

}