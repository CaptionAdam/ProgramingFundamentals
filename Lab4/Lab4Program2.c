/******************************************************************************

Program: Lab 4 Program 2
Coder: Adam Kuefler
Date: 27/09/2024(dd/mm/yyyy)
Purpose: Find Largest Input Number

*******************************************************************************/

#include <stdio.h>

//Variable Declare
int iIndex = 1;
float fNumber = 0;
float fInput = 0;

int main() {

    
    for(;;) //Loop Till Input = 0
    {   
        //UserInput
        printf("Enter a number: ");
        scanf("%f", &fInput);
        
        
        if(fInput == 0) //End When Input = 0
        {
            break;
        }
        
        else if(fInput > fNumber) //Overwrite Stored Largest Number
        {
            fNumber = fInput;
        }
    }

    printf("Largest Number: %.2f\n", fNumber);

    return 0; 
}