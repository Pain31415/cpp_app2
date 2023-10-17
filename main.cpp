#include <iostream>

int main() {
    int year;
    std::cout << "Enter the year: ";
    std::cin >> year;

    int daysInYear = 365 + (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    std::cout << "In the year " << year << " is " << daysInYear << " days." << std::endl;

    return 0;
}