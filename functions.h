#pragma once
void swapNumberValue(int x, int y)  //value
{
    int temp = x;
    x = y;
    y = temp;
    std::cout << "In function by Value" << " " << temp << " " << x << " " << y << std::endl;
}


void swapNumberRef(int& x, int& y)  //reference
{
    int temp = x;
    x = y;
    y = temp;
    std::cout << "In function by Reference" << " " << temp << " " << x << " " << y << std::endl;
}

void swapNumberPtr(int* x, int* y) //declare parameters as pointers
{
    int temp = *x;                  //decalre temp as pointer and initialiase to x
    *x = *y;                        //set x = y
    *y = temp;                      //set y to temp
    std::cout << "In function by Pointer" << " " << temp << " " << *x << " " << *y << std::endl;
}