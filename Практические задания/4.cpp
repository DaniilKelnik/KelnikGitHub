#include <iostream>
using namespace std;
int main()
{
	int a, b;// Добавляем переменную c .
	cin >> a;
	cin >> b;
	swap(a, b);// c = a; a = b; b = c;
	cout << "a=" << a << " b=" << b;
	system("Pause");
	return 0;
}
