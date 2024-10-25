/******************************************************************************

Program: Lab 7 Program 1
Coder: Adam Kuefler
Date: 25/10/2024(dd/mm/yyyy)
Purpose: Calculate the Sums of 5 Input Rows & 5 Input Colums

*******************************************************************************/

#include <stdio.h>

int main(){

    //Variable Declaration
    int iInput[5][5] = {0};     //5x5 Matrix
    int iIndex = 0;     //Loop Index
    int iRowTotals[5] = {0};    //Row Totals
    int iColumTotals[5] = {0};      //Colum Totals

    while(1) //!!!Loop Forever!!!
    {  
        //Fill Input Matrix
        for(iIndex; iIndex <= 4; iIndex++) // Loop 5 times
        {
            iIndex++;   //Increment iIndex
            printf("Input Row %d: ", iIndex);   //Prompt for Row Input
            iIndex--;   //Decrement iIndex
            scanf("%d %d %d %d %d", &iInput[iIndex][0], &iInput[iIndex][1], &iInput[iIndex][2], &iInput[iIndex][3], &iInput[iIndex][4]); //Record Input Row
        }

        iIndex = 0;     //Reset iIndex to 0

        //Calculate Row And Colum Sums
        for(iIndex; iIndex <= 4; iIndex++)  //Loop 5 Times
        {
            iRowTotals[iIndex] = iInput[iIndex][0] + iInput[iIndex][1] + iInput[iIndex][2] + iInput[iIndex][3] + iInput[iIndex][4];     //Calculate Row(iIndex) Sums
            iColumTotals[iIndex] = iInput[0][iIndex] + iInput[1][iIndex] + iInput[2][iIndex] + iInput[3][iIndex] + iInput[4][iIndex];   //Calculate Colum(iIndex) Sums
        }
        //Print Sums
        printf("\nRow Totals: %d %d %d %d %d\n", iRowTotals[0], iRowTotals[1], iRowTotals[2], iRowTotals[3], iRowTotals[4]);    //Print Row Totals
        printf("Colum Totals: %d %d %d %d %d\n\n", iColumTotals[0], iColumTotals[1], iColumTotals[2], iColumTotals[3], iColumTotals[4]);    //Print Colum Totals

        iIndex = 0; //Reset iIndex to 0
    }
    
    return 0;
}