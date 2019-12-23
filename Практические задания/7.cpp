#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int type;
	cout << "Введите способ решения:";
	cin >> type;
	switch (type)
	{
	case 1:

		double a, b, c, p, S, x1, y1, x2, y2, x3, y3;
		cout << "Введите a=";
		cin >> a;
		cout << "Введите b=";
		cin >> b;
		cout << "Введите c=";
		cin >> c;
		if (a > 0 && b > 0 && c > 0 )
			a + b > c && a + c > b && b + c > a)
		{
			p = (a + b + c) / 2;
			cout << "p=" << p << endl;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S=" << S << endl;
		}
		else
		{

			cout << "Введенны некорректные данные" << endl;
		}
		break;

	case 2:
		cout << "Введите кординаты первой вершины:";
		cin >> x1 >> y1;
		cout << "Введите кординаты второй вершины:";
		cin >> x2 >> y2;
		cout << "Введите кординаты третьей вершины:";
		cin >> x3 >> y3;
		S = 0.5 * abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
		cout << "S=" << S << endl;
		break;
	default: cout << "Error" << endl;
	}
	system("Pause");
	return 0;
}