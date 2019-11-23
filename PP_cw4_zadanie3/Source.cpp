#include<stdio.h>
#include<math.h>
#include <iostream>
#include <iomanip> 

using namespace std;

double oblicz_pierwiastek(double x, double eps = 0.1) {
	double w = 1;
	while (abs(w * w - x) >= eps) {
		w = (x / w + w) / 2;
	}
	return w;
}

int main() {
	double x, eps, wynik;
	cout << "Oblicz pierwiatek\n";
	cout << "Podaj liczbe do spierwiatkowania, oraz epsilon przyblizenia: ";
	cin >> x >> eps;
	wynik = oblicz_pierwiastek(x, eps);
	cout << "\nPierwiastek liczby " << x << " to " << setprecision(8) << wynik;
}

