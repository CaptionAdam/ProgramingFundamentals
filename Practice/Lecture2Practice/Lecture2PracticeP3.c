/******************************************************************************

Program: Lecture 2 Practice Part 3
Coder: Adam Kuefler
Date: 12/09/2024(dd/mm/yyyy)
Purpose: Assortment of activities appropriate to Lecture 2

*******************************************************************************/
#include <stdio.h>


int main()
{

    
    //Scanf particularities
    
    //local variables
    int iHours = 0;
    int iMinutes = 0;
    int iSeconds = 0;
    int iNumerator = 0;
    int iDenominator = 0;

    //This example prompts a user for the time, and takes values for hours, minutes, seconds separated by colons :
    //printf("Please enter a time in this format   HH:MM:SS  followed by the enter key  ");
    //scanf("%d:%d:%d", &iHours, &iMinutes, &iSeconds);
    //printf("\nYou entered %d:%d:%d\n", iHours, iMinutes, iSeconds);
    
    //What happens if you use spaces to separate your inputs on the terminal instead of the colons?  Why?
    //What happens if you use spaces to separate the %d conversion specifiers in the scanf()? Why?
    
    
    
    
    
    
    
    //This next one is tricky.  You know that you can't enter spaces to separate inputs in
    //terminal with the above code.  What if you had spaces in the scanf before the colons?
    //How does it behave?  Why?  Uncomment the below code, and recomment the above printf/scanf statements, then run it.

    printf("Please enter a time in this format   HH:MM:SS  followed by the enter key  ");
    scanf("%d :%d :%d", &iHours, &iMinutes, &iSeconds);
    printf("\nYou entered %d:%d:%d\n", iHours, iMinutes, iSeconds);

    //Now, it's your turn.  Comment out the printf and scanf statements above.
    //Now, create two local variables named iNumerator and iDenominator
    
    //Prompt for input of Nominator and Denominator in N/D format, then take that input.  
    //You may want to add a printf to check Don't forget your "&" with scanf!
    
    //printf("Please Enter Your Nominator and Denominator Then Hit Enter (Please Use N/D Format)");
    //scanf("%d/%d", &iNumerator, &iDenominator);
    //printf("\nYou Entered %d/%d\n", iNumerator, iDenominator);
    

    //Congratulations on finishing your 3rd part of the theory practice.  On to part 4!
    
    return 0;
}




