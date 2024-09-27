/******************************************************************************

Program: Lab 4 Program 1
Coder: Adam Kuefler
Date: 27/09/2024(dd/mm/yyyy)
Purpose: Pick A Number Game

*******************************************************************************/

#include <stdio.h>

//Variable Declare
int iNumber = 0;
int iWin = 7; //Winning Number

int main() {

    //WhileLoop
    while(iNumber != iWin)
    {
        //UserInput
        printf("Pick A Number(1-20): ");
        scanf("%d", &iNumber);
        //CheckIfWin
        if(iNumber != iWin)
        {
        //Wrong Number
        printf("Its Not %d Try Again\n\n", iNumber);
        }
    }
    //Print Win
    printf("\n,------------------------------------------,\n| You Guessed Correctly! The Number Was %2.d |\n'------------------------------------------'\n\n", iWin);

    return 0; 
}