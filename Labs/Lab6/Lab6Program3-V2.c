/******************************************************************************

Program: Lab 6 Program 3
Coder: Adam Kuefler
Date: 18/10/2024(dd/mm/yyyy)
Purpose: Find average length of word in input sentence

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

//Variable Declaration
char cInput;
int iWordCount;
int iCharCount;
int iCharCountSpaces;
float fAverageWordLength;

int main() {
    
    //Loop Forever
    while(1) {
        //Reset Variables For Next Loop
        iWordCount = 1;    //Reset Word Count To 1
        iCharCount = 0;    //Reset Char Count To 0
        iCharCountSpaces = 0; //Reset Char Count(With Spaces) to 0

        printf("Input Sentence: ");     //Prompt For Input

        //Loop Till All Chars In Buffer Are Prossessed
        while( (cInput = getchar() ) != '\n') {
            //cInput = toupper(cInput);   //Convert All Letters To Uppercase
                
            //If Space
            if(cInput == ' ') {
                iWordCount += 1;    //Increment Word Count
            }
            else if(cInput == ',' || cInput == '.' || cInput == '?' || cInput == '\'') {

            }
            else {
                iCharCount += 1;    //Increment Char Count
            }
        }

        fAverageWordLength = (float)iCharCount / iWordCount;    //Find Average By Deviding Char Count(No Spaces) By Word Count
        iCharCountSpaces = iCharCount + (iWordCount -1);    //Find Char Count With Spaces Included

        printf("# of Words: %d\n# of Total Char: %d\n# of Char(Without Spaces): %d\n", iWordCount, iCharCount, iCharCountSpaces); //More Output Detail
        printf("Average Word Length: %.1f\n", fAverageWordLength);  //Output Average Word Length To 1 Decimal Place
    }

    return 0;
} 
