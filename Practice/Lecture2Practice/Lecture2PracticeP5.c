/******************************************************************************

Program: Lecture 2 Practice Part 5
Coder: Adam Kuefler
Date: 12/09/2024(dd/mm/yyyy)
Purpose: Assortment of activities appropriate to Lecture 2

*******************************************************************************/
#include <stdio.h>


int main()
{


    //Increment/Decrement operators
    int iIncrement = 0;
    
    //This example serves to show the equivalency between the three methods of incrementing and decrementing by 1.
    //iIncrement++;
    //iIncrement += 1;
    //iIncrement = iIncrement + 1;
    //printf("%d\n", iIncrement);
    
    //iIncrement--;
    ///iIncrement -= 1;
    //iIncrement = iIncrement - 1;
    //printf("%d\n", iIncrement);

    printf("iIncrement = %d\n", iIncrement);
    iIncrement++;
    printf("iIncrement++ = %d\n", iIncrement);
    iIncrement += 1;
    printf("iIncrement +=1 = %d\n", iIncrement);
    iIncrement = iIncrement + 1;
    printf("iIncrement = iIncrement + 1 = %d\n", iIncrement);
    
    iIncrement--;
    printf("iIncrement-- = %d\n", iIncrement);
    iIncrement -= 1;
    printf("iIncrement -=1 = %d\n", iIncrement);
    iIncrement = iIncrement - 1;
    printf("iIncrement = iIncrement - 1 = %d\n", iIncrement);
    
    //Note: For any increment or decrement by more than 1, you will not be able to use ++ or --
    
    
    
    
    
    
    //Congratulations on finishing your theory practice.  Good work!
    
    return 0;
}

