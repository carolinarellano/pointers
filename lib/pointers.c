//
// Created by: Josean Camarena on July 7, 2022.
// Implemented by: Carolina Arellano on August 27, 2022.
//

#include "pointers.h"

int bubble_sort(int *target, int count)
{
    int temporal;
    int times = 0;
    for(int i = 0; i < count; i++)
    {
        for(int j = i; j < count; j++)
        {
            if(*(target + j) < *(target + i))
            {
                times++;
                temporal = *(target + j);
                *(target + j) = *(target + i);
                *(target + i) = temporal;

            }
        }
    }
    return times;
}

void insertion_sort(int *collection, int count)
{
    int i, j, k;

    for (i = 1; i < count; i++)
    {
        j = i;
        while (j > 0 && *(collection + j - 1) > *(collection + j))
        {
            k = *(collection + j);
            *(collection + j) = *(collection + j - 1);
            *(collection + j - 1) = k;
            j--;
        }
    }
}


void reverse(int *collection, int count)
{
    int i, j;

    int temporal;
    i = count - 1;
    j = 0;
    while (i > j)
    {
        temporal = *(collection + j);
        *(collection + j) = *(collection + i);
        *(collection + i) = temporal;
        j++;
        i--;
    }
}


int calulate_frequency(int *collection, int count, int target)
{
    int i, j;
    j = 0;
    for(i = 0; i < count; i++)
    {
        if(*(collection + i) == target){
            j++;
        }
    }
    return j;
}