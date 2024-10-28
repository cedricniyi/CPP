//
// Created by Cédric Niyikiza on 28/10/2024.
//
#include <iostream>

int main()
{
    /*
        Il faut utiliser const dans le cas ou l'on est certain qu'une variable
        ne sera pas modifier dans le futur
    */
    const double PI = M_PI;
    double radius = 3.0;
    double circumference = radius * 2.0 * PI;
    std::cout << circumference << " cm" << '\n';

}