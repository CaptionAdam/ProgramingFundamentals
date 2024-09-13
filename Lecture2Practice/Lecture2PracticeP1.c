/******************************************************************************

Program: Lecture 2 Practice Part 1
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 2

*******************************************************************************/
#include <stdio.h>
#define INTEGER 72
#define FLOAT 867.5309      //These are preprocessor directives!

int main()
{
    //local variables
    int iInt = INTEGER;         //INTEGER replaced by preprocessor directive
    float fFloat = FLOAT;       //FLOAT replaced by preprocessor directive

    
    //Conversion specifications
    
    //Recall the syntax is %~m.pX where
    //"~" is the absence or presence of a "-" symbol, for right or left justification
    //"m" is the total number of spaces for the print
    //".p" is the precision (number of digits)
    //      int - Total number of digits
    //      float - Number of decimal digits
    //"X" is the datatype and number format
    
    //Try adjusting the conversion specifier, and see what happens.
    //Leave the XXXXX lines in place to better illustrate the differences
    printf("XXXXX");
    printf("%x", iInt);
    printf("XXXXX\n");
    
     //Try replacing the %d with %x and %o.  What happens?  Why?
    
    
    
    
    //Now here's an example with a floating point value. Uncomment, and have fun adjusting it.
    //printf("XXXXX");
    //printf("%f", fFloat);
    //printf("XXXXX\n");
    
    //Try replacing the %f with %e and %g.  What happens?  Why?
    
    
    
    
    //Now, we could have simplified the prior 3 line expression set.  Try this!
    //printf("XXXXX%dXXXXX\n", iInt);
    
    //Did it work in the same way as the prior integer example?  Why?
    
    
    
    
    //Congratulations on finishing Part 1.  On to part 2!
    
    return 0;
}