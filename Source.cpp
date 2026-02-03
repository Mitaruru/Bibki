#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int a, b, c, d, e, f, g, h, i, z, zz,ddd,fff,ggg,kkk,lll;
	char hhh;
	cout << "[+] Программа - “Геометрические фигуры”" << endl << "[1] Линия" << endl << "[2] Квадрат" << endl << "[3] Прямоугольник" << endl << "[4] Треугольник"<<endl<<"[5] Решетка"<<endl<< "[6] Крест" << endl << "[7] Плюс" << endl << "[8] Ромб" << endl << "[9] Змейка" << endl << "[10] Куб в кубе" << endl << "[+] Выберите фигуру:";
	cin >> a;
	switch (a) {
	case(1):
		system("cls");
		cout << "[+] Фигура: “Линия”" << endl;
		cout << "[+] Размер: ";
		cin >> b;
		cout << "[+] Текстура: ";
		cin >> hhh;
		for (int i = 0; i < b; i++)
		{
			cout << hhh;
		}
		break;
	case(2):
		system("cls");
		cout << "[1] Заполненный" << endl << "[2] Пустой" << endl << endl << "[+] Выберите тип:";
		cin >> d;
		system("cls");
		cout << "[+] Размер:";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		switch (d) {
		case(1):
			system("cls");
			for (int i = 0; i < h; i++)
			{
				for (int j = 0; j < h; i++)
				{
					cout << hhh << " ";
				}
				cout << endl;

			}
		case(2):
			system("cls");
			for (int y = 0; y < h; y++)
			{
				for (int x = 0; x < h; x++)
				{
					if (y == 0 or x == 0 or x == h - 1 or y == h - 1) {
						cout << hhh << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;

			}

		}
	case(3):
		system("cls");
		cout << "[1] Заполненный" << endl << "[2] Пустой" << endl << endl << "[+] Выберите тип:";
		cin >> d;
		system("cls");
		cout << "[+] Ширина:";
		cin >> e;
		cout << "[+] Высота:";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		switch (d) {
		case(1):
			for (int y = 0; y < h; y++)
			{
				for (int x = 0; x < e; x++)
				{
					if (true) {
						cout << hhh << " ";
					}

				}
				cout << endl;

			}
			break;

		case(2):
			system("cls");
			for (int y = 0; y < h; y++)
			{
				for (int x = 0; x < e; x++)
				{
					if (y == 0 or x == 0 or x == e - 1 or y == h - 1) {
						cout << hhh << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;

			}

		}
	case(4):
		system("cls");
		cout << "[1] Заполненный" << endl << "[2] Пустой" << endl << endl << "[+] Выберите тип:";
		cin >> d;
		system("cls");
		cout << "[+] Размер:";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		int center = h/2;
		switch (d) {
		case(1):
			system("cls");
			for(int i = 0; i < h; ++i) {      
				for (int j = 0; j < h; ++j) {    
					if (j >= center - i && j <= center + i and i<center) {
						cout << hhh << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl; 
			}
			break;
		case(2): {
			system("cls");
			for (int i = 0; i < h; ++i) {
				for (int j = 0; j < h; ++j) {
					if (j == center - i or j == center + i and i < center or i == center) {
						cout << hhh << " ";
					}
					else {
						cout << ". ";
					}
				}
				cout << endl;
			}
			break;
		}
		}

	
	}
	if (a == 5) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		for (int t = 0; t < h; t++)
		{
			for (int zzz = 0; zzz < h; zzz++)
			{
				z = zzz % 2;
				zz = t % 2;
				if (z != 0 or zz != 0) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	if (a == 6) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		z = 0;
		zz = h - 1;
		for (int yyy = 0; yyy < h; yyy++)
		{
			for (int xxx = 0; xxx < h; xxx++)
			{
				
				if (xxx==z or xxx==zz) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			z = z + 1;
			zz = zz - 1;
			cout << endl;
		}
	}
	if (a == 7) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		z = h/2;
		for (int yyy = 0; yyy < h; yyy++)
		{
			for (int xxx = 0; xxx < h; xxx++)
			{

				if (xxx == z or yyy == z) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	if (a == 8) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		z = h / 2;
		zz = h / 2;
		f = h / 2;
		for (int yyy = 0; yyy < h; yyy++)
		{
			for (int xxx = 0; xxx < h; xxx++)
			{
				if (xxx == z or xxx == zz) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			if (yyy<f) {
				zz = zz + 1;
				z = z - 1;

			}
			else
			{
				zz = zz - 1;
				z = z + 1;
			}
			cout << endl;
		}
	}
	if (a == 9) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		z = h / 2;
		zz = h / 2;
		f = h / 2;
		kkk = 0;
		for (int yyy = 0; yyy < h; yyy++)
		{
			for (int xxx = 0; xxx < h; xxx++)
			{
				ddd = h - 1;
				fff = yyy % 2;
				if (fff!=0) {
					kkk = kkk + 1;
				}
				if (kkk % 2 == 0) {
					ddd = 0;
				}
				lll = yyy % 2;
				if (lll == 0 or (lll != 0 and xxx == ddd) ) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	if (a == 10) {
		system("cls");
		cout << "[+] Размер: ";
		cin >> h;
		cout << "[+] Текстура: ";
		cin >> hhh;
		system("cls");
		z = h / 2;
		for (int yyy = 0; yyy < h; yyy++)
		{
			for (int xxx = 0; xxx < h; xxx++)
			{

				if (xxx == 0 or xxx==h-1 or yyy==0 or yyy==h-1) {
					cout << hhh << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}









	}







































