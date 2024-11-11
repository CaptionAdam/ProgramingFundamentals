/******************************************************************************

Program: Lab 7 Program 2
Coder: Adam Kuefler
Date: 01/11/2024(dd/mm/yyyy)
Purpose: Scrable Point Calculator

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() {

    //Variable Declaration
    int iTile;   //Current Input Char
    //                      A B C D E F G H I J K L M N O P Q  R S T U V W X Y Z
    int iPointValues[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,5,4,8,4,10};     //Point Values for Letters
    int iPoints = 0;    //Points 

    //Main Loop
    while(1){       //Loop Forever

        printf("Enter Word(Only Enter Tiles With Point): ");    //Prompt For User Input

        //Charicter Intake Loop
        while( (iTile = getchar() ) != '\n') {      //Loop Till 'ENTER' Is Charicter In Buffer
                iTile = toupper(iTile);             //Convert All Letters To Uppercase
                iTile = iTile - 65;                 //Subtract 65 From Charicter Decimal Value(A == 0, B == 1, C == 2, etc...)
                iPoints += iPointValues[iTile];     //Add Point Value From Current Tile/Letter To Points Counter
        }
        printf("points = %d\n", iPoints);           //Print Points Value
        iPoints = 0;                                //Reset Points Value To 0
    }

    return 0;
}