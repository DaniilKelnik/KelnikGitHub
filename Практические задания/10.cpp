#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	setlocale(0, "");
	int a, b, n;
	int c = 1;
	cout << "Введите число, которое вы хотите ввести в степень:";
	cin >> a;
	cout << "В какую степень вы хотите ввести:";
	cin >> b;
	for (n = 1; n <= b; n++)
	{
		c = c * a;

	}
	
	cout <<"Результат возведения числа в степень:" <<  c << endl;
	system("Pause");
	return 0;
}