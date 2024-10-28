//
// Created by Cédric Niyikiza on 28/10/2024.
//
#include <iostream>

int main()
{
    // int
    int x = 10; // Déclaration et assignation de la variable
    int y = 7;
    int sum = x + y;

    std::cout << "integers:" << std::endl;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "x + y: "  << sum << std::endl;

    std::cout << "=== === ===" << std::endl;

    // double
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;

    std::cout << "double:" << std::endl;

    std::cout << "price: " << price << std::endl;
    std::cout << "gpa: " << gpa << std::endl;
    std::cout << "temp: " << temp << std::endl;

    std::cout << "=== === ===" << std::endl;

    // single caracter
    char grade = 'A';
    char initial = 'B';
    std::cout << "caracters:" << std::endl;

    std::cout << "grade: " << grade << std::endl;
    std::cout << "initial: " << initial << std::endl;

    std::cout << "=== === ===" << std::endl;

    // booleans
    bool student = false;
    bool power = true;
    bool forSale = false;

    std::cout << "booleans:" << std::endl;

    std::cout << "Is Cédric a student: " << student <<std::endl;
    std::cout << "Power: " << power << std::endl;
    std::cout << "ForSale: " << forSale << std::endl;

    std::cout << "=== === ===" << std::endl;

    // strings == represent a sequence of texte
    std::cout << "Strings manipulation:" << std::endl;

    std::string lname = "Cédric";
    std::string day = "Sunday";
    std::string food = "Sea Food";
    std::string address = "123 2222";


    std::cout << "Hello " << lname << '\n';
    std::cout << "You're " << x << " years old" << std::endl;
    std::cout << "=== === ===" << std::endl;

    return 0;
}