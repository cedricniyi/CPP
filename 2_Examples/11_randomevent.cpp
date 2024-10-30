//
// Created by Cédric Niyikiza on 30/10/2024.
//
#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
    srand(time(0)); // use current time as the seed

    int randomNumber = rand() % 5 + 1;

    switch (randomNumber)
    {
    case 1: std::cout << "You win a PSP!\n";
        break;
    case 2: std::cout << "You win a Burger!\n";
        break;
    case 3: std::cout << "You win an Iphone!\n";
        break;
    case 4: std::cout << "You win a plane ticket!\n";
        break;
    case 5: std::cout << "You win a brand new house!!!!!\n";
        break;
    }

    return 0;
}
