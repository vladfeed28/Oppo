#include <iostream>

double my_pow(double x, unsigned int y) {

	double count = 1;
	while (y > 0) {
		if (y % 2 == 0) {
			y /= 2;
			x *= x;
		}
		else {
			y--;
			count *= x;
		}
	}
	return count;
}