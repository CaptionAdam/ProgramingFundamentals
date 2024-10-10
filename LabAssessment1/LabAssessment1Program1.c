/******************************************************************************

Program: Lab Assessment 1 Program 1
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Purpose: Solve Polynomial With User Input

*******************************************************************************/
#include <stdio.h>

int iX = 0;
int iY = 0;

int main()
{
    printf("Enter A Value For X: ");
    scanf("%d", &iX);
    
    iY = ((5*iX*iX*iX)+(iX*iX)-iX+8);
    
    printf("The Polynomial Has The Value: %d", iY);
    return 0;
}