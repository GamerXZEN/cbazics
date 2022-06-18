#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#pragma once

int gradeproc()
{
    char grade;
    printf("Enter your grade (Please write in capital letters):");
    scanf("%c", &grade);
    switch(grade)
    {
        case 'A':
            printf("UR REALLY GOOD!");
            break;
        case 'B':
            printf("U did great, but get better.");
            break;   
        case 'C':
            printf("You did ok. Get better.");
            break;
        case 'D':
            printf("GET BETTER!");
            break;
        case 'F':
            printf("GET BETTER KIIIIIID!");
            break;
        default:
            printf("Invalid respnose.");
    }
    return 0;
}