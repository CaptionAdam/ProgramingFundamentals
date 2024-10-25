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
    

    
    
    
    
    //***************Filling Arrays with user input***********************
    
    // //Scanf for user input of known length array
    
    // //Variable declaration
    // int iArray6[5] = {0};
    
    // //Prompt for input
    // printf("Please enter 5 integer values:  ");
    // for(iIndex = 0; iIndex < 5; iIndex++) scanf("%d", &iArray6[iIndex]);
    
    // printf("\niArray6[5] contents are:\t");  //Output preamble
    // for(iIndex = 0; iIndex < 5; iIndex++) 
    // {
    //     printf("%d\t", iArray6[iIndex]);     //Output values
    // }
    // printf("after filling\n\n");     //Spaces for readability
    
    
    // //Did you try inputting more than 5 values?  Less?  What happened?
    // //Where did the extra inputs go?
    
    
    
    
    
    
    
    
    //So, how do we fill and play back less than max values in a large array?
    
    
    //Variable declaration
    int iArray7[50] = {0};
    int iCount = 0;
    iIndex = 0;
    
    
    //Prompt for input
    printf("Please enter integer values, 0 to end:  ");
    
    do 
    {
        scanf("%d", &iArray7[iIndex]);
        
        iIndex++;
        iCount++;
        
    }while((iArray7[iIndex - 1] != 0) && (iIndex < 50));

    
    
    //displays contents up to point where 0 was entered
    printf("\niArray7[??] contents are:\t");  //Output preamble
    for(iIndex = 0; iIndex < iCount; iIndex++) 
    {
        printf("%d\t", iArray7[iIndex]);     //Output values
    }
    printf("after filling\n\n");     //Spaces for readability
    
    
    
    // What did you notice about how this works?  Why does it stop at 0?
    // Do inputs actually stop at 0?
    
    
    
    
    
  


    
    //Congratulations on finishing part 3 of your theory practice.  Good work!    


    return 0;
}


