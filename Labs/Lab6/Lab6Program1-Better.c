/******************************************************************************

Program: Lab 6 Program 1
Coder: Adam Kuefler
Date: 18/10/2024(dd/mm/yyyy)
Purpose: Convert alphanumeric phone numbers to numbers only

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

//Variable Declaration
char cPhoneChars; 

int main() {

    //Loop Forever
    while(1) { 
        
        printf("Enter phone number: ");     //Prompt For Input
       
       //Loop Till All Chars In Buffer Are Prossessed
        while( (cPhoneChars = getchar() ) != '\n') {
            cPhoneChars = toupper(cPhoneChars);     //Convert All Letters To Uppercase
            
            //If cPhoneChars = A,B,C
            if(cPhoneChars == 'A' || cPhoneChars == 'B' || cPhoneChars == 'C') {
                cPhoneChars = '2';      //Output Char = 2
            }

            //If cPhoneChars = D,E,F
            else if(cPhoneChars == 'D' || cPhoneChars == 'E' || cPhoneChars == 'F') {
                cPhoneChars = '3';      //Output Char = 3
            }

            //If cPhoneChars = G,H,I
            else if(cPhoneChars == 'G' || cPhoneChars == 'H' || cPhoneChars == 'I') {
                cPhoneChars = '4';      //Output Char = 4
            }

            //If cPhoneChars = J,K,L
            else if(cPhoneChars == 'J' || cPhoneChars == 'K' || cPhoneChars == 'L') {
                cPhoneChars = '5';      //Output Char = 5
            }

            //If cPhoneChars = M,N,O
            else if(cPhoneChars == 'M' || cPhoneChars == 'N' || cPhoneChars == 'O') {
                cPhoneChars = '6';      //Output Char = 6
            }

            //If cPhoneChars = P,Q,R,S
            else if(cPhoneChars == 'P' || cPhoneChars == 'Q' || cPhoneChars == 'R' || cPhoneChars == 'S') {
                cPhoneChars = '7';      //Output Char = 
            }

            //If cPhoneChars = T,U,V
            else if(cPhoneChars == 'T' || cPhoneChars == 'U' || cPhoneChars == 'V') {
                cPhoneChars = '8';      //Output Char = 9
            }

            //If cPhoneChars = W,X,Y,G
            else if(cPhoneChars == 'W' || cPhoneChars == 'X' || cPhoneChars == 'Y' || cPhoneChars == 'Z') {
                cPhoneChars = '9';      //Output Char = 9
            }
        
            putchar(cPhoneChars);     //Output Current Converted Char
        }
        printf("\n");       //Next Loop Starts On New Line
    }

    return 0; 
}
// 1-800-I8P-IZZA //Sample Input