#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n, i, x;
	cin >> x;

	for (i = 2, n = 0; i < x; i++)
	{
		if (!(x%i))
		{
			n = 1;
			break;
		}

	}
	if (n=0)
		cout << "Prostoe";
	else
		cout << "Sostavnoe";
	system("Pause");
	return 0;

}

