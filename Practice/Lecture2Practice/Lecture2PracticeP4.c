/******************************************************************************

Program: Lecture 2 Practice Part 4
Coder: Adam Kuefler
Date: 12/09/2024(dd/mm/yyyy)
Purpose: Assortment of activities appropriate to Lecture 2

*******************************************************************************/
#include <stdio.h>


int main()
{

    
    //Arithmetic operators
    //local variables
    int iTotal = 0;
    float fTotal = 0;
    
    
    //What do you think the output will be for the following math problem?  Run it.  Did it match your expectations?
    //iTotal = +16 - -5 * 10;
    iTotal = (+16 - -5) * 10; //Multiplication Last
    //printf("%d\n", iTotal);
    
    //Now, what can you do to the equation so that the multiplication by 10 occurs last?
    
    
    
    
    
    
    
    //Here is an example of integer by integer division.  (Comment out the above code, then uncomment the following statements )
    iTotal = 3 / 2;
    //printf("%d\n", iTotal);
    fTotal = 3 / 2;         //Variables are both int
    //printf("%f\n", fTotal);
    fTotal = 3 / 2.0;       //Variables are int and float
    //printf("%f\n", fTotal);
    
    //What do you think will happen if you replace iTotal with fTotal (float for storage variable)?  Try it.
    //Did it match your expectation?  Why/why not?
    
    

    





    //Here's a quick one.  We'll enter three variables, and write a statement with multiple assignment operators.
    //Uncomment the following lines of code, and try to predict the output before running.  Were you correct?
    int iAdd1 = 3;
    int iAdd2 = 8;
    int iAdd3 = 2;

    iAdd1 += iAdd2 -= iAdd3 + 7;
    
    printf("%d\t%d\t%d\n", iAdd1, iAdd2, iAdd3);





    
    //Congratulations on finishing part 4.  Good work! Up next, Part 5!
    
    return 0;
}




