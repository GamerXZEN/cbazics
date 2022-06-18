#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#include <cinttypes>
#include <inttypes.h>
char printFibonacci(unsigned long long int m)
{    
    static int n1=0,n2=1,n3;    
    if(m>0)
    {
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("%llu ",n3);    
        printFibonacci(m-1);    
    }
    return 0;
}    
int main()
{    
    unsigned long long int n;    
    printf("Enter the number of numbers you want to display: ");    
    scanf("%d",&n);      
    printf("%llu %llu ",0,1);    
    printFibonacci(n-2);
    return 0;  
}