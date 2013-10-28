//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent

#include "order_stat_dec.h"
#include <cstring>
#include <utility>
int order_stat(int scores[], int start, int end, int order)
{
    while (start < end)
    {
        int pivot = partition(scores, start, end) ;
        if (pivot == order)
        {
            return scores[pivot+start];
        }
        else if (pivot < order)
        {
          start = pivot+1;
          order = order - start;
        }
        else
        {
           end = pivot-1;
        }
    }
    return scores[start];
}


int partition(int scores[], int start, int end)
{
    int pivot = scores[end];
    int j = start -1;
    for (int i = start; i < end; i++ )
    {
        if (scores[i] < pivot)
        {
            j++;
            swap(scores[j],scores[i]);
        }
    }
    swap(scores[++j], scores[end]);
    return j;
}
