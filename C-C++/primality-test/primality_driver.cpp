//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent


#include "prime_dec.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Initialize the random number seed with current time
    srand(time(0));

    for (int i=0 ; i< 100 ; i++)
    {
        long long number = rand();
        cout << "The number " << number
            << " is " << (isPrime(number) == true ? "Prime" : "not Prime")
            << endl ;
    }
    return 0;
}
