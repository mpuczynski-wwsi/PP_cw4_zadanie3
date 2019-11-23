#include<stdio.h>
#include<math.h>
#include <iostream>

using namespace std;

double oblicz_pierwiastek(double x, double eps = 0.1) {
	double w = 1;
	while (abs(w * w - x) >= eps) {
		w = (x / w + w) / 2;
	}
	return w;
}