//
// Created by Cédric Niyikiza on 28/10/2024.
//
#include <iostream>

namespace first
{
    std::string cedric = "Cédric Niyi";
}

namespace second
{
    std::string cedric = "Cédric Dubois";
}

int main()
{
    std::cout << first::cedric << std::endl;

    using namespace second;

    std::cout << cedric << std::endl;

    using namespace std;

    cout << first::cedric << endl;

    return 0;
}