/******************************************************************************

Program: Lecture 3 Practice Part 2
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 3

*******************************************************************************/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{

    
    /**********************if Statement**************************/
    
    //Recall: Syntax is if(condition) statement;
    //Condition must be TRUE for statement to execute
    
    //For multi-line sections of code like the third example, you can click-select the code group
    //and press "CTRL" then "/" to uncomment it.  Works with commenting too.
    
    
    int iNum1 = 1, iNum2 = 3, iNum3 = 5;
    int iResult1, iResult2, iResult3, iResult4 = 0;
    
    // if(iNum1) printf("iNum1 is true!\n");
    
    // if(!iNum1) printf("Not iNum1 is true!\n");
    
    // if(iNum1)
    // {
    //     iResult1 = iNum1 + iNum2;
    //     printf("iResult1 is %d\n", iResult1);
    // }
    
    
    
    
    
    /**********************else Statement**************************/
    
    //Recall: Syntax is 
    //if(condition) statement; 
    //else statement;
    //if condition is false, else statement is executed
    
    
    iNum1 = 1, iNum2 = 3, iNum3 = 5;
    iResult1, iResult2, iResult3, iResult4 = 0;
    
    if(iNum1) printf("iNum1 is true!\n");
    else printf("iNum1 is false!\n");
    
    if(!iNum1) printf("Not iNum1 is true!\n");
    else printf("Not iNum1 is false!\n");
    
    if(iNum1)
    {
        iResult1 = iNum1 + iNum2;
        printf("iResult1 is %d\n", iResult1);
    }    
    else 
    {
        iResult1 = iNum1 + iNum3;
        printf("iResult1 is %d\n", iResult1);
    }     
    
    
    
    
       //Congratulations on finishing part 2.  Good work! Time for part 3!

    return 0;
}
