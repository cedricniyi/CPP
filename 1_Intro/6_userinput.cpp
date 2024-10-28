//
// Created by Cédric Niyikiza on 28/10/2024.
//
# include <iostream>

// std::cout -> insertion operator
// std::cin -> extraction operator
int main(int argc, char* argv[])
{
    std::string name;
    std::string fname;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your fulname (accept spaces): ";
    // std::ws permet de supprimer des whites spaces qui pourrait trainer dans le buffer, si il y avait eu une demande
    // d'utilisateur avant la demande utilisant getLine. Sans std::ws le programme ne pourrait pas fonctionner correctementR
    std::getline(std::cin >> std::ws, fname);

    std::cout << "Hello, " << name << " (" << fname << ") !" << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Alright! You're " << age << " years old!" << std::endl;

    return 0;
}
