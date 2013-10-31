//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent


#include "order_stat_dec.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TEST_SIZE = 15;

int main()
{
    int test_array[TEST_SIZE];
    //Initialize the random number seed with current time
    srand(time(0));

    for (int i=0 ; i< TEST_SIZE ; i++)
    {
        test_array[i] = rand();
        cout << "\t" << test_array[i] << "\t";
    }

    cout << endl<< "The 4th smallest element is: " << order_stat(test_array,0,TEST_SIZE-1,4) << endl;
    return 0;
}
