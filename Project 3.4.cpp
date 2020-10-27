// Lab_03_4.cpp
// < Кузів Назар >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 6
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double R; // вхідний аргумент
	double x; // вхідний аргумент
	double y; // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ((y <= sqrt(2 * x * R - pow(x, 2)) && (y >= 0)) ||
		(y <= 0 && y >= -R && x<= 0 && x >= -R && y > -1*pow((x+R),2)-2*y*R ))
		

		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}