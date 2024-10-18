/******************************************************************************

Program: Lab 4 Program 2
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Purpose: Find Largest Input Number(2 Decimal Places)

*******************************************************************************/

#include <stdio.h>

//Variable Declare
float fNumber = 0;  //Stored Largest Number
float fInput = 0;   //User Input

int main() {

    do  //Loop Start
    {   
        //UserInput
        printf("Enter a number: ");
        scanf("%f", &fInput);
        

        //If Input Number is Larger Then Stored Number
        if(fInput > fNumber)
        {
            fNumber = fInput;   //Overwrite Stored Largest Number
        }
    }
    while(fInput != 0);    //End Loop When Input = 0

    printf("Largest Number: %.2f\n", fNumber);  //Print Largest Stored Number

    return 0; 
}