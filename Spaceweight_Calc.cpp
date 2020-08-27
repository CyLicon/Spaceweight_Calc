// Spaceweight_Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double weight;
    int x;
    
    std::cout << "Enter your current Earth weight (kg): ";
    std::cin >> weight;

    std::cout << "Press:\n 1 for Mercury,\n 2 for Venus,\n 3 for Mars,\n 4 for Jupiter,\n 5 for Saturn,\n 6 for Uranus,\n and 7 for Neptune.\n";
    std::cout << "Choose your planet:" ;
    std::cin >> x;

    switch (x) {

    case 1:
        std::cout << "Your weight on Mercury will be " << weight * 0.38 << " kilos\n";
        break;

    case 2:
        std::cout << "Your weight on Venus will be " << weight * 0.91 << " kilos\n";
        break;

    case 3:
        std::cout << "Your weight on Mars will be " << weight * 0.38 << " kilos\n";
        break;

    case 4:
        std::cout << "Your weight on Jupiter will be " << weight * 2.34 << " kilos\n";
        break;

    case 5:
        std::cout << "Your weight on Saturn will be " << weight * 1.06 << " kilos\n";
        break;

    case 6:
        std::cout << "Your weight on Uranus will be " << weight * 0.92 << " kilos\n";
        break;

    case 7:
        std::cout << "Your weight on Neptune will be " << weight * 1.19 << " kilos\n";
        break;

            }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
