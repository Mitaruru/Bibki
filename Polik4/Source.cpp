#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int vvod;
	short number = 1;
	int hm;
	int dymai;
	cin >> vvod;
	do {
		hm = vvod * number;
		cout << vvod << "* " << number << "= " << endl;
		number = number + 1;
		cin >> dymai;
		if (dymai == hm) {
			cout << "Пример решен правильно!" << endl;
		}
		else cout<<"Пример решен неправильно"<< endl;
	} while (number != 10);
}