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
    
    
    //*******************Integer Data Types*********************************
    
    //Integer types: short, int, and long. 
    //These are tests that can be used to verify the possible values of a variable.
    //To determine values, go to Windows Calculator, switch to Scientific mode,
    //then enter 2 [x^y] (expected bits)
    //2 [x^y] 8 gives 256.  There are 256 possible values in 8 bits
    //Give a try to others, then see if you agree with the methodology below.
    
    iSInteger += 32767;     //16 bit signed max
    printf("\n\n\nSigned short integer set to 16 bit signed max value %hd\n", iSInteger);
    iSInteger += 1;
    printf("Add one to signed short integer, get %hd\n", iSInteger);
    
    printf("\n");   //for readability
    
    // iUSInteger += 65535;    //16 bit unsigned max
    // printf("Unsigned short integer set to 16 bit unsigned max value %u\n", iUSInteger);
    // iUSInteger += 1;
    // printf("Add one to unsigned short integer, get %u\n", iUSInteger);
    
    // printf("\n");   //for readability
    
    // iInteger += 2147483647;     //32 bit signed max
    // printf("Signed integer set to 32 bit signed max value %d\n", iInteger);
    // iInteger += 1;
    // printf("Add one to signed integer, get %d\n", iInteger);
    
    // printf("\n");   //for readability
    
    
    // //Look into this.  Why unsigned int signed???
    // iUInteger += 4294967295;    //32 bit unsigned max
    // printf("Unsigned integer set to 32 bit unsigned max value %u\n", iUInteger);
    // iUInteger += 1;
    // printf("Add one to unsigned integer, get %u\n", iUInteger);
    
    
    // printf("\n");   //for readability
    
    // iLInteger += 9223372036854775807;    //64 bit signed max
    // printf("Signed long integer set to 32 bit signed max value %ld\n", iLInteger);
    // iLInteger += 1;
    // printf("Add one to signed long integer, get %ld\n", iLInteger);    
    
    
    // printf("\n");   //for readability
    
    // //There WILL be a warning about this value from OnlineGDB compiler.  That's ok.
    // iULInteger += 18446744073709551615;   //64 bit unsigned max
    // printf("Unsigned long integer set to 64 bit unsigned max value %lu\n", iULInteger);
    // iULInteger += 1;
    // printf("Add one to unsigned long integer, get %lu\n", iULInteger);      
    
    
    
    
    //Now it's your turn.  Make a few integer variables, signed/unsigned, set them to 0, 
    //then subtract 1 from them.  What do you see?  
    
    
    
    
    
    
    
    
    
    
    

    
    
    //Congratulations on finishing Part 1 of your theory practice.  On to part 2

    return 0;
}