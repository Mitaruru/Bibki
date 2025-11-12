#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short geom;
	short lenght,l,l1;
	char tex;
	cout << "Геометрические фигуры" << endl << "1-линия" << endl << "2-квадрат"<< endl;
	cin >> geom;
	switch (geom) {
	case 1: system("cls");
		cout << "Линия" << endl << "1-горизонтальная" << endl << "2-вертикальная"<<endl;
		short l;
		cin >> l;
		switch (l) {

		case 1: cout << "выберите текстуру: ";
			cin >> tex;
			cout << "Введите длинну линии: ";
			cin >> lenght;
			do {
				cout << tex;
				lenght--;
			} while (lenght != 0);
			break;

		case 2: cout << "выберите текстуру: ";
			cin >> tex;
			cout << "Введите длинну линии: ";
			cin >> lenght;
			do {
				cout << tex<<endl;
				lenght--;
			} while (lenght != 0);
			break;
		}
		break;

	case 2: system("cls");
		cout << "Квадрат" << endl << "1- Не закрашенный" << endl << "2- Закрашенный" << endl;
		cin >> l;
		switch (l) {

		case 1:
			cout << "выберите текстуру: ";
			cin >> tex;
			cout << "Введите длинну стороны квадрата: ";
			cin >> lenght;
			l = lenght;
			l1 = l;
			do {
				cout << tex;
				lenght--;
			} while (lenght != 0);
			lenght = l;
			cout <<endl  <<  tex;
			lenght -= 2;
			l1-=2;
			do {
				lenght = l; lenght -= 2;
				do {
					cout << " ";
					lenght--;
				} while (lenght != 0);
				cout << tex << endl<<tex;
				l1--;
			} while (l1 != 0);
			lenght = l - 1;
			do {
				cout << tex;
				lenght--;
			} while (lenght != 0);
			break;

		case 2:  cout << "выберите текстуру: ";
			cin >> tex;
			cout << "Введите длинну линии: ";
			cin >> lenght;
			l1 = lenght;
			l = l1;
			do {
				lenght = l;
				do {
					cout << tex;
					lenght--;
				} while (lenght != 0);
				cout << endl;
				l1--;
			} while (l1 != 0);
			break;
		}
		break;
	}
}