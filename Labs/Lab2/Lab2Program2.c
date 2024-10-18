/******************************************************************************

Program: Lab 2 Program 2
Coder: Adam Kuefler
Date: 12/09/2024(dd/mm/yyyy)
Purpose: Convert Decimal to Octal with clear steps

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable Declaration
    int iDecimal = 0;
    int iProduct = 0;
    int iNext = 0;
    int iOutput = 0;
    int iOctal[5];

    //Take User Input
    printf("Please Enter Decimal Number(0-32767): ");
    scanf("%i", &iDecimal);

    //Calculation Block
    //Find ^0 Position
    iOctal[0] = iDecimal % 8;
    iProduct = iDecimal / 8;
    printf("\n%6d/8 = %-4d With a Remainder of %d.\t         ===> %d\n", iDecimal, iProduct, iOctal[0], iOctal[0]);
    //Find ^1 Position
    iOctal[1] = iProduct % 8;
    iNext = iProduct / 8;
    printf("%6d/8 = %-4d With a Remainder of %d.\t        ===> %d%d\n", iProduct, iNext, iOctal[1], iOctal[1], iOctal[0]);
    //Find ^2 Position
    iOctal[2] = iNext % 8;
    iProduct = iNext / 8;
    printf("%6d/8 = %-4d With a Remainder of %d.\t       ===> %d%d%d\n", iNext, iProduct, iOctal[2], iOctal[2], iOctal[1], iOctal[0]);
    //Find ^3 Position
    iOctal[3] = iProduct % 8;
    iNext = iProduct / 8;
    printf("%6d/8 = %-4d With a Remainder of %d.\t      ===> %d%d%d%d\n", iProduct, iNext, iOctal[3], iOctal[3], iOctal[2], iOctal[1], iOctal[0]);
    //Find ^4 Position
    iOctal[4] = iNext % 8;
    iProduct = iNext / 8;
    printf("%6d/8 = %-4d With a Remainder of %d.\t     ===> %d%d%d%d%d\n\n", iNext, iProduct, iOctal[4], iOctal[4], iOctal[3], iOctal[2], iOctal[1], iOctal[0]);

    //Collect all Octal Digets into Single Interger
    iOutput = iOctal[0] + (iOctal[1] * 10) + (iOctal[2] * 100) + (iOctal[3] * 1000) + (iOctal[4] * 10000) + (iOctal[5] * 100000);
    
    //Final Output
    //printf("Octal = %d%d%d%d%d\n", iOctal[4], iOctal[3], iOctal[2], iOctal[1], iOctal[0]); //Replaced For Cleaner Output
    printf("%d Decimal = %d Octal\n\n", iDecimal, iOutput);

    return 0;
}