#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <cinttypes>
#include <inttypes.h>
#include <algorithm>
#include <array>
#pragma once


int numble()
{
    int secnum = 954;
    int guess;
    int gsct = 0;
    int gslmt = 6;
    int otfgstms = 0;
    while(guess != secnum && otfgstms == 0)
    {
        if(gsct < gslmt)
        {
        printf("Guess a 3 digit number: ");
        scanf("%d", &guess);
        gsct++;
        }
        else
        {
            otfgstms = 1;
        }
    }
    if(otfgstms == 1)
    {
        printf("You ran out of guesses. It was %d\n", secnum);
    }
    else
    {
        printf("You guessed the correct number. It's %d\n", secnum);
    }
    return 0;
}