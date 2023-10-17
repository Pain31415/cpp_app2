#include <iostream>
using std::cout;

int main() {
	double R1, R2, R3, R0;

	R1 = 2;
	R2 = 4;
	R3 = 8;
	R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

	std::cout << "R0 = " << R0 << std::endl;

	return 0;
}