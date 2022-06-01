// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "functions.h"

int main()
{
    std::cout << "Example program, pass by value, pass by reference and pass by pointer!\n";
    int a = 10;
    int b(20);
    std::cout << "Before function call" << " " << a << " " << b << std::endl;
#if 1
    swapNumberValue(a, b);
#elif 1
    swapNumberRef(a, b);
#else
    swapNumberPtr(&a, &b);
#endif
    std::cout << "After function call" << " " << a << " " << b << std::endl;
}

