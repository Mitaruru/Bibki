#include <iostream>
#include<windows.h>
using namespace std;
int main(){
	setlocale(0, "");
	short ch,color,clr;
	short life, point, question;
	string answ, name, question8, question10, question12, kawo;
	bool a, b, c, d,inf, answ1;
	bool a8, b8, c8, d8, a10, b10, c10, d10, a12, b12, c12, d12;
	a12= b12= c12 = 0;
	question = 1;
	d12 = 1;
	life = 3;
	point = 0;
	a8 = b8 = c8 = 0;
	d8 = 1;
	d10 = b10 = c10 = 0;
	a10 = 1;
	string qColor= "\x1b[0m", oColor= "\x1b[0m", iColor= "\x1b[0m";
	short set;
	inf = 1;
	answ1 = 0;
	string  a81, b81, c81, d81, a101, b101, c101, d101, a121, b121, c121, d121;
	name = "Джесси";
	short kostil=1;
	question8 = "Сочетание клавиш для вставки скопированного текста";
	a81 = "ctrl+x"; b81 = "ctrl+c"; c81 = "ctrl+z"; d81 = "ctrl+v";
	question10 = "Какое устройство используется для соединения нескольких компьютеров в локальную сеть?";
	a101 = "Маршрутизатор"; b101 = "Модем"; c101 = "Блок питания"; d101 = "Видеокарта";
	question12 = "Системный язык программирования?";
	a121 = "Python"; b121 = "С#"; c121 = "Ruby"; d121 = "C++";
	cout <<"Hello, Dexter Morgan" << endl;
	do {
		system("cls");
	cout<<iColor << "1-Начать игру" << endl << "2-Настройки" << endl << "3-Правила" << endl << "4-Выйти" << endl;
	cin >> ch;
	switch (ch) {
	case 1:do {
		cout << iColor << name << ", ты рыба-ёж" << "| У тебя вот столько жизней осталось:" << life << "| А ответил правильно вот столько раз:" << point << endl;
		switch (question) {
		case 1: cout << qColor << "Вопрос номер 1: что такое алгоритм?" << endl << oColor << "a-Язык программирования" << "     " << "b-Последовательность действий для решения задачи" << endl << "c- Компьютерная программа" << "       " << "d-Операционная система " << endl;
			d = a = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = -1; answ1 = 0;
			} question++; break;
		case 2: cout << qColor << "Вопрос номер 2: Что такое ОЗУ?" << endl << oColor << "a-Постоянное хранилище для файлов" << "           " << "b-Временная память для работы запущенных программ" << endl << "c-Центральный процессор компьютера" << "           " << "d-Устройство для ввода информации" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 0; answ1 = 0;
			}  question++; break;
		case 3: cout << qColor << "Вопрос номер 3: Какое расширение обычно имеют файлы сжатых архивов?" << endl << oColor << "a-.exe" << "           " << "b-.docx" << endl << "c-.zip" << "           " << "d-.jpg" << endl;
			a = b = d = 0;
			c = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 1; answ1 = 0;
			}  question++; break;
		case 4: cout << qColor << "Вопрос номер 4: Что такое IP-адресс?" << endl << oColor << "a-Адресс производства устройства" << "           " << "b-Уникальный сетевой адрес устройства в сети" << endl << "c-Пароль для доступа в интернет" << "           " << "d-Название компьютерной программы" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 2; answ1 = 0;
			}  question++; break;
		case 5: cout << qColor << "Вопрос номер 5: Что означает аббривиатура SQL?" << endl << oColor << "a-Simple Question Language" << "           " << "b-Structure Query Language" << endl << "c-Standart Quality Line" << "           " << "d-Software Query List" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 3; answ1 = 0;
			} question++; break;
		case 6: cout << qColor << "Вопрос номер 6: Как называется вирус который распростроняется по сети и копирует сам себя?" << endl << oColor << "a-Троян" << "           " << "b-Шпионское ПО" << endl << "c-Червяк" << "           " << "d-Рекламное ПО" << endl;
			a = b = d = 0;
			c = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 4; answ1 = 0;
			} question++; break;
		case 7: cout << qColor << "Вопрос номер 7: Что такое фишинг?" << endl << oColor << "a-Вид вируса" << "           " << "b-Вид спама, направленный на кражу данных" << endl << "c-Способ шифрования данных" << "           " << "d-Метод повышения скорости интернета" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 5; answ1 = 0;
			}  question++; break;
		case 8: 
			cout << qColor << "Вопрос номер 8: " <<question8 << endl << oColor << "a-" <<a81<< "           " << "b-" <<b81<< endl << "c-" <<c81<< "           " << "d-" <<d81<< endl;
			
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a8;
			}
			else if (answ == "b")
			{
				answ1 = b8;
			}
			else if (answ == "c")
			{
				answ1 = c8;
			}
			else if (answ == "d")
			{
				answ1 = d8;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 6; answ1 = 0;
			} question++; break;
		case 9: cout << qColor << "Вопрос номер 9: что означает www в адресе сайта?" << endl << oColor << "a-Wide World Web" << "           " << "b-World Wide Web" << endl << "c-Web World Wide" << "           " << "d-World Web Wide" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 7; answ1 = 0;
			}  question++; break;
			
		case 10: cout << qColor << "Вопрос номер 10: " <<question10<< endl << oColor << "a-"<<a101 << "           " << "b-"<<b101 << endl << "c-"<<c101 << "           " << "d-"<<d101 << endl;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a10;
			}
			else if (answ == "b")
			{
				answ1 = b10;
			}
			else if (answ == "c")
			{
				answ1 = c10;
			}
			else if (answ == "d")
			{
				answ1 = d10;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 8; answ1 = 0;
			} question++; break;
		case 11: cout << qColor << "Вопрос номер 11: Что такое облачное хранилище?" << endl << oColor << "a-Жесткий диск" << "           " << "b-Сеть серверов" << endl << "c-Программа для создания презентаций" << "           " << "d-Устройство для беспроводной зарядки" << endl;
			a = d = c = 0;
			b = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a;
			}
			else if (answ == "b")
			{
				answ1 = b;
			}
			else if (answ == "c")
			{
				answ1 = c;
			}
			else if (answ == "d")
			{
				answ1 = d;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 9; answ1 = 0;
			}  question++; break;
		case 12:
			cout << qColor << "Вопрос номер 12: " <<question12<< endl << oColor << "a-"<<a121 << "           " << "b-"<<b121 << endl << "c-"<<c121 << "           " << "d-"<<d121 << endl;
			a = b = c = 0;
			d = 1;
			cin >> answ;
			if (answ == "a")
			{
				answ1 = a12;
			}
			else if (answ == "b")
			{
				answ1 = b12;
			}
			else if (answ == "c")
			{
				answ1 = c12;
			}
			else if (answ == "d")
			{
				answ1 = d12;
			}
			else {
				cout << iColor << "Вводи что-то из этого: a, b, c, d" << endl; question--; kostil = 10; answ1 = 0;
			} break; question++;
		}
		kostil++;
		if (kostil == question) {
			if (answ1 == 0) {
				cout << iColor << "Бро, ты ответил неправильно и тд" << endl;
				life--;
				question--;
			}
		}
		else kostil = question;
		if (answ1 == 1) {
			cout << iColor << "Вау, бро, ты ответил правильно, вот это да" << endl;
			point++;
		}
		if (life == 0) {
			cout << iColor << "ХАХАХАХА, ТЫ ПРОИГРАЛ, АХАХАХАХАХ";
			break;
		}

	} while (question != 13);
		  inf = false;
		  break;
	case 2:
		cout << iColor << "1-изменить имя" << endl << "2-редактировать вопросы" << endl << "3-Редактировать цвет интерфейса" << endl;
		cin >> set;
		switch (set) {
		case 1:
			cout << iColor << "Введите новое имя: ";
			cin >> name;
			cout << "Имя изменено на " << name << endl;
			break;
		case 2: cout << iColor << "Вы можете поменять вопросы под номерами 8 10 12 " << "Какой вопрос вы хотите изменить?" << endl;
			short q;
			cin >> q;
			switch (q) {
			case 8:  cout << iColor << "Введите вопрос: ";
				cin >> question8;
				cout << "Введите варианты ответа " << endl << "a: ";
				cin >> a81; cout << "b: "; cin >> b81;  cout << "c: "; cin >> c81; cout << "d: "; cin >> d81; cout << endl << "Введите какой вариант правильный: ";
				cin >> kawo;
				if (kawo == "a") {
					a8 = 1; b8 = c8 = d8 = 0;
				}
				else if (kawo == "b") {
					b8 = 1; a8 = c8 = d8 = 0;
				}
				else if (kawo == "c") {
					c8 = 1; b8 = a8 = d8 = 0;
				}
				else if (kawo == "d") {
					d8 = 1; b8 = c8 = a8 = 0;
				}
				break;
			case 10: cout << iColor << "Введите вопрос: ";
				cin >> question10;
				cout << "Введите варианты ответа " << endl << "a: ";
				cin >> a101; cout << "b: "; cin >> b101;  cout << "c: "; cin >> c101; cout << "d: "; cin >> d101; cout << endl << "Введите какой вариант правильный: ";
				cin >> kawo;
				if (kawo == "a") {
					a10 = 1; b10 = c10 = d10 = 0;
				}
				else if (kawo == "b") {
					b10 = 1; a10 = c10 = d10 = 0;
				}
				else if (kawo == "c") {
					c10 = 1; b10 = a10 = d10 = 0;
				}
				else if (kawo == "d") {
					d10 = 1; b10 = c10 = a10 = 0;
					break;
			case 12: cout << iColor << "Введите вопрос: ";
				cin >> question12;
				cout << "Введите варианты ответа " << endl << "a: ";
				cin >> a121; cout << "b: "; cin >> b121;  cout << "c: "; cin >> c121; cout << "d: "; cin >> d121; cout << endl << "Введите какой вариант правильный: ";
				cin >> kawo;
				if (kawo == "a") {
					a12 = 1; b12 = c12 = d12 = 0;
				}
				else if (kawo == "b") {
					b12 = 1; a12 = c12 = d12 = 0;
				}
				else if (kawo == "c") {
					c12 = 1; b12 = a12 = d12 = 0;
				}
				else if (kawo == "d") {
					d12 = 1; b12 = c12 = a12 = 0;
				}
				break;
				}
			}
				break;
			case 3: cout << iColor << "Цвет чего вы хотите изменить?" << endl << "1-Вопросы" << endl << "2-Варианты ответов" << endl << "3-Интерфейс" << endl;
				cin >> color;
				switch (color) {
				case 1:
					cout << iColor << "выберите цвет" << endl << "1-синий" << endl << "2-красный" << endl << "3-обычный (белый)" << endl;
					cin >> clr;
					if (clr == 1) {
						qColor = "\x1b[94m";
					}
					else
						if (clr == 2) {
							qColor = "\x1b[91m";
						}
						else
							if (clr == 3) {
								qColor = "\x1b[0m";
							}
					break;
				case 2:cout << iColor << "выберите цвет" << endl << "1-синий" << endl << "2-красный" << endl << "3-обычный (белый)" << endl;
					cin >> clr;
					if (clr == 1) {
						oColor = "\x1b[94m";
					}
					else
						if (clr == 2) {
							oColor = "\x1b[91m";
						}
						else
							if (clr == 3) {
								oColor = "\x1b[0m";
							} break;
				case 3:cout << iColor << "выберите цвет" << endl << "синий" << endl << "красный" << endl << "обычный (белый)" << endl;
					cin >> clr;
					if (clr == 1) {
						iColor = "\x1b[94m";
					}
					else
						if (clr == 2) {
							iColor = "\x1b[91m";
						}
						else
							if (clr == 3) {
								iColor = "\x1b[0m";
							} break;
				}
				break;
				}
				break;
			case 3: cout << iColor << "Вы получаете очки за правильный ответ на вопрос" << endl << "Вы проходите дальше за правильный ответ, в случае неправильного вы должны повторно ответить на опрос" << endl << "Вы теряете жизнь при неправильном ответе" << "Вариант ответа пишите на английском языке";
				Sleep(2000);
				break;
			case 4:  inf = false;
				break;
			}
		} while (inf == true);
	} 
