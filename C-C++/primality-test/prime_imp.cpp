//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent

#include "prime_dec.h"
#include <cmath>

bool isPrime(long long number)
{
    if ((2 == number) || (3 == number))
    {
        return true;
    }
    if ( (1 == number) || (0 == number%2) || (0 == number%3) )
    {
        return false;
    }
    long long sqrt_num = static_cast<long long> (std::sqrt(number));
    for (long long i=1 ; (6*i-1)<= sqrt_num ; i++)
    {
        if ( (0 == number%(6*i-1)) || (0 == number%(6*i+1)) )
            return false;
    }
    return true;
}
