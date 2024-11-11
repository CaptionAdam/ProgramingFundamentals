/******************************************************************************

Program: Lab 8 Program 1
Coder: Adam Kuefler
Date: 01/11/2024(dd/mm/yyyy)
Purpose: Solve Polynomial With User Entered X Value

*******************************************************************************/

#include <stdio.h>

//Function Declaration
float PolynomialSolver(int iX);     //Solver For Set Polynomial

//Variable Declaration
int iAnswer;  //Answer Variable
int iInputX;    //User Input X Value

int main() {
    
    //Main Loop
    while(1){       //Loop Forever

        //User Input
        printf("Please Enter X: ");     //Prompt For User Input
        scanf("%d", &iInputX);      //Store User Input

        //Solver
        iAnswer = PolynomialSolver(iInputX);    //Send User Input To Function And Set iAnswer To Returned Value

        //Print Answer
        printf("Answer: %d\n\n", iAnswer);      //Print Answer To Console

        iAnswer = 0;    //Reset iAnswer To 0 Before Next Loop
    }
    
    return 0;
}

/**********************************************************************
 * Function: float PolynomialSolver(int iX)
 * Coder: Adam Kuefler
 * Date: 01/11/2024
 * Purpose: To calculate value of given polynomial
 * ********************************************************************/
 float PolynomialSolver(int iX)     //function header
 {                      // ^function parameters
    //Function Body
    iX = (5 * iX * iX * iX * iX * iX) + (3 * iX * iX * iX * iX) - (2 * iX * iX * iX) - (iX * iX) + (17 * iX) - 8;   //Polynomial Calculation
     return iX;     //Return Variable to Main
 }