/******************************************************************************

Program: Lecture 6 Practice
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 6

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//Preprocessor directives
#define LENGTH 5

int main()
{
    //Index Variable Declaration - Do not comment out
    int iIndex = 0;
    

    
    
    
    
    // //***********Filling 1D Array*********************************
    
    //Array filled in program with for loop
    
    //Variable declaration
    int iArray5[5] = {0};
    
    printf("iArray5[5] contents are:\t");  //Output preamble
    for(iIndex = 0; iIndex < 5; iIndex++) 
    {
        printf("%d\t", iArray5[iIndex]);     //Output values
    }
    printf("before filling.\n\n");     //Spaces for readability
    
    
    for(iIndex = 0; iIndex < 5; iIndex++) 
    {
        iArray5[iIndex] = iIndex;     //Filling array with iIndex at each step
    }
    
    
    printf("iArray5[5] contents are:\t");  //Output preamble
    for(iIndex = 0; iIndex < 5; iIndex++) 
    {
        printf("%d\t", iArray5[iIndex]);     //Output values
    }
    printf("after filling\n\n");     //Spaces for readability
    
    
    
    //Notes on this section:
    
    
    
    
    
    
 
    
    //Congratulations on finishing Part 2 of your theory practice.  Good work! Part 3 awaits! 


    return 0;
}


