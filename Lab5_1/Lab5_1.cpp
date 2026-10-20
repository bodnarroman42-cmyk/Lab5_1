// Lab_05_1.cpp
// Боднар Роман
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз.
// Варіант 2

#include <iostream>
#include <cmath>

using namespace std;
double k(const double x, const double y);

int main()
{
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = pow(k(p + sqrt(q), q - sqrt(p)), 2) - k(1, p + q);

	cout << "c = " << c << endl;
}
double k(const double x, const double y) {
	return (x / abs(x * x * x + y * y * y)) + (y / (abs(x + y)));

}