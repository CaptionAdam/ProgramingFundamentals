/******************************************************************************

Program: Improved Loan Calculator
Coder: Adam Kuefler
Date: 27/09/2024(dd/mm/yyyy)
Purpose: Take loan metrics and show results of input # of pay cycles

*******************************************************************************/

#include <stdio.h>

    //Variable Declaration
    float fLoan = 0;
    float fPayment = 0;
    float fIntrest = 0;
    int iTerms = 0; 
    int iCounter = 0;

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

    while(iTerms != 0)
    {
        iCounter++;
        fLoan = fLoan+((fIntrest/1200)*fLoan)-fPayment; //Calculate Amount Owing For Term #
        printf("\nBalance Remaining after Payment #%d:    $%.2f\n", iCounter, fLoan); //Print Balance Remaining and Term #
        iTerms--;

    }
    //Notify Start of New Loan
    printf("\n,------------------,\n|-----New Loan-----|\n'------------------'\n\n");
}
    
    return 0; 
}