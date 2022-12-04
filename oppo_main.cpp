#include <iostream>

double my_pow(double x, unsigned int y) {
	double count = 1;
	for (int i = 0; i < y; i++) {
		count *= x;
	}
	return count;
}
