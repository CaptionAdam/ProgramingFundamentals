/******************************************************************************

Program: Lab 4 Program 1
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Purpose: Pick A Number Game

*******************************************************************************/

#include <stdio.h>

//Variable Declare
int iNumber = 0; //Input Number
int iWin = 7; //Winning Number

int main() {

    while(iNumber != iWin)  //Loop Till Guess = Stored Number
    {
        
        printf("Pick A Number(1-20): "); //User Input
        scanf("%d", &iNumber);

        if(iNumber != iWin) //If input number != winning number
        {
        //Wrong Number
        printf("Its Not %d Try Again\n\n", iNumber);
        }
    }

    //Print Win
    printf(",------------------------------------------,\n| You Guessed Correctly! The Number Was %2.d |\n'------------------------------------------'\n\n", iWin);

    return 0; 
}