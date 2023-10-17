#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Calculation of the volume of a sphere." << std::endl;
	double radius;
	std::cout << "Enter the radius of the sphere: ";
	std::cin >> radius;
	double volume = 4.0 / 3.0 * M_PI * pow(radius, 3);
	std::cout << "The volume of the sphere is " << volume << std::endl;

	return 0;
}