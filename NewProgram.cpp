// NewProgram.cpp: определяет точку входа для консольного приложения.
//Нахождение корней дискриминанта
#include "stdafx.h"
#include <iostream>


using namespace std;
float a, b, c;
float discriminant(int a,int b,int c);

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "Имеется уравнение вида : ax^2+bx+c";

	cout << "\nВведите целочисленное значение а: ";
	cin >> a;

	cout << "\nВведите целочисленное значение b: ";
	cin >> b;

	cout << "\nВведите целочисленное значение c: ";
	cin >> c;


	float d = discriminant(a, b, c);
	cout << "\n" << "Дискриминант равен: " << d;
	d = sqrt(d);
	

	if (d > 0) 
	{
		float x1 = ((-b) + d) / (2 * a);
		float x2 = ((-b) - d) / (2 * a);
		cout << "\n" << "Первый корень: " << x1 << "\n" << "Второй корень: " << x2 << "\n";
	}
	else if (d == 0) 
	{
		float x3 = ((-b )/ (2 * a));
		cout << "\n" << "Единственный корень равен : " << x3;
	}
	else if (d < 0) 
	{
		cout << "\n" << "Корней нет. ";
	}
	
	system("pause");
	return 0;
}

float discriminant(int a, int b, int c) {
	float d;
	d = (b * b) - (4 * a * c);
	return d;
}