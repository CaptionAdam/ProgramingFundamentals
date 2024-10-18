/******************************************************************************

Program: Lecture 3 Practice Part 3
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 3

*******************************************************************************/
#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{

    /**********************Cascaded if statements****************/

    //Here is an example of cascaded if-else statements.
    //Change the value of iCount to see how it behaves.

    int iCount = 75;
    
    // if(iCount <= 5) printf("I like cake");
    // else if(iCount <= 10) printf("I like pie");
    // else if(iCount <= 20) printf("Cake is better");
    // else if(iCount <= 50) printf("The hell it is!!");
    // else printf("And now we Kung Fu fight!!");
    
    
    
    /*********************Run this code!***********************/
    int iNum1 = 1, iNum2 = 0;
    int iResult1 = 0;
    
    // if(iNum1 != 0)
    //     if(iNum2 != 0) printf("I'm in!");
    // else printf("I guess iNum1 did equal 0.");

    // Fixed
    if(iNum1 != 0 || iNum2 != 0) printf("I'm in!");
    else printf("I guess iNum1 did equal 0.");
    
    //Did you expect this answer?  Fix the code so that the else is associated with the first "if".
    
    
    
    
    
    
    /*******************Conditional Expressions****************/
    
    //This is an example of conditional expressions.  You do not need to use these and will not be assessed on them.
    //Syntax: expression 1 ? expression2 : expression 3
    iNum1 = 1, iNum2 = 3;
    
    //Uncomment the following and run
 
    
    // (iNum1 > iNum2) ? printf("iNum1 is greater than iNum2\n"): printf("iNum2 is greater than iNum1\n");
    
    
    // //The above line runs the same as the following
    
    
    // if(iNum1 > iNum2) printf("iNum1 is greater than iNum2\n");
    // else printf("iNum2 is greater than iNum1\n");
    
    
    //You may use either, but for beginning programmers I tend to recommend the if-else approach.  
    //It is easier to understand precisely what is happening on the line of code.
    
    
    
    
    
       //Congratulations on finishing part 3, onwards and upwards to part 4!

    return 0;
}