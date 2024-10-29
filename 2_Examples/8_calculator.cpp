#include <iostream>

int main()
{
    char op;
    double num1, num2;
    double result;

    std::cout<<"******************* CALCULATOR *******************"<<std::endl;

    std::cout << "Please enter an operator sign (+ - * /):"<<std::endl;;
    std::cin >> op;

    std::cout << "Please enter the first operand of your operation:"<<std::endl;;
    std::cin >> num1;

    std::cout << "Please enter the second operand of your operation:"<<std::endl;;
    std::cin >> num2;

    switch (op)
    {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " / " << num2 << " = " << result << std::endl;
            break;
        default:
            std::cout << op << " is not a valid operation." << std::endl;
            break;
    }
    std::cout<<"**************************************************"<<std::endl;
    return 0;
}
