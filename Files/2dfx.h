#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma once

int aray()
{
    int arr2d[6][5]{{1,2,3,6,9}, {6,9,4,2,0}, {4,6,2,9,0}, {1,4,2,0,3}, {4,2,0,6,9}, {1,6,2,9,3}};
    for(int i=0; i<6; i++)
    {
    for(int j=0; j<5; j++) 
    {
        printf("%d", arr2d[i][j]);
    }
    }
    return 0;
}