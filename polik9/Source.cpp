 #include <iostream>
using namespace std;
int main(){
	setlocale(0, "");
	short mih;
	cout << "¬ведите число: ";
	cin >> mih;
	if (mih <= 15 && mih > 0) {
		do {
			cout << "MADE IN HEAVEN" << endl;
			mih = mih - 1;
		} while (mih != 0);
	}
	else cout << "вводи от 1 до 15";
}