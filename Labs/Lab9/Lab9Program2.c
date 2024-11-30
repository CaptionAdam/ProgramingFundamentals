/******************************************************************************

Program: Lab 9 Program 2
Coder: Adam Kuefler
Date: 29/11/2024(dd/mm/yyyy)
Purpose: Revese Text For Fantasy Writing. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    //Variable Declaration
    char cText[50];                 //50 Element Charicter Array to Store Text
    char *Pointer = cText;          //Initialize Pointer To Possition ) of CText
    char ch;                        //Temp Storage Variable
    

    //Forever Loop
    while(1) {

        Pointer = cText;                                                    //Reset Pointer to Position 0

        //Input
        printf("Enter Sentence To Reverse(50 Chars Max): ");                //Prompt For User Input
    
        while ((ch = getchar()) != '\n' && (Pointer - cText) < 50){         //Loop Collecting Input As ch, Stopping When Enter Charicter, or when pointer is at Position greater then 50
            *Pointer = ch;                                                  //Store Value Of ch At Current Pointer Possition
            Pointer++;                                                      //Increment Pointer Position
        }    
        
        //Output
        printf("Reversed Sentence: ");                                      //Notify Printing Of Reverse Sentance
            

        while (Pointer >= cText) {                                          //Loop While Pointer is At or After cText[0]
            putchar(*Pointer);                                              //Print Charicter to Terminal
            Pointer--;                                                      //Decrement Pointer
        }
        
        //Clear Buffer of Extra Data
        if (ch != '\n') {                                                   //If ch Isnt NewLine Char
        while ((ch = getchar()) != '\n');                                   //Eat All Buffer Data Till Newline Char Is Present
        }

        printf("\n\n");                                                     //Move Next Loop Down 2 Lines
    }
    
    return 0;
}
