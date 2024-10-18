/******************************************************************************

Program: Lab 3 Program 1
Coder: Adam Kuefler
Date: 27/09/2024(dd/mm/yyyy)
Purpose: Calculate Income Tax

*******************************************************************************/

#include <stdio.h>

//Declare Variables
float fTaxable;
float fOwing;
int iTaxBracket;

int main() 
{
    //Intake Taxable Income
    printf("Enter Income: ");
    scanf("%f", &fTaxable);

    //Determine Tax Bracket Based on Input
    if(fTaxable > 221708)
    {
        iTaxBracket = 5;
    }

    else if(fTaxable > 155625)
    {
        iTaxBracket = 4;
    }

    else if(fTaxable > 100392)
    {
        iTaxBracket = 3;
    }

    else if(fTaxable > 50197)
    {
        iTaxBracket = 2;
    }

    else
    {
        iTaxBracket = 1;
    }

    //Calculate Taxes based on income bracket
    switch (iTaxBracket) {

    //Tax Bracket 1(0 - 50197) 
    case 1: 
        fOwing = fTaxable * 0.15;   //Multiply Income by 15%
        break;

    //Tax Bracket 2(50197 - 100392)
    case 2:
        fTaxable = fTaxable - 50197;    //Subtract Maximum income From Bracket 1
        fOwing = fTaxable * 0.205;  //Multiply Applicable Income by 20.5%
        fOwing = fOwing + 7529.55;  //Add The Maximum Tax From Bracket 1
        break;
    //Tax Bracket 3(100392 - 155625)
    case 3:
        fTaxable = fTaxable - 100392;   //Subtract Maximum Combined Incomes From Brackets 1-2
        fOwing = fTaxable * 0.26;   //Multiply Applicable Income by 26%
        fOwing = fOwing + 17819.53;    //Add The Maximum Tax From Brackets 1-2
        break;

    //Tax Bracket 4(155625 - 221708)
    case 4:
        fTaxable = fTaxable - 155625;   //Subtract Maximum Combined Incomes From Brackets 1-3
        fOwing = fTaxable * 0.29;   //Multiply Applicable Income by 29%
        fOwing = fOwing + 32180.11;    //Add The Maximum Tax From Brackets 1-3
        break;

    //Tax Bracket 5(221708 - Infinity) 
    case 5:
        fTaxable = fTaxable - 221708; //Subtract Maximum Combined Incomes From Brackets 1-4
        fOwing = fTaxable * 0.33;   //Multiply Applicable Income by 33%
        fOwing = fOwing + 51344.18;     //Add The Maximum Tax From Brackets 1-4
        break;
    }   

    //Output Taxes owing
    printf("You Owe: %.2f\n", fOwing);

    return 0; 
}