/******************************************************************************

Program: Lab 3 Program 2
Coder: Adam Kuefler
Date: 26/09/2024(dd/mm/yyyy)
Purpose: Determine What Date Occures First(LeastFunctionalLines)

*******************************************************************************/

#include <stdio.h>

//VariableDeclaration
int iDate[2][4];

int main() {
    //UserInput
    printf("Enter First & Second Dates (DD/MM/YYYY DD/MM/YYYY): ");
    scanf("%d/%d/%d %d/%d/%d", &iDate[0][0], &iDate[0][1], &iDate[0][2], &iDate[1][0], &iDate[1][1], &iDate[1][2]);

    //FormatDates
    iDate[0][3] = iDate[0][0] + (iDate[0][1] * 100) + (iDate[0][2] * 10000); 
    iDate[1][3] = iDate[1][0] + (iDate[1][1] * 100) + (iDate[1][2] * 10000);

    //Date2Happens1st
    if(iDate[0][3] > iDate[1][3]) 
    {
        printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate[1][0], iDate[1][1], iDate[1][2], iDate[0][0], iDate[0][1], iDate[0][2]);
    }

    //Date1Happens1st
    else
    {
        printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate[0][0], iDate[0][1], iDate[0][2], iDate[1][0], iDate[1][1], iDate[1][2]);
    }   

    return 0; }
