/******************************************************************************

Program: Lab 10 Program 2
Coder: Adam Kuefler
Date: 29/11/2024(dd/mm/yyyy)
Purpose: Print 2 hex as Binary And Check if Bit is Set

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

void PrintBinary(char cByteChar);                         //Binary Print Function Thx Cory <3

int main() {
    
    //Variable Declaration
    unsigned char cHex, cHex2;                  //Hex Variables
    char cChange;                               //What Change Do You Want To Make
    int iCheckBit = 0, iShowBin = 1;

    printf("\nEnter a pair of HEX digits: ");
    scanf("%c%c", &cHex, &cHex2);
    //scanf("%hhx %hhx", &cHex, &cHex2);        //No Thanks Ben
    cHex = ((cHex << 5) | cHex2);
    
    while(1) {

        if(iShowBin == 1) {
            PrintBinary(cHex);
        }

        printf("\nEnter a bit to examine (0-7):  ");
        scanf("%d", &iCheckBit);

        if(iCheckBit < 0 || iCheckBit >7) {
            printf("Error\n");
            continue;
        }

        

        printf("Do you wish to set(s) or clear(c) the bit?: "); scanf(" %c", &cChange);
        cChange = tolower(cChange);                         // makes input lower case
        
        // Bit changing
        if (cChange == 's'){                                // Set Selected Bit
            cHex |= (1 << iCheckBit);                       
        }
        else if (cChange == 'c'){                           // Clear Selected Bit
            cHex &= ~(1 << iCheckBit);                      
        }
        else if (cChange == 'b'){                           // Toggle Binary Output
            if(iShowBin == 1) iShowBin = 0;
            else iShowBin = 1;
        }
        else printf("\nerror !Thats not an option!");
        
        if (cHex <= 'F') printf("0%x", cHex);// checks if hex value has less than one digit and prints 0 infront
        else printf("%x", cHex); // prints hex value if it has 2 digits

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