#include <iostream>

int main()
{
	std::cout << "Calculation of the volume of a parallelepiped." << std::endl;
	double length, width, height;
	std::cout << "Enter the output data:" << std::endl;
	std::cout << "Length (cm) -> ";
	std::cin >> length;
	std::cout << "Width (cm) -> ";
	std::cin >> width;
	std::cout << "Height (cm) -> ";
	std::cin >> height;
	double volume = length * width * height;
	std::cout << "Volume of a parallelepiped = " << volume << " cm^3" << std::endl;

	return 0;
}