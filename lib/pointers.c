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

    printf("Bubble sort: ");
    for(int i = 0; i < count; i++)
        printf("%d ", target[i]);
    printf("\n");

    return 0;
}

void insertion_sort(int *collection, int count)
{
    int i, j, k;

    for (i = 1; i < count; i++)
    {
        j = i;
        while (j >= 0 && *(collection + (j - 1)) < *(collection + j))
        {
            k = *(collection + j);
            *(collection + j) = *(collection + (j - 1));
            *(collection + (j - 1)) = k;
            j--;
        }
    }

    printf("Insertion sort: ");
    for(int i = 0; i < count; i++)
        printf("%d ", *(collection + i));
    printf("\n");
}


void reverse(int *collection, int count)
{
    int i, j;

    char temporal;
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

    printf("Reversed array: ");
    for(int i = 0; i < count; i++)
        printf("%d ", *(collection + i));
    printf("\n");
}

/*
int calulate_frequency(int *collection, int count, int target)
{
  return 0;
}*/