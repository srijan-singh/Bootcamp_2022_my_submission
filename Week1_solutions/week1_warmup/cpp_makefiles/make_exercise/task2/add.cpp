#include<iostream>

#include "complex.h"

complex_number add(complex_number num1, complex_number num2)
{
    complex_number result;

    result.real_num = num1.real_num + num2.real_num;
    result.imag_num = num1.imag_num + num2.imag_num;

    return result;
}