/******************************************************************************

Program: Lecture 6 Practice
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 6

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    //local variables
    int iInteger = 0;
    volatile unsigned int iUInteger = 0;
    short int iSInteger = 0;
    unsigned short int iUSInteger = 0;
    long int iLInteger = 0;
    unsigned long int iULInteger = 0;
    
    

    //******************Type Conversion*****************************
    
    char cCharOperand = 3;
    int iIntOperand = 1;
    short int iShortOperand = 2;
    float fFloatOperand = 2.05;
    float fFloatOperand2 = 3.01;
    float fResult = 0.0;
    long int iLResult = 0;
    char cResult = 0;
    
    
    //Type conversion between operands
    
    printf("char + int is int:    %d\n", cCharOperand + iIntOperand);
    printf("int * short is int:    %d\n", iShortOperand * iIntOperand);
    printf("float * char is float:     %f\n", fFloatOperand * cCharOperand);
    
    
    //Space for observations of the type conversions.
    
    
    
    
    
    
    
    //Type conversion during assignment
    // fResult = iIntOperand;
    // printf("Int assigned to float is float:   %f\n", fResult);
    // iLResult = fFloatOperand * fFloatOperand2;
    // printf("Float * float assigned to long is long:   %ld\n", iLResult);
    // cResult = fFloatOperand * 16.0f;
    // printf("Float * float assigned to char is char:    %c\n", cResult);
    
    
    //Did all of these come out as expected?  Why/why not?
    
    
    
    
    
    //Type conversion via casting
    
    // fResult = (float)iIntOperand / iShortOperand;
    // printf("(float) int / short assigned to float retains decimal places:  %f\n", fResult);   //Note that printed result has proper value for 1/2 instead of 0
    // fResult = (int)fFloatOperand2;
    // printf("(int) float assigned to float loses decimal places:  %f\n\n\n", fResult);  //Note that data in decimal places is gone
    
    
    //Space for observations about casting
    
    
    
    
    
    //Type definitions
    
    // typedef unsigned char Byte;
    // Byte cByte1, cByte2 = 0;
    
    // cByte1 = 0x28;
    // printf("%c", cByte1);
    // cByte1 += 22;
    // printf("%c", cByte1);    
    // cByte1 += 0x20;
    // printf("%c", cByte1);
    // cByte2 = cByte1;
    // printf("%c", cByte2);
    // cByte1 = 0x29;
    // printf("%c", cByte1);
    // cByte1 += 21;
    // printf("%c\n\n", cByte1);
    
    //Space for observations about type definitions.
    
    
    
    
    
    
    //Congratulations on finishing your theory practice.  Good work!

    return 0;
}