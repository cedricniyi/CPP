//
// Created by Cédric Niyikiza on 28/10/2024.
//

#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
    double a;
    double b;
    double c;

    std::cout << "Enter Side A:";
    std::cin >> a;

    std::cout << "Enter Side B:";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "Here is the solution : " << c << std::endl;
    return 0;
}
