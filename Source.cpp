#include "Header.h"
#include<iostream>
using namespace std;

int s1()
{
	setlocale(LC_ALL, "Russian");
	int k;

	cout << "Введите день от 1 до 7 \n ";
	cin >> k;

	switch (k)
	{
	case 1:(k = 1); cout << "Понедельник"; break;
	case 2: (k = 2);  cout << "Вторник"; break;
	case 3:(k = 3); cout << "Среда"; break;
	case 4: (k = 4); cout << "Четверг"; break;
	case 5: (k = 5); cout << "Пятница"; break;
	case 6: (k = 6); cout << "Суббота"; break;
	case 7: (k = 7); cout << "Воскресенье"; break;
	default: cout << "ошибка";
	}

	return 0;


}
int s2()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "Введите оценку для расшифровки\n";
	cin >> k; " \n";
	switch (k)
	{

	case 1: (k = 1);
		cout << "Плохо";
		break;
	case 2: (k = 2);
		cout << "Неудовлетворительно";
		break;
	case 3: (k = 3);
		cout << "Удовлетворительно";
		break;
	case 4: (k = 4);
		cout << "Хорошо";
		break;
	case 5: (k = 5);
		cout << "Отлично";
		break;
	default:
		cout << "Ошибка";
		break;






	}

	return 0;
}
int s3()
{
	setlocale(LC_ALL, "Russian");
	cout << "ВВедите номер месяца, что б узнать сезoн\n";
	int a;
	cin >> a; "\n";
	switch (a)
	{
	case 1:(a = 1);
		cout << "Зима";
		break;
	case 2:(a = 2);
		cout << "Зима";
		break;
	case 3:(a = 3);
		cout << "Весна";
		break;
	case 4:(a = 4);
		cout << "Весна";
		break;
	case 5:(a = 5);
		cout << "Весна";
		break;
	case 6:(a = 6);
		cout << "Лето";
		break;
	case 7:(a = 7);
		cout << "Лето";
		break;
	case 8:(a = 8);
		cout << "Лето";
		break;
	case 9:(a = 9);
		cout << "Осень";
		break;
	case 10:(a = 10);
		cout << "Осень";
		break;
	case 11:(a = 11);
		cout << "Осень";
		break;
	case 12:(a = 12);
		cout << "Зима";
		break;

	}
	return 0;
}
int s4()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер месяца, что б сколько в нем дней в невысокосный год\n";
	int a;
	cin >> a; "\n";
	switch (a)
	{
	case 1:(a = 1);
		cout << "31";
		break;
	case 2:(a = 2);
		cout << "28";
		break;
	case 3:(a = 3);
		cout << "31";
		break;
	case 4:(a = 4);
		cout << "30";
		break;
	case 5:(a = 5);
		cout << "31";
		break;
	case 6:(a = 6);
		cout << "30";
		break;
	case 7:(a = 7);
		cout << "31";
		break;
	case 8:(a = 8);
		cout << "31";
		break;
	case 9:(a = 9);
		cout << "30";
		break;
	case 10:(a = 10);
		cout << "31";
		break;
	case 11:(a = 11);
		cout << "30";
		break;
	case 12:(a = 12);
		cout << "31";
		break;
	}
	return 0;
}

int f1()
{
	setlocale(LC_ALL, "Russian");
	int n, k, i;
	cout << "Введите K: ";
	cin >> k;
	cout << "Введите N: ";
	cin >> n;
	for (i = 0; i < n; i++)
		cout << "Chislo K = " << k << "\n";

	return 0;
}
int f2()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите A: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	for (c = a; c <= b; c++)
		cout << c << "\n";

	cout << "Количество этих чисел " << b - a + 1;
	return 0;
}
int f3()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите A: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	for (c = b; c > a; c--)
		cout << c << "\n";

	cout << "Количество этих чисел " << b - a;
	return 0;
}
int f4()
{
	setlocale(LC_ALL, "Russian");
	int a, c;
	cout << "Введите цену конфет за килограмм: ";
	cin >> a;
	for (c = 1; c <= 10; c++)
		cout << a * c << " гривен\n";


	return 0;
}
int w1()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i;
	cout << "Введите длину отрезка А\n";
	cin >> a;
	cout << "Введите длину отрезка B\n";
	cin >> b;
	i = 0;
	while (a > b) {
		a = a - b;


	}

	std::cout << "Длина незанятой части отрезка А= " << a;


	return 0;
}
int w2()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i;
	cout << "Введите длину отрезка А\n";
	cin >> a;
	cout << "Введите длину отрезка B\n";
	cin >> b;
	i = 0;
	while (a > b) {
		a -= b;
		i++;

	}

	std::cout << "Количество отрезков В, размещенных на отрезке А= " << i;


	return 0;
}
int w3()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i = 0;
	cout << "Ведите число A>B" << endl;
	cin >> a;
	int c = a;
	cout << "Ведите число B" << endl;
	cin >> b;
	int d = b;
	if (c < 0) { c = -c; }
	else (c = c);
	while (c > d)
	{
		c = c - d;
		i++;
	}
	cout << "Частное от деления= " << i << endl;
	if (a < 0) { a = -a; }
	else (a = a);
	while (a >= b)
	{
		a = a - b;

	}
	cout << "Остача=" << a;
	return 0;
}