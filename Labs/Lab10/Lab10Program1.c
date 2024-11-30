/******************************************************************************

Program: 
Coder: Adam Kuefler
Date: 29/11/2024(dd/mm/yyyy)
Purpose: 

*******************************************************************************/

#include <stdio.h>

void PrintBinary(char cByteChar);

int main() {

    char cTest = 'B';

    PrintBinary(cTest);

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