#include <iostream>

int main() {
    int hryvnia, kopiyka;

    std::cout << "Enter hryvnias: ";
    std::cin >> hryvnia;
    std::cout << "Enter pennies: ";
    std::cin >> kopiyka;

    hryvnia += kopiyka / 100;
    kopiyka %= 100;

    std::cout << "The correct amount of money: " << hryvnia << " UAH. " << kopiyka << " cop." << std::endl;

    return 0;
}