//
// Created by Cédric Niyikiza on 30/10/2024.
//
#include <iostream>
#include <ctime>

int main(int argc, char* argv[])
{
    // pseudo-random = NOT truly random

    srand(time(NULL));

    // Produce a random number between 1 and 6
    int n = rand() % 6 + 1;

    std::cout << n;

    return 0;
}
