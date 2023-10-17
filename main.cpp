#include <iostream>
#include <cmath>

int main()
{
	double S, v, t, a;
	std::cout << "Enter the initial velocity(v): ";
	std::cin >> v;
	std::cout << "Enter the acceleration(a): ";
	std::cin >> a;
	std::cout << "Enter the time(t): ";
	std::cin >> t;
	S = v * t + (a * pow(t, 2)) / 2;
	std::cout << "The distance is: " << S << std::endl;
	return 0;
}