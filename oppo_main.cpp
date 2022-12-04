#include <iostream>

double my_pow(double x, int y) {
	bool buff = false;	
	if (y<0) {
		y = -y;
		buff = true;
	}
	
	double count = 1;
	for (int i = 0; i < y; i++) {
		count *= x;
	}
	
	if (buff) count = 1 / count;
	return count;
}

