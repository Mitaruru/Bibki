#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short m,n;
	cout << "¬ведите номер мес€ца: " << endl;
	cin >> m;
	cout << "¬ведите номер дн€: " << endl;
	cin >> n;
	switch (m) {
	case 1: if (n <= 31) {
		cout << "январь " << n; break;
	}
		  else cout <<  "¬ведено неправильное число"; break; 
	case 2: if (n <= 28) {
		cout << "‘евраль " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 3: if (n <= 31) {
		  cout << "ћарт " << n; break;
	}
		  else cout<< "¬ведено неправильное число"; break;
	case 4:  if (n <= 30) {
		cout << "јпрель " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 5: if (n <= 31) {
		cout << "май " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 6: if (n <= 30) {
		cout << "июнь " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 7: if (n <= 31) {
		cout << "июль " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 8: if (n <= 31) {
		cout << "август " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 9: if (n <= 30) {
		cout << "сент€брь " << n; break;
	}
		  else cout << "¬ведено неправильное число"; break;
	case 10: if (n <= 31) {
		cout << "окт€брь " << n; break;
	}
		   else cout << "¬ведено неправильное число"; break;
	case 11: if (n <= 30) {
		cout << "но€брь " << n; break;
	}
		   else cout << "¬ведено неправильное число"; break;
	case 12: if (n <= 31) {
		cout << "декабрь " << n; break;
	}
		   else cout << "¬ведено неправильное число"; break;
	default: cout << "мес€цев всего 12, подумай еще"; break;
	}
}