#include <iostream>
#pragma once
using namespace std;

int hello()
{
    int t;
    int f = 0;
    const int *s = &f;
    int j = 1;
    cout<<"Enter a number: ";
    cin>>t; 
    while(j == 1)
    {
    switch(3)
    {
        case 1:
            if(isdigit(t))
            {
                while(t <= 4500)
                {
                cout<<"Hello World #"<<t<<endl;
                t++;
                }
            }
        break;
        
        case 2:  
            if(isdigit(t))
            {
                while(t > 4500 && t <= 9000)
                {
                    cout<<"Hello User #"<<t<<endl;
                    t++;
                }
            }
        break;

        case 3:
            if(isdigit(t)) 
            {       
                while (t > 9000)    
                {      
                    cout<<"La La La #"<<f<<" "<<s<<endl;
                    f++;
                }
            }
            break;

        default:
            for(int g = 1; g++; g <= 1)
            {
            cout<<"Error "<<g;
            }
        }
    }
    return 0;   
}