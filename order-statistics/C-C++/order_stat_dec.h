//Copyright © Santoh Gondi, 2013, All Rights Reserved.
//No part of this file may be reproduced without Santosh Gondi's express consent

#ifndef STRING_REVERSE_DEC_H
#define STRING_REVERSE_DEC_H

using namespace std;

int order_stat(int scores[], int start, int end, int order);
//pre-condition - scores is a valid array including start, end and order indexes
//post-condition - reutrns the element corresponding to order index.

int partition(int scores[], int start, int end);
//pre-condition - scores is a array with valid start and end indexes
//post-condition - returns the index of randomly choosen pivot for partioning the scores

#endif // STRING_REVERSE_DEC_H
