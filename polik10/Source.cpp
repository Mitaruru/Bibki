#include <iostream>
#include <ctime>

using namespace std;
int main() {
	setlocale(0, "");

	srand(time(NULL));

	/*int i = 0;
	while (i < 20) {
		int a = rand() % 10; // 0 - 9
		cout << a << endl;
		i++;
	}*/


	short game;
	short n1, n2, n3, hm;
	short gamble = 5;
	short ye = 0;
	cout << "1- Начать игру" << endl << "2- Выход "<< endl;
	cin >> game;
	switch (game) {
	case 1: n1 = 1+ rand()%10; n2 =1+ rand()%10; n3 =1+ rand()%10;
		do {
			cout << "Угаданных чисел: " << ye << "/3" << endl;
			cout << "Оставшиеся попытки: "<<gamble<< endl<< "Угадать число: ";
			cin >> hm;
			if (hm == n1) {
				gamble -= 1;
				cout << "Вы угадали" << endl;
				ye += 1;
				n1 = -1;
			}
			else if (hm == n2) {
				gamble -= 1;
				cout << "Вы угадали" << endl;
				ye += 1;
				n2 = -1;
			}
			else if (hm == n3) {
				gamble -= 1;
				cout << "Вы угадали" << endl;
				ye += 1;
				n3 = -1;
			}
			else {
				cout << "Вы не угадали" << endl;
				gamble -= 1;
			}
		} while (gamble != 0 && ye!=3);
		cout << "Игра окончена!" << endl << "Вы угадали: " << ye <<" числа из 3";
		break;
	case 2: break;
	default: cout << "Введено неправильное число"; break;
}
}