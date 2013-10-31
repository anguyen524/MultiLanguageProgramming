//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent

#include "string_reverse_dec.h"
#include <cstring>

void string_reverse(char* str)
{
    int len = strlen(str);
    for (int i=0 ; i<len/2 ; i++)
    {
        char ch;
        ch = str[i];
        str[i] = str[(len-1)-i];
        str[(len-1)-i] = ch;
    }
}
