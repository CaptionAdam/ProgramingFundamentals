/******************************************************************************

Program: Lecture 3 Practice
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 3

*******************************************************************************/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{

    
    
    /**********************Boolean Flags in C89*******************/
    
    //C89 does not have boolean as a datatype, and uses integers instead.  
    //One way to control a system based on true/false would be to use a flag variable.
    //Preprocessor directive TRUE is 1 and FALSE is 0.  Useful for setting flag.
    //Reminder: You can find Preprocessor directives before main()
    
    //This is a visual example. It represents a continuous system.
    //Think of a container continually being filled with water, and when it reaches
    //a maximum level, it drains before filling again.
    
    //****Select code from this line to the indicated line below to uncomment.
    
    // //Water level in container is over sensor level
    // int iFlag = TRUE;
    
    // if(iFlag == TRUE) 
    // {
    //     printf("Draining the water\n");
    //     iFlag = FALSE;
    // }
    // else printf("Water below max level\n");
    
    // //filling with water
    // if(iFlag == TRUE) 
    // {
    //     printf("Draining the water\n");
    //     iFlag = FALSE;
    // }
    // else printf("Water below max level\n");
    
    // //filling with water
    // if(iFlag == TRUE) 
    // {
    //     printf("Draining the water\n");
    //     iFlag = FALSE;
    // }
    // else printf("Water below max level\n");
    
    // //Water level in container is over sensor level
    // iFlag = TRUE;
    // if(iFlag == TRUE) 
    // {
    //     printf("Draining the water\n");
    //     iFlag = FALSE;
    // }
    // else printf("Water below max level\n");
    
    // //water filling
    // if(iFlag == TRUE) 
    // {
    //     printf("Draining the water\n");
    //     iFlag = FALSE;
    // }
    // else printf("Water below max level\n");
    
    //****Select code above this line for uncommenting.
    
    //This is a typical use for Flag variables, as an on-off indicator
    
    
    
    //******************Switch Statement*******************************

    //This is an example of a Switch statement.  
    //Select the code, uncomment, and run it to see how it works.
    //Adjust the value of iIn and see what happens to the output.

    int iIn = 3;
    
    switch(iIn)
    {
        case 0: printf("0 is the best number"); break;
        case 1: printf("1 is the best number"); break;
        case 2: printf("2 is the best number"); break;       
        case 3: printf("3 is the best number"); break;
        case 4: printf("4 is the best number"); break;        
        case 5: printf("5 is the best number"); break;
        case 6: printf("6 is the best number"); break;    
        default: printf("You chose a bad number"); break;
    }
    
    
    
    
    
    
    //Congratulations on finishing your theory practice.  Good work! 

    return 0;
}
