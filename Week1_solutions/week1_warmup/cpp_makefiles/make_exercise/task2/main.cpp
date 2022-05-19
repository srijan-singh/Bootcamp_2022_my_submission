#include<iostream>

#include "complex.h"

int main()
{
    complex_number num1, num2;

    num1.real_num = 2;
    num1.imag_num = 10;

    num2.real_num = 4;
    num2.imag_num = 9;

    print(add(num1, num2));

    return 0;
}