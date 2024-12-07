/******************************************************************************
Project: Bit changer
Coder: Ben Crossland
Date: 29/11/2024
Purpose: sets or clears a chosen bit from a 2 digit hex value
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main()
{
// VARIABLES
unsigned char cHex, cHex2;
char cChange;
int iBit;
char restart = 'y', restart2 = 'y';

//MAIN CODE
while ((restart == 'y') || (restart == 'Y')){ // make code repeatable
    // Variable reset
    restart2 = 'y'; 

    // Inputs
    printf("Enter a pair of HEX digits with a space seperating them: "); scanf("%hhx %hhx", &cHex, &cHex2); // gets two hex inputs as chars
    cHex = ((cHex << 4) | cHex2); // combining both values together
    
    while ((restart2 == 'y') || (restart2 == 'Y')){ // lets user check multiple bits
    
    printf("Enter a bit to change (0-7): "); scanf("%d", &iBit);
    
    // Error check
    if (iBit < 0 || iBit > 7) { // making sure the bit is between 0-7
        printf("it said 0-7, not whatever that was\n");
        continue;
    }

    printf("Do you wish to set(s) or clear(c) the bit?: "); scanf(" %c", &cChange);
    cChange = tolower(cChange); // makes input lower case
    
    // Bit changing
    if (cChange == 's'){
        cHex |= (1 << iBit); // sets selected bit to 1
    }
    else if (cChange == 'c'){
        cHex &= ~(1 << iBit); // sets selected bit to 0
    }
    else printf("\nerror 404 something went worng!");
    
    if (cHex <= 'F') printf("0%x", cHex);// checks if hex value has less than one digit and prints 0 infront
    else printf("%x", cHex); // prints hex value if it has 2 digits

    // Restart prompts
    printf("\n\nWould you like to check another bit?(y/n)"); scanf(" %c", &restart2); // asks user if they want to check another bit
    }
    
    printf("\n\nWould you like to check another hex value?(y/n)"); scanf(" %c", &restart); // asks user if they want to restart program
}

    return 0;
}