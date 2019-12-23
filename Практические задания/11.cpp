#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int a, b, n;
	cin >> a;
	if (a > 0) 
	{
		b = 1;
		for (n = 1;a>= n; n++)
		{
			b = b * n;
		}
		cout << b << endl;
	}
	else if (a==0)
	{
		b = 1;
		cout << "b=" << b << endl;
	}
	else
	{
		cout << "Число не может быть ,меньше 0" << endl;
	}
	system("Pause");
	return 0;
}