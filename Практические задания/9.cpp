#include <iostream> 
#include <time.h>
using namespace std;
void riddle(void);
int main()
{
	setlocale(LC_ALL, "RUS");
	char Continue = '1';
	srand(time(NULL));
	riddle();
	while (Continue == '1')
	{
		cout << endl << "Хотите начать сначала? (1 - ДА )";
		cin >> Continue;
		cout << endl;
		if (Continue != '1')
			break;
		riddle();
	}
	system("Pause");
	return 0;
}
void riddle()
{
	int a, b, i;
	i = 0;
	a = rand() % 101;
	cout << "Сейчас мы сыиграем с вами,в одну интересную игру" << endl << "Ваша задача:отгадать число от 0 до 100" << endl;
	while (i < 5)
	{
		cout << "Ваше предпологаемое число:";
		cin >> b;
		
		if (b < a)
		{
			cout << "Загаданное число больше" << endl;
			i++;
		}
		else if (b > a)
		{
			cout << "Загаданное число меньше" << endl;
			i++;
		}
		else if (b == a)
		{
			cout << "Поздравляю! Вы угадали" << endl;
		}
	}
	if (i == 5)
	{
		cout << "Вы проиграли. Было загадано:" << a << endl;
	}
}

