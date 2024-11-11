/******************************************************************************

Program: Lab 8 Program 2
Coder: Adam Kuefler
Date: 01/11/2024(dd/mm/yyyy)
Purpose: Improved(AGAIN) Tax Calculator 

*******************************************************************************/

#include <stdio.h>

//Function Declaration
float BracketPicker(float fIncome);
float TaxCalculation(float fIncome, int iBracket);

int main() {
    
    //Main Loop
    while(1){      //Loop Forever

        //Variable Declaration
        float fTaxable; //Input Taxable Income
        float fOwing;   //Amount of Taxes Owing
        int iTaxBracket;    //Tax Bracket

        //Intake Taxable Income
        printf("Enter Income: ");       //Prompt For Input
        scanf("%f", &fTaxable);      //Collect & Store Taxable Income

        iTaxBracket = BracketPicker(fTaxable);      //Send Taxable Income To Function And Set iTaxBracket To Returned Value

        fOwing = TaxCalculation(fTaxable, iTaxBracket);         //Send Taxable Income, And Tax Bracket To Function And Set Owing To Returned Value
        
        //Output Taxes owing
        //printf("TaxBracket = %d", iTaxBracket);
        printf("You Owe: %.2f\n\n", fOwing);        //Print Owing To Terminal
    }
    
    return 0;
}

/**********************************************************************
 * Function: float BracketPicker(float fIncome)
 * Coder: Adam Kuefler
 * Date: 01/11/2024
 * Purpose: Output Tax Bracket based on input income
 * ********************************************************************/
float BracketPicker(float fIncome)      //function header 
{                // ^function parameters
    //Variable Declaration
    int iBracket = 0;       //Tax Bracket

    //Determine Tax Bracket Based on Input
    if(fIncome > 221708) {iBracket = 5;}            //If Income More Then $221,708, Tax Bracket = 5

    else if(fIncome > 155625) {iBracket = 4;}        //If Income More Then $155,625, Tax Bracket = 4

    else if(fIncome > 100392) {iBracket = 3;}        //If Income More Then $100,392, Tax Bracket = 3

    else if(fIncome > 50197) {iBracket = 2;}        //If Income More Then $50 197, Tax Bracket = 2

    else {iBracket = 1;}                            //If Income Less Then $50 197, Tax Bracket = 1

    return iBracket;
}

/**********************************************************************
 * Function: TaxCalculation(float fIncome, int iBracket) 
 * Coder: Adam Kuefler
 * Date: 01/11/2024
 * Purpose: Calculate Owing From Taxable Income, And Tax Bracket
 * ********************************************************************/
float TaxCalculation(float fIncome, int iBracket)      //function header 
{                // ^function parameters
    //Variable Declaration
    float fOwing = 0;       //Amount Woing

    //Calculate Taxes based on income bracket
    switch (iBracket) {

    //Tax Bracket 1(0 - 50197) 
    case 1: 
        fOwing = fIncome * 0.15;   //Multiply Income by 15%
        break;

    //Tax Bracket 2(50197 - 100392)
    case 2:
        fIncome = fIncome - 50197;    //Subtract Maximum income From Bracket 1
        fOwing = fIncome * 0.205;  //Multiply Applicable Income by 20.5%
        fOwing = fOwing + 7529.55;  //Add The Maximum Tax From Bracket 1
        break;
    //Tax Bracket 3(100392 - 155625)
    case 3:
        fIncome = fIncome - 100392;   //Subtract Maximum Combined Incomes From Brackets 1-2
        fOwing = fIncome * 0.26;   //Multiply Applicable Income by 26%
        fOwing = fOwing + 17819.53;    //Add The Maximum Tax From Brackets 1-2
        break;

    //Tax Bracket 4(155625 - 221708)
    case 4:
        fIncome = fIncome - 155625;   //Subtract Maximum Combined Incomes From Brackets 1-3
        fOwing = fIncome * 0.29;   //Multiply Applicable Income by 29%
        fOwing = fOwing + 32180.11;    //Add The Maximum Tax From Brackets 1-3
        break;

    //Tax Bracket 5(221708 - Infinity) 
    case 5:
        fIncome = fIncome - 221708; //Subtract Maximum Combined Incomes From Brackets 1-4
        fOwing = fIncome * 0.33;   //Multiply Applicable Income by 33%
        fOwing = fOwing + 51344.18;     //Add The Maximum Tax From Brackets 1-4
        break;
    }

    return fOwing;
}