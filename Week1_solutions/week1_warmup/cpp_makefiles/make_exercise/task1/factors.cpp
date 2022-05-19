#include<iostream>

#include "facorial.h"

vec factors(int num)
{
    vec result;

    for(int i=1; i<6; i++)
    {
        if(num%i==0)
        {
            result.push_back(i);
        }
    }

    return result;
}