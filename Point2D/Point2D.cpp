#include <iostream>
#include "c_Point2D.h"

int main()
{
    c_Point2D x(1, 1);
    c_Point2D y(2, 2);
    (x / y).Show();
    std::cout << (x < y);
}