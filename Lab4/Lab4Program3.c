/******************************************************************************

Program: Improved Loan Calculator
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Purpose: Take loan metrics and show results of input # of pay cycles

*******************************************************************************/

#include <stdio.h>

    //Variable Declaration
    float fLoan = 0;    //Loan Amount
    float fPayment = 0;    //Payment Amount
    float fIntrest = 0;    //Intrest In %
    int iTerms = 0;    //Total Terms & Remaining Terms
    int iCounter = 0;   //Incremental Term Counter

int main() {

for(;;) //Loop to Repeat Calcuation For Infinite New Loans
{
    //Collect Loan Information
    printf("Enter Loan Amount:     $");
    scanf("%f", &fLoan);
    printf("Enter Intrest Rate:    %%");  
    scanf("%f", &fIntrest);
    printf("Enter Payment Amount:  $");
    scanf("%f", &fPayment);
    printf("Enter # of Payment Terms:  ");
    scanf("%d", &iTerms);

    for(iTerms; iTerms != 0; iTerms--) //Loop Till 0 Remaining Terms
    {
        iCounter++; //Increment Term Counter
        fLoan = fLoan+((fIntrest/1200)*fLoan)-fPayment; //Calculate Amount Owing For Term #
        printf("\nBalance Remaining after Payment #%d:    $%.2f\n", iCounter, fLoan); //Print Balance Remaining and Term #

    }

    //Notify Start of New Loan Loop
    printf("\n,--------------------,\n|      New Loan      |\n'--------------------'\n\n");
}
    
    return 0; 
}