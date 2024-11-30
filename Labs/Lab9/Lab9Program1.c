/******************************************************************************

Program: Lab 9 Program 1
Coder: Adam Kuefler
Date: 29/11/2024(dd/mm/yyyy)
Purpose: Improvment Of The Early Change Program With Pointers

*******************************************************************************/

#include <stdio.h>

void change_amount(int iDollars, int *iTwenties, int *iTens, int *iFives, int *iOnes);

int main() {
    while(1) {
        int idollars, iTwenties, iTens, iFives, iOnes;

        printf("Enter Dollar Amount = $");  //Prompt For Input
        scanf("%i", &idollars); //Take User Input

        change_amount(idollars, &iTwenties, &iTens, &iFives, &iOnes);

        printf("\n\n  $20 Bills: %i\n\n  $10 Bills: %i\n\n  $5 Bills: %i\n\n  1$ Bills: %i\n\n", iTwenties, iTens, iFives, iOnes); //Print Bill Amounts
    }

    return 0;
}


/**********************************************************************
 * Function: void change_amount(iDollars, *iTwenties, *iTens, *iFives, *iOnes)
 * Coder: Adam Kuefler
 * Date: 22/11/2024(dd/mm/yyyy)
 * Purpose: 
 * ********************************************************************/
void change_amount(int iDollars, int *iTwenties, int *iTens, int *iFives, int *iOnes) {

    *iTwenties = iDollars / 20;
    iDollars %= 20;
    
    *iTens = iDollars / 10;
    iDollars %= 10;

    *iFives = iDollars / 5;
    iDollars %= 5;

    *iOnes = iDollars;

}