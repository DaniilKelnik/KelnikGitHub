#include <iostream>
using namespace std;
int main()
{
	double x0, v0, t;
	const double g = -9.8;
	cin >> x0 >> v0 >> t;
	//cout << x + v * t + 1 / 2 * g * t * t << endl;
	cout << x0 + v0 * t + g * t * t / 2 << endl;
	system("Pause");
	return 0;
}