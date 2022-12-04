#include <iostream>

double my_pow(double x, int y) {
	bool buff = false;	
	if (y<0) {
		y = -y;
		buff = true;
	}
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
	
	if (buff) count = 1 / count;
	return count;
}