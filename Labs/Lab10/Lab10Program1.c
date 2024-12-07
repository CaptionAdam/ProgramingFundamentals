/******************************************************************************

Program: Lab 10 Program 1
Coder: Adam Kuefler
Date: 06/12/2024(dd/mm/yyyy)
Purpose: Print 2 Hex Digets As Binary And Check If Bit Is Set

*******************************************************************************/

#include <stdio.h>

void PrintBinary(char cByteChar);                               //Binary Print Function{Thx Cory <3}

int main() {

    //  Declare Variables
    unsigned int iHexValue;                                     //Unsigned Interger To Store Hex Didgets
    int iCheckBit = 0;                                          //Bit To Be Checked

    printf("\nEnter A Pair Of Hex Digits: 0x");                 //Prompt For Hex Digits
    scanf("%x", &iHexValue);                                    //Store Hex Digets
   
    PrintBinary(iHexValue);                                     //Print Hex As Binary{Thx Cory <3}

    //  Evaluation Loop
    while(1) {

        printf("\nEnter a bit to examine (0-7):  ");            //Prompt For Bit To Examine
        scanf("%d", &iCheckBit);                                //Store Bit To Be Checked

        if(iCheckBit < 0 || iCheckBit >7) {                     //Check That Selected Bit Is Between 0-7
            printf("{ERROR} Read The Instructions ;P\n");       //Error If User Dosnt Input Valid Selection  
            continue;                                           //Restart Evaluation Loop
        }

        if(iHexValue & (1 << iCheckBit)){                       //If Bit is Set
           printf("\nBit %d is Set.\n", iCheckBit);             //Print That Bit Is Set
           
       }
        else{
            printf("\nBit %d is Cleared.\n", iCheckBit);        //Print If Bit Is Cleared
        }
    }
    
    return 0;
}



/********************************************************************************
 * Function: PrintBinary(char cByteChar)
 * Coder: Cory Thorp
 * Date: No thanks, I'm full
 * *****************************************************************************/
 void PrintBinary(char cByteChar)
{
    char cSteps = 0;
    
    //Output in binary format
    printf(" 0b");
    for(int iIndex = 7; iIndex >= 0; iIndex--)      //Start at MSB
    {
        cSteps = cByteChar >> iIndex;               //shift bytes to right by current value in index
        if(cSteps & 0x01)printf("1");               //if cstep bitwise and with 0b00000001 is true, print 1
        else printf("0");                           //otherwise print a 0
    }
    printf("\n");
    
}