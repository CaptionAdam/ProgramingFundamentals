/******************************************************************************

Lab 1 Program 1
Coder: Adam Kuefler
Date: 06/09/2024(dd/mm/yyyy)
Program (All Parts): Take input in exact dollars and output change in amount of bills

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable Declaration
    int iDollars = 0;
    int iRemainder = 0;
    int i20Bills = 20;
    int i10Bills = 10;
    int i5Bills = 5;
    int i1Bills = 1;

    printf("Enter Dollar Amount = $");  //Prompt For Input
    scanf("%i", &iDollars); //Take User Input
    //Count 20s & Store Remainder
    i20Bills = iDollars/20;
    iRemainder = iDollars%20;
    //printf("Remainder: %i", iRemainder); //Print Remainder to Check
    //Count10s & Store Remainder
    i10Bills = iRemainder/10;
    iRemainder = iRemainder%10;
    //printf("Remainder: %i", iRemainder); //Print Remainder to Check
    //Count5s & Store Remainder
    i5Bills = iRemainder/5;
    iRemainder = iRemainder%5;
    //printf("Remainder: %i", iRemainder); //Print Remainder to Check
    //Set 1s to remainder
    i1Bills = iRemainder;
    printf("\n\n  $20 Bills: %i\n\n  $10 Bills: %i\n\n  $5 Bills: %i\n\n  1$ Bills: %i\n\n", i20Bills, i10Bills, i5Bills, i1Bills); //Print Bill Amounts
    
    return 0;
}