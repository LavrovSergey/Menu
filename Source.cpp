#include "Header.h"
#include<iostream>
using namespace std;

int s1()
{
	setlocale(LC_ALL, "Russian");
	int k;

	cout << "������� ���� �� 1 �� 7 \n ";
	cin >> k;

	switch (k)
	{
	case 1:(k = 1); cout << "�����������"; break;
	case 2: (k = 2);  cout << "�������"; break;
	case 3:(k = 3); cout << "�����"; break;
	case 4: (k = 4); cout << "�������"; break;
	case 5: (k = 5); cout << "�������"; break;
	case 6: (k = 6); cout << "�������"; break;
	case 7: (k = 7); cout << "�����������"; break;
	default: cout << "������";
	}

	return 0;


}
int s2()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "������� ������ ��� �����������\n";
	cin >> k; " \n";
	switch (k)
	{

	case 1: (k = 1);
		cout << "�����";
		break;
	case 2: (k = 2);
		cout << "�������������������";
		break;
	case 3: (k = 3);
		cout << "�����������������";
		break;
	case 4: (k = 4);
		cout << "������";
		break;
	case 5: (k = 5);
		cout << "�������";
		break;
	default:
		cout << "������";
		break;






	}

	return 0;
}
int s3()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ������, ��� � ������ ���o�\n";
	int a;
	cin >> a; "\n";
	switch (a)
	{
	case 1:(a = 1);
		cout << "����";
		break;
	case 2:(a = 2);
		cout << "����";
		break;
	case 3:(a = 3);
		cout << "�����";
		break;
	case 4:(a = 4);
		cout << "�����";
		break;
	case 5:(a = 5);
		cout << "�����";
		break;
	case 6:(a = 6);
		cout << "����";
		break;
	case 7:(a = 7);
		cout << "����";
		break;
	case 8:(a = 8);
		cout << "����";
		break;
	case 9:(a = 9);
		cout << "�����";
		break;
	case 10:(a = 10);
		cout << "�����";
		break;
	case 11:(a = 11);
		cout << "�����";
		break;
	case 12:(a = 12);
		cout << "����";
		break;

	}
	return 0;
}
int s4()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ������, ��� � ������� � ��� ���� � ������������ ���\n";
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
	cout << "������� K: ";
	cin >> k;
	cout << "������� N: ";
	cin >> n;
	for (i = 0; i < n; i++)
		cout << "Chislo K = " << k << "\n";

	return 0;
}
int f2()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� A: ";
	cin >> a;
	cout << "������� B: ";
	cin >> b;
	for (c = a; c <= b; c++)
		cout << c << "\n";

	cout << "���������� ���� ����� " << b - a + 1;
	return 0;
}
int f3()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� A: ";
	cin >> a;
	cout << "������� B: ";
	cin >> b;
	for (c = b; c > a; c--)
		cout << c << "\n";

	cout << "���������� ���� ����� " << b - a;
	return 0;
}
int f4()
{
	setlocale(LC_ALL, "Russian");
	int a, c;
	cout << "������� ���� ������ �� ���������: ";
	cin >> a;
	for (c = 1; c <= 10; c++)
		cout << a * c << " ������\n";


	return 0;
}
int w1()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i;
	cout << "������� ����� ������� �\n";
	cin >> a;
	cout << "������� ����� ������� B\n";
	cin >> b;
	i = 0;
	while (a > b) {
		a = a - b;


	}

	std::cout << "����� ��������� ����� ������� �= " << a;


	return 0;
}
int w2()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i;
	cout << "������� ����� ������� �\n";
	cin >> a;
	cout << "������� ����� ������� B\n";
	cin >> b;
	i = 0;
	while (a > b) {
		a -= b;
		i++;

	}

	std::cout << "���������� �������� �, ����������� �� ������� �= " << i;


	return 0;
}
int w3()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	int i = 0;
	cout << "������ ����� A>B" << endl;
	cin >> a;
	int c = a;
	cout << "������ ����� B" << endl;
	cin >> b;
	int d = b;
	if (c < 0) { c = -c; }
	else (c = c);
	while (c > d)
	{
		c = c - d;
		i++;
	}
	cout << "������� �� �������= " << i << endl;
	if (a < 0) { a = -a; }
	else (a = a);
	while (a >= b)
	{
		a = a - b;

	}
	cout << "������=" << a;
	return 0;
}