#include <iostream>

int main (){

    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    std::cout << '\n';

    std::cout << "Enter a double value: ";
    double y{};
    std::cin >> y;
    std::cout << '\n';

    std::cout << "Enter +, -, *, or /: ";
    char z{};
    std::cin >> z;
    std::cout << '\n';

    if(z == '+')
        std::cout << x << " + " << y << " is: " << x + y;
    else if(z == '-')
        std::cout << x << " - " << y << " is: " << x - y;
    else if(z == '*')
        std::cout << x << " * " << y << " is: " << x * y;
    else if(z == '/')
        std::cout << x << " / " << y << " is: " << x / y;

    return 0;
}
