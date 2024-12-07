/******************************************************************************

Program: Lab 10 Program 2
Coder: Adam Kuefler
Date: 06/12/2024(dd/mm/yyyy)
Purpose: Take 2 Input Hex Digits And Allow Bits To Be Edited And Print New Values

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

void PrintBinary(char cByteChar);           //Binary Print Function{Thx Cory <3}

int main() {
    
    //  Variable Declaration
    unsigned char cHex;                     //Hex Variable
    //unsigned char cHex2;                  //Old No Longer Used Hex Variable
    char cChange;                           //What Change Do You Want To Make
    int iCheckBit = 0;                      //What Bit is to Be Checked
    int iShowBin = 0;                       //0 Binary Output Is Disabled, 1 Binary Output Is Enabled(debug)


    // //   Broken User Input 
    // printf("\nEnter a pair of HEX digits: ");
    // scanf("%c%c", &cHex, &cHex2);                        //That Didn't Work I Wish It Did
    // scanf("%hhx %hhx", &cHex, &cHex2);                   //No Thanks Ben I Found A Better Way
    // cHex = ((cHex << 4) | cHex2);
    
    //  User Input
    printf("\nEnter a pair of Hex digits: 0x");                                 //Prompts For Hex Value Input
    scanf("%2hhx", &cHex);                                                      //Read/Store Two Hex Digits   

    //  Evaluation Loop
    while(1) {                                                                  

        //  Print Binary Call(debug)
        if(iShowBin == 1) PrintBinary(cHex);                                    //If Binary Output is Enabled Print Binary Of Stored Hex Digits{Thx Cory <3}

        //  Bit Editing
        printf("\nEnter a bit to examine (0-7): ");                             //Ask For Bit# To Check
        scanf("%d", &iCheckBit);                                                //Read/Store Bit To Check

        if(iCheckBit < 0 || iCheckBit >7) {                                     //Check That Selected Bit Is Between 0-7
            printf("{ERROR} Read The Instructions ;P\n");                       //Error If User Dosnt Input Valid Selection
            continue;                                                           //Start Loop Over
        }

        //  Check If Bit Is Set Or Not
        if(cHex & (1 << iCheckBit)) printf("\nBit %d is Set.\n", iCheckBit);    //If Bit is Set Print That Bit Is Set
        
        else printf("\nBit %d is Cleared.\n", iCheckBit);                       //Print If Bit Is Cleared

        printf("Do you wish to set(s) or clear(c) the bit?: ");                //Ask If User Wants To Set Or Clear Selected Bit
        scanf(" %c", &cChange);                                                //Collect Selected Action
        cChange = toupper(cChange);                                            //Makes Input Upper Case
        
        // Bit changing
        if (cChange == 'S') cHex |= (1 << iCheckBit);                          //Set Selected Bit

        else if (cChange == 'C') cHex &= ~(1 << iCheckBit);                    //Clear Selected Bit
                                  
        else if (cChange == 'B') iShowBin = !iShowBin;                         //Toggle Binary Output(debug)
            
        else printf("\n{ERROR} Read The Instructions ;P\n");                   //Error If User Dosnt Input Valid Selection
        
        //  New Hex Printing
        if (cHex <= 0xF) printf("New Hex Value is: 0x0%x", cHex);              //checks if hex value has less than one digit and prints 0 infront
        
        else printf("New Hex Value Is: 0x%x", cHex);                           //prints hex value if it has 2 digits

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