#include <iostream>


// приводит число к стандартному виду
void standarts(double numb)
{
	int k = 0;
	double n = numb;

	if (n >= 10) {
		while (true) {
			n /= 10;
			k++;
			if (n < 10) {
				break;
			}
		}
	}
	else if (n < 1){
		while (true) {
			n *= 10;
			k--;
			if (n >= 1) {
				break;
			}
		}
	}
	else {
		;
	}

	std::cout << n << " * 10^(" << k << ")";
}