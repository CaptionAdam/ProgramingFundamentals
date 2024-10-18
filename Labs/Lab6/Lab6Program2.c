/******************************************************************************

Program: Lab 6 Program 2
Coder: Adam Kuefler
Date: 18/10/2024(dd/mm/yyyy)
Purpose: Count the number of vowels(a,e,i,o,u) in input sentence

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

//Variable Declaration
char cInput;
int iVowelCount;

int main() {
    
    //Loop Forever
    while(1) {
        iVowelCount = 0;    //Reset Vowel Count To 0
        printf("Input Sentence: ");     //Prompt For Input

        //Loop Till All Chars In Buffer Are Prossessed
        while( (cInput = getchar() ) != '\n') {
            cInput = toupper(cInput);   //Convert All Letters To Uppercase
                
            //If Vowel
            if(cInput == 'A' || cInput == 'E' || cInput == 'I' || cInput == 'O' || cInput == 'U') {
                iVowelCount += 1; //Increment Vowel Count By 1
            }
        }

        printf("# of Vowels: %d\n", iVowelCount);    //Output Vowel Count
    }

    return 0;
} 
