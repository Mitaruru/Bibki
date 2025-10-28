#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	short lang;
	cout << "Переводчик" << endl << "1-Русский язык " << endl << "2-Английский язык " << endl << "3-Выход"<< endl;
	cin >> lang;
	switch (lang) {
	case 1: cout << "Напишите номер слова перевод которого хотите узнать " << endl << "1-дорога" << endl << "2-дом" << endl << "3-день" << endl << "4-ночь" << endl << "5-утро" << endl << "6-шина"
		<< endl << "7-машина" << endl << "8-палец" << endl << "9-рука" << endl << "10-нога" << endl << "11-вода" << endl << "12-огонь" << endl << "13-воздух" << endl << "14-земля" << endl << "15-лёд"<<endl;
		cin >> lang;
		switch (lang) {
		case 1:cout << "дорога->road";
			break;
		case 2:cout << "дом->home";
			break;
		case 3:cout << "день->day";
			break;
		case 4:cout << "ночь->night";
			break;
		case 5:cout << "утро->morning";
			break;
		case 6:cout << "шина->tire";
			break;
		case 7:cout << "машина->car";
			break;
		case 8:cout << "палец->finger";
			break;
		case 9:cout << "рука->hand";
			break;
		case 10:cout << "нога->leg";
			break;
		case 11:cout << "вода->water";
			break;
		case 12:cout << "огонь->fire";
			break;
		case 13:cout << "воздух->air";
			break;
		case 14:cout << "земля->earth";
			break;
		case 15:cout << "лёд->ice";
			break;
		} break;
	case 2: cout << "Напишите номер слова перевод которого хотите узнать " << endl << "1-road" << endl << "2-home" << endl << "3-day" << endl << "4-night" << endl << "5-morning" << endl << "6-tire"
		<< endl << "7-car" << endl << "8-finger" << endl << "9-hand" << endl << "10-leg" << endl << "11-water" << endl << "12-fire" << endl << "13-air" << endl << "14-earth" << endl << "15-ice" << endl;
		cin >> lang;
		switch (lang) {
		case 1:cout << "дорога<-road";
			break;
		case 2:cout << "дом<-home";
			break;
		case 3:cout << "день<-day";
			break;
		case 4:cout << "ночь<-night";
			break;
		case 5:cout << "утро<-morning";
			break;
		case 6:cout << "шина<-tire";
			break;
		case 7:cout << "машина<-car";
			break;
		case 8:cout << "палец<-finger";
			break;
		case 9:cout << "рука<-hand";
			break;
		case 10:cout << "нога<-leg";
			break;
		case 11:cout << "вода<-water";
			break;
		case 12:cout << "огонь<-fire";
			break;
		case 13:cout << "воздух<-air";
			break;
		case 14:cout << "земля<-earth";
			break;
		case 15:cout << "лёд<-ice";
			break;
		} break;
	case 3: cout << "Пока!"; break;
	}
}