/******************************************************************************

Program: Lab 8 Program 3
Coder: Adam Kuefler
Date: 11/11/2024(dd/mm/yyyy)
Purpose: Compare If 2 Input Words Are Anagrams

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>


void read_word(int counts[26]);

int word_comparison(int counts1[26], int counts2[26]);

int main(){

    //Variable Declaration
    int counts1[26] = {0};      //Word #1 Charicter Count
    int counts2[26] = {0};      //Word #2 Charicter Count
    int i = 0;

    //Forever Loop
    while(1) {
        printf("Enter Word #1 and press \"ENTER\": ");      //Prompt For input
        read_word(counts1);                                 //Run Word #1 Through Read Function

        printf("Enter Word #2 and press \"ENTER\": ");      //Prompt For input
        read_word(counts2);                                 //Run Word #2 Through Read Function

        if (word_comparison(counts1, counts2)) {            //If Word #1 & #2 Match Charicter Counts
            printf("Words Are Anagrams.\n\n");              //Print 
        } 
        else {                                              //If Word #1 & #2 DON'T Match Charicter Counts
        printf("Words Are Not Anagrams.\n\n");              //Print
        }

        //Array Reset
        for(i = 0; i <= 26; i++) {
            counts1[i] = 0;
            counts2[i] = 0;
        }
    }
    return 0;
}

/**********************************************************************
 * Function: void read_word(int counts[26])
 * Coder: Adam Kuefler
 * Date: 11/11/2024
 * Purpose: Intake Input Word And Record Number Of Each Charicter
 * ********************************************************************/
void read_word(int counts[26]) {
    
    //Variable Declaration
    int inChar;                 //Buffer Input Variable

    //Intake Loop
    while( (inChar = getchar() ) != '\n') {              //Loop Till 'ENTER' Is Charicter In Buffer
            inChar = toupper(inChar) - 'A';              //Converts All Charicters to Uppercase && Subtracts Ascii Int Value of 'A'
            counts[inChar]++;                            //Increments Counter For Position inChar
        }
    }


 /**********************************************************************
 * Function: int word_comparison(int counts1[26], int counts2[26])
 * Coder: Adam Kuefler
 * Date: 11/11/2024
 * Purpose: Compare Values Of Input Charicter Count Arrays
 * ********************************************************************/
 int word_comparison(int counts1[26], int counts2[26]) {
    
    //Variable Declaration
    int iIndex = 0;             //Loop Index  

    //Comparison Loop
    for (iIndex = 0; iIndex < 26; iIndex++) {            //Loop Till iIndex == 26
        if (counts1[iIndex] != counts2[iIndex]) {        //If Charicter Values != 
            return 0;                                    //Not Good Ending
        }
    }
        return 1;                                        //Good Ending
 }