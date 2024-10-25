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
    
    
    //************************One-Dimensional Arrays***************************
    //Array initialized with {0}
    
    // //Variable declaration
    // int iArray[5] = {0};
    
    // //Output to terminal
    // printf("iArray[5] = {0} contents are:\t");  //Output preamble
    // for(iIndex = 0; iIndex < 5; iIndex++) 
    // {   
    //     printf("%d\t", iArray[iIndex]);         //Output values
    // }
    // printf("\n\n");     //Spaces for readability
    
    
    // //Array initialized with {5}
    
    // //Variable declaration
    // int iArray2[5] = {5};
    
    // //Output to terminal
    // printf("iArray2[5] = {5} contents are:\t");     //Output preamble
    // for(iIndex = 0; iIndex < 5; iIndex++) 
    // {
    //     printf("%d\t", iArray2[iIndex]);     //Output values
    // }
    // printf("\n\n");     //Spaces for readability
    
    
    // //Array initialized with {5,4,3,2,1}
    
    // //Variable declaration
    // int iArray3[5] = {5,4,3,2,1};
    
    // //Output to terminal
    // printf("iArray3[5] = {5,4,3,2,1} contents are:\t"); //Output preamble
    // for(iIndex = 0; iIndex < 5; iIndex++) 
    // {
    //     printf("%d\t", iArray3[iIndex]);     //Output values
    // }
    // printf("\n\n");     //Spaces for readability
    
    
    //Array uninitialized
    
    //Variable declaration
    int iArray4[LENGTH];
    
    //Output to terminal
    printf("iArray4[LENGTH] contents are:\t");  //Output preamble
    for(iIndex = 0; iIndex < 5; iIndex++) 
    {
        printf("%d\t", iArray4[iIndex]);     //Output values
    }
    printf("\n\n");     //Spaces for readability
    
    
    
    
    //Did anything here suprise you?  What, and how do you explain it?
    
    
    
    
    
    
    
    
    
    
   
    //Congratulations on finishing Part 1 of your theory practice.  On to part 2!    


    return 0;
}


