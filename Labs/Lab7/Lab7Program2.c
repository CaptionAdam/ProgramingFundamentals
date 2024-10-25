/******************************************************************************

Program: Lab 7 Program 2
Coder: Adam Kuefler
Date: 25/10/2024(dd/mm/yyyy)
Purpose: Scrable Point Calculator

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() {

    int iTile;
    //                      A B C D E F G H I J K L M N O P Q  R S T U V W X Y Z
    int iPointValues[26] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,5,4,8,4,10};
    int iPoints = 0;

    while(1){
        printf("Enter Word(Only Enter Tiles With Point): ");

        while( (iTile = getchar() ) != '\n') {
                iTile = toupper(iTile);     //Convert All Letters To Uppercase
                iTile = iTile - 65;
                iPoints += iPointValues[iTile];
        }
        printf("points = %d\n", iPoints);
        iPoints = 0;
    }
    return 0;
}