/******************************************************************************
Program: Lecture 10 Practice
Coder: 
Date: 
Purpose: A series of exercises appropriate to Lecture 10
*******************************************************************************/
#include <stdio.h>

void PrintBinary(char cByteChar);

int main()
{
    //Local variables
    int iByte = 0;
    unsigned char cStep = 0;
    unsigned char cBinaryOut = 0;
    unsigned char cConverted = 0;
    unsigned char cLeftShift = 0;
    unsigned char cRightShift = 0;
    unsigned char cPackage = 0;
    int iMSN = 0;
    int iLSN = 0;
    unsigned char cMSN = 0;
    unsigned char cLSN = 0;
    
    //Prompt for input
    printf("Please input a decimal value between 0 and 255  ");
    scanf("%d", &iByte);
    
    //Output in Hexadecimal format
    printf("Your input in hex is 0x");      
    if(iByte <=15)printf("0");              //Leading 0 if under 0x10
    printf("%X",iByte);
    
    //Output in binary format
    printf("\nYour input in Binary is 0b");
    for(int iIndex = 7; iIndex >= 0; iIndex--)      //Start at MSB
    {
        cStep = iByte >> iIndex;                    //shift bytes to right by current value in index
        if(cStep & 0x01)printf("1");                //if cstep bitwise and with 0b00000001 is true, print 1
        else printf("0");                           //otherwise print a 0
    }
    
    printf("\n\nWe now set your value into a char variable\n");
    cConverted = iByte;
    printf("Binary value of the char variable is");
    PrintBinary(cConverted);
    
    //Check if a bit is set
    printf("\nWe now check if bits 1, 3, and 5 are set\n");
    if(cConverted & 0b00000001)printf("Bit 1 is set\n");
    else printf("Bit 1 is not set\n");
    if(cConverted & 0b00000100)printf("Bit 3 is set\n");
    else printf("Bit 3 is not set\n");
    if(cConverted & 0b00010000)printf("Bit 5 is set\n");
    else printf("Bit 5 is not set\n");
    
    printf("\nNow we clear all of the bits and set bits 2, 4, 6, 8\n");
    //Clear bits and print
    cConverted &= 0b00000000;
    PrintBinary(cConverted);
    //Set bits 2, 4, 6, 8 and print
    cConverted |= 0b10101010;
    PrintBinary(cConverted);
    
    //Shift bits left and right
    printf("\nNow we shift all of the bits to the left by one position.\n");
    cLeftShift = cConverted << 1;
    PrintBinary(cLeftShift);
    printf("\nNow we shift all of the bits to the right by one position.\n");
    cRightShift = cConverted >> 1;
    PrintBinary(cRightShift);
    
    //Clear and set bits
    printf("\nNow we clear all bits and set bits 3, 4, 5, 6\n");
    cConverted &= 0b00000000;
    PrintBinary(cConverted);
    cConverted |= 0b00111100;
    PrintBinary(cConverted);
    
    //Take complement of bits
    printf("\nNow we take the complement of our char variable\n");
    cConverted = ~cConverted;
    PrintBinary(cConverted);
    
    //Package bits for output
    printf("\nSet a value from 1 to 15 for our Most Significant Nibble ");
    scanf("%d", &iMSN);
    printf("Set a value from 1 to 15 for our Least Significant Nibble ");
    scanf("%d", &iLSN);
    
    //Set values to char variables
    cMSN = iMSN;
    cLSN = iLSN;
    
    printf("\nThe value held in your Most Significant Nibble is %X\n", cMSN);
    printf("In binary, that value is ");
    PrintBinary(cMSN);
    printf("\nThe value held in your Least Significant Nibble is %X\n", cLSN);
    printf("In binary, that value is ");
    PrintBinary(cLSN);    
    
    printf("\nTime to combine them!\n");
    printf("\nShift that Most Significant Nibble to the left!\n");
    cMSN = cMSN << 4;
    PrintBinary(cMSN);
    printf("\nClear any bits before the Least Significant Nibble!\n");
    cLSN &= 0b00001111;
    PrintBinary(cLSN);
    printf("\nSQUISH THEM TOGETHER!\n");
    cPackage = cMSN | cLSN;
    printf("\nYour Package value in Binary is ");
    PrintBinary(cPackage);
    
    

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





