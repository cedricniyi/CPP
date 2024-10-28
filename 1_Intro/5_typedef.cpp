//
// Created by Cédric Niyikiza on 28/10/2024.
//
#include <iostream>
#include <vector>

// Use of keyword : typedef

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

// Use of keyword : using

using pairlist_t = std::vector<std::pair<std::string, int>> ;
using text_t = std::string ;
using number_t =  int ;


int main()
{
    text_t firstname = "Cédric";
    number_t firstnumber = 22;
    std::cout << firstname << std::endl;
    std::cout << firstnumber << std::endl;
    return 0;
}
