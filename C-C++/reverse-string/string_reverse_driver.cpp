//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent


#include "string_reverse_dec.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char test_str[25];
    //Initialize the random number seed with current time
    srand(time(0));

    for (int i=0 ; i< 25 ; i++)
    {
        test_str[i] = rand()%128;
    }
     cout << "The original string is " << test_str << endl;
     string_reverse(test_str);
     cout << "The reversed string is " << test_str << endl;
     return 0;
}
