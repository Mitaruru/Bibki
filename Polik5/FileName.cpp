#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n1, n2,g ;

	string op;
	cout << "¬ведите первое число: " << endl;
	cin >> n1;
	cout << "¬ведите оператор: " << endl;
	cin >> op;
	cout << "¬ведите второе число: " << endl;
	cin >> n2;
	if (op == "+") {
		g = n1 + n2;
		cout << g;
	}
	else if (op == "*") {
		g = n1 * n2; 
		cout << g;
	}
	else if (op == "-") {
		g = n1 - n2;
		cout << g;
	}
	else if (op == "/") {
		g = n1 / n2;
		cout << g;
	}
	else if (op == "%") {
		g = n1 % n2;
		cout << g;
	}
	else cout << "такого оператора нет";
}