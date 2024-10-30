//
// Created by Cédric Niyikiza on 29/10/2024.
//

#include <iostream>

int main(int argc, char* argv[])
{
    double temperature;
    char unit;
    std::string name;
    std::cout<<"******************* TEMPERATURE CONVERSION *******************"<<std::endl;
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;

        temperature = (temperature - 32) / 1.8;
        std::cout << "Temperature in Celsius = " << temperature << std::endl;

    }else if(unit == 'F' || unit == 'f')
    {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;

        temperature = (temperature * 1.8) + 32;
        std::cout << "Temperature in Fahrenheit = " << temperature << std::endl;
    }else
    {
        std::cout << "[Please enter a valid unit]\n";
    }

    std::cout<<"**************************************************************"<<std::endl;

}
