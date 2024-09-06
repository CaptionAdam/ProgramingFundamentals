/******************************************************************************

Lab 1 Program 2
Coder: Adam Kuefler
Date: 06/09/2024(dd/mm/yyyy)
Program (All Parts): Take loan metrics and show results of the first 3 pay cycles

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable Declaration
    float fLoan = 0;
    float fPayment = 0;
    float fIntrest = 0;
    float fBalance = 0;
    float fAmount = 0;
    //float fGrowth = 0;


    //Prompt & Collect User Input
    printf("Enter Loan Amount:     $");
    scanf("%f", &fLoan);
    printf("Enter Intrest Rate:    %%");  
    scanf("%f", &fIntrest);
    printf("Enter Payment Amount:  $");
    scanf("%f", &fPayment);

    //First Payment
    fAmount = fLoan; //Set Amount to Loan Amount
    //fGrowth = ((fIntrest/1200)*fAmount)-fPayment; //OldEquation p1
    //fBalance = fAmount + FGrowth; //OldEquation p2
    fBalance = fAmount+((fIntrest/1200)*fAmount)-fPayment; //Optimized Equation
    printf("\nBalance Remaining after first payment:    $%.2f\n", fBalance);

    //Second Payment
    fAmount = fBalance; //Set Amount to Previous Balance
    fBalance = fAmount+((fIntrest/1200)*fAmount)-fPayment;
    printf("Balance Remaining after second payment:   $%.2f\n", fBalance);

    //Third Payment
    fAmount = fBalance; //Set Amount to Previous Balance
    fBalance = fAmount+((fIntrest/1200)*fAmount)-fPayment;
    printf("Balance Remaining after third payment:    $%.2f\n", fBalance);

    return 0;
}  