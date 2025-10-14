#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a;
	cin >> a;
	if (a == 1) {
		cout << "Сейчас лето"<< endl;
	}
	if (a == 2) {
		cout << "Сейчас осень" << endl;
	}
	if (a == 3) {
		cout << "Сейчас зима" << endl;
	}
	if (a == 4) {
		cout << "Сейчас весна" << endl;
	}

	return 0;
}