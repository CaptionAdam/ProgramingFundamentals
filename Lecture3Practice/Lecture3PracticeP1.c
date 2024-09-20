/******************************************************************************

Program: Lecture 3 Practice Part 1
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 3

*******************************************************************************/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    /*****************Relational Operators**************************/
    
    //These are your "greater than", "less than", or either of those with "equal to" operators
    //Here are some examples, being assigned and printed to terminal.  
    //Try to predict the output, then uncomment the equation and run the program to verify
    
    int iNum1 = 1, iNum2 = 3, iNum3 = 5;
    int iResult1, iResult2, iResult3 = 0;
    
    iResult1 = (iNum1 > 5); //False
    //printf("Relational Result 1 is %d\n", iResult1);
    iResult2 = (++iNum2 <= 5); //True
    //printf("Relational Result 2 is %d\n", iResult2);
    //iResult3 = (++iNum2 <= --iNum3); //False
    //printf("%d %d", iNum2, iNum3);
    //printf("Relational Result 3 is %d\n", iResult3);
    
    //Did these results match your expectations?  Why?
    
    
    
    
    
    /*****************Equality Operators*****************************/
    
    //These are your "equal to" or "not equal to" operators
    //Here are some examples, being assigned and printed to terminal.  
    //Try to predict the output, then uncomment the equation and run the program to verify
    
    iNum1 = 1, iNum2 = 3, iNum3 = 5;
    iResult1, iResult2, iResult3 = 0;
    
    iResult1 = (iNum1 == 1); //True
    //printf("Equality Result 1 is %d\n", iResult1);
    iResult2 = (++iNum2 != 5); //True
    //printf("Equality Result 2 is %d\n", iResult2);
    iResult3 = (iNum1 > iNum2 != iNum2 < iNum3); //True
    //printf("%d > %d != %d < %d", iNum1, iNum2, iNum2, iNum3);
    //printf("Equality Result 3 is %d\n", iResult3);
    
    //Did these results match your expectations?  Why?
    
    
    
    
    
    
    
    /****************Logical Operators*************************/
    
    //These are your AND, OR, and NOT operators
    //Here are some examples, being assigned and printed to terminal.  
    //Try to predict the output, then uncomment the equation and run the program to verify  
    
    iNum1 = 1, iNum2 = 3, iNum3 = 5;
    iResult1, iResult2, iResult3 = 0;
    int iResult4 = 0;
    
    iResult1 = (!iNum1 == 1); //False
    //printf("Logical Result 1 is %d\n", iResult1);
    iResult2 = (iNum1 && iNum2); //True
    //printf("Logical Result 2 is %d\n", iResult2);
    iResult3 = (!iNum1 && iNum2); //False
    //printf("Logical Result 3 is %d\n", iResult3);
    iResult4 = (iNum1 > iNum2 || iNum2 < iNum3); //True
    //printf("Logical Result 4 is %d\n", iResult4);    
    
    //Did these results match your expectations?  Why?
    
    
    
    
    
    
    //Here is an example involving "Short Circuit" evaluation of operands
    iNum1 = 1, iNum2 = 3, iNum3 = 5;
    iResult1, iResult2, iResult3, iResult4 = 0;
    
    iResult1 = (iNum1);
    printf("Short Circuit Result 1 is %d\n", iResult1);
    printf("Short Circuit iNum value is %d\n", iNum1);
    iResult1 = (iNum1 || --iNum1);
    printf("Short Circuit Result 2 is %d\n", iResult1);
    printf("Short Circuit iNum value is %d\n", iNum1);
    
    //What would you have expected to happen with the value of iNum1 on line 92?  Did it happen?
    
    
    
    
    
    
    
    
    
       //Congratulations on finishing Part 1 of your theory practice.  On to part 2!

    return 0;
}
