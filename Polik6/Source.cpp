#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short m;
	cout << "¬ведите номер мес€ца: "<< endl;
	cin >> m;
	switch (m) {
	case 1: cout << "январь"; break;
	case 2: cout << "‘евраль"; break;
	case 3: cout << "ћарт"; break;
	case 4: cout << "јпрель"; break;
	case 5: cout << "май"; break;
	case 6: cout << "июнь"; break;
	case 7: cout << "июль"; break;
	case 8: cout << "август"; break;
	case 9: cout << "сент€брь"; break;
	case 10: cout << "окт€брь"; break;
	case 11: cout << "но€брь"; break;
	case 12: cout << "декабрь"; break;
	default: cout << "мес€цев всего 12, подумай еще"; break;
}
}