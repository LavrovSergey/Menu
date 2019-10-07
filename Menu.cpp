#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int menu_1();
int menu_2();
int menu_3();
int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: {int answer_1 = menu_1();
		switch (answer_1) {
		case 0: s1(); break;
		case 1: s2(); break;
		case 2: s3(); break;
		case 3: s4(); break;
		case 4: return 0;
		}
	}; break;
	case 1: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: f1(); break;
		case 1: f2(); break;
		case 2: f3(); break;
		case 3: f4(); break;
		case 4: return 0;
		}
	}; break;
	case 2: {int answer_3 = menu_3();
		switch (answer_3) {
		case 0: w1(); break;
		case 1: w2(); break;
		case 2: w3(); break;
		case 3: return 0;
		}; break;
	}; return 0;
		system("pause");
		return 0;
	}
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> Series" << endl;
		else  cout << "   Series" << endl;
		if (key == 1) cout << "-> For" << endl;
		else  cout << "   For" << endl;
		if (key == 2) cout << "-> While" << endl;
		else  cout << "   While" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> Series1" << endl;
		else  cout << "   Series1" << endl;
		if (key == 1) cout << "-> Series2" << endl;
		else  cout << "   Series2" << endl;
		if (key == 2) cout << "-> Series3" << endl;
		else  cout << "   Series3" << endl;
		if (key == 3) cout << "-> Series4" << endl;
		else  cout << "   Series4" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "->For1" << endl;
		else  cout << "   For1" << endl;
		if (key == 1) cout << "-> For2" << endl;
		else  cout << "   For2" << endl;
		if (key == 2) cout << "-> For3" << endl;
		else  cout << "   For3" << endl;
		if (key == 3) cout << "-> For4" << endl;
		else  cout << "   For4" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> While1" << endl;
		else  cout << "   While1" << endl;
		if (key == 1) cout << "-> While2" << endl;
		else  cout << "   While2" << endl;
		if (key == 2) cout << "-> While3" << endl;
		else  cout << "   While3" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}