/******************************************************************************

Program: Lab 3 Program 2
Coder: Adam Kuefler
Date: 27/09/2024(dd/mm/yyyy)
Purpose: Determine What Date Occures First

*******************************************************************************/

#include <stdio.h>


//Variable Declaration
int iDate1[3];
int iDate1OUT;  //Format Date 1 For Evaluation
int iDate2[3];
int iDate2OUT; //Format Date 2 For Evaluation

int main() 
{
    //User Input & Data Collection
    printf("Enter first date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &iDate1[0], &iDate1[1], &iDate1[2]);
    printf("Enter second date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &iDate2[0], &iDate2[1], &iDate2[2]);

    //Reformat Dates For Evaluation
    iDate1OUT = iDate1[0] + (iDate1[1] * 100) + (iDate1[2] * 10000); 
    iDate2OUT = iDate2[0] + (iDate2[1] * 100) + (iDate2[2] * 10000);
    
    //If Date2 Happens First 
    if(iDate1OUT > iDate2OUT)
    {
        printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate2[0], iDate2[1], iDate2[2], iDate1[0], iDate1[1], iDate1[2]);
    }

    //If Dates Are Equal
    else if (iDate1OUT == iDate2OUT)
    {
        printf("\n%d/%d/%d are the same %d/%d/%d\n", iDate1[0], iDate1[1], iDate1[2], iDate2[0], iDate2[1], iDate2[2]);
    }

    //If Date1 Happens First
    else
    {
        printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate1[0], iDate1[1], iDate1[2], iDate2[0], iDate2[1], iDate2[2]);
    }

    return 0; 
}