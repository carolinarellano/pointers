//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

int bubble_sort(int *target, int count)
{
    int temporal;
    for(int i = 0; i < count; i++)
    {
        for(int j = i; j < count; j++)
        {
            if(*(target + j) < *(target + i))
            {
                temporal = *(target + j);
                *(target + j) = *(target + i);
                *(target + i) = temporal;
            }
        }
    }

    for(int i = 0; i < count; i++)
        printf("[%d]", target[i]);

    return 0;
}

/*void insertion_sort(int *collection, int count)
{

}


void reverse(int *collection, int count)
{

}

int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}*/