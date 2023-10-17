#include <iostream>
#include <cmath>

int main()
{
	const double PI = 3.14;
	double R, S, L;
	std::cout << "Enter the radius (L)";
	std::cin >> L;
	R = L / (2.0 * PI);
	S = PI * pow(R, 2);
	std::cout << "Radius = " << S << std::endl;

	return 0;
}