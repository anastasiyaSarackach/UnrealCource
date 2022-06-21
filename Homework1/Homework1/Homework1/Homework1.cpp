

#include <iostream>
#include "Helpers.h"

int main()
{
    double  a = 0, b = 0;
    std::cout << "Enter the value a = " << "\n";
    std::cin >> a;

    std::cout << "Enter the value b = " << "\n";
    std::cin >> b;

    std::cout << "Answear = " << SumSquared( a, b ) << "\n";

    return 0;
}

