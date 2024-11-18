/******************************************************************************

Program: Lab Assesment 2 Program 2
Coder: Adam Kuefler
Date: 15/11/2024(dd/mm/yyyy)
Purpose: Take Input Floats, Converts to Ints, Adds Ints, and Prints as Captal Letter(1=A)

*******************************************************************************/
#include <stdio.h>

int main()
{
    float fInput1;
    float fInput2;
    int iConverted1;
    int iConverted2;
    char cOutput;
    
    while(1) {
        printf("Input two float values: ");
        scanf("%f %f", &fInput1, &fInput2);
        
        iConverted1 = (int)fInput1;
        iConverted2 = (int)fInput2;
        
        //printf("%d %d", iConverted1, iConverted2);
        cOutput = iConverted1 + iConverted2 + 64;
        
        printf("Your Letter Is: %c\n\n", cOutput);
    }
    
    return 0;
}