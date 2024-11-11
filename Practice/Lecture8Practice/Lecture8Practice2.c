/******************************************************************************
Program: Lecture 7 Practice
Coder:
Date:
Purpose: Part 2 of activities appropriate to Lecture 7
*******************************************************************************/
#include <stdio.h>

//This activity contains a User-Defined Function that uses an array as a 
//passed argument.  Play with it.  See what it does and how it works.


//function declaration
int ArrayToZero(int iArrayInput[], int iArrayLength);

int main()
{
    int iArray[10]; //array declaration
    int iIndex;
    
    for(iIndex = 0; iIndex < 10; iIndex++)      //For 10 iterations, print element of array and advance
    {
        printf("%d ",iArray[iIndex]);   
    }
    printf("\n\n");
    
    ArrayToZero(iArray, 10);    //function call     
                //^Notice no [], length separate
    
    for(iIndex = 0; iIndex < 10; iIndex++)
    {
        printf("%d ",iArray[iIndex]);           //For 10 iterations, print element of array and advance
    }
    
    return 0;
}

//**********User Defined Function******************
int ArrayToZero(int iArrayInput[], int iArrayLength)
{
    int iIndex;
    for(iIndex = 0; iIndex < iArrayLength; iIndex++)    //For (Argument) iterations, set element of array to 0, and advance
    {
        iArrayInput[iIndex] = 0;
    }
}


