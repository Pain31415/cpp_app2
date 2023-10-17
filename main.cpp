#include <iostream>

int main()
{
	std::cout << "Calculation of the distance between settlements." << std::endl;
	double scale, distance_in_cm;

	std::cout << "Enter the output data:" << std::endl;
	std::cout << "Map scale (number of kilometers in one centimeter) -> ";
	std::cin >> scale;
	std::cout << "Distance between points representing settlements (cm) -> ";
	std::cin >> distance_in_cm;

	double distance_in_km = distance_in_cm / (scale * 100000);
	std::cout << "Distance between settlements (km) -> " << distance_in_km << std::endl;

	return 0;
}