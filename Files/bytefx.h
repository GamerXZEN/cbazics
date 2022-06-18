#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma once

int calculator()
{
    int x;
    printf("Enter your amount of bits to calculate how many bytes you have:");
    scanf("%d", &x);
    char he[15];
    char hel[] = "Over limit. Error. Error. Please enter something lower than 72 to calculate your bytes. Error ";

    if(x >= 8 && x<=15)
    {
        he = '1 byte';
        printf("%s", he);
    }
    else if(x >= 16 && x<= 23)
    {
        he = '2 bytes';
        printf("%s", he);
    }
    else if(x >= 24 && x <= 31)
    {
        he = '3 bytes';
        printf("%s", he);
    }
    else if(x >= 32 && x <= 55)
    {
        he = '4 bytes';
        printf("%s", he);
    }
    else if(x >= 56 && x <= 63)
    {
        he = '5 bytes';
        printf("%s", he);
    }
    else if(x >= 64 && x <= 71)
    {
        he = '6 bytes';
        printf("%s", he);
    }
    else if(x >= 72)
    {
        printf("%s", hel);
    }
    else
    {
        he = '0 bytes';
        printf("%s", he);
    }
    return 0;
}









/*I can't do this*/