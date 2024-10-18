/******************************************************************************

Program: 
Coder: Adam Kuefler
Date: 18/10/2024(dd/mm/yyyy)
Purpose: 

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

char cPhoneChars; 
int iCase;

int main() {

    printf("Enter phone number: ");
    while(cPhoneChars != '\n') {
        cPhoneChars = getchar();
        cPhoneChars = toupper(cPhoneChars);
        
        if(cPhoneChars <= 64) {
            iCase = 0;
        }
        else if(cPhoneChars <= 67) {
            iCase = 2;
        }
        else if(cPhoneChars <= 70) {
            iCase = 3;
        }
        else if(cPhoneChars <= 73) {
            iCase = 4;
        }
        else if(cPhoneChars <= 76) {
            iCase = 5;
        }
        else if(cPhoneChars <= 79) {
            iCase = 6;
        }
        else if(cPhoneChars <= 81) {
            iCase = 7;
        }
        else if(cPhoneChars <= 86) {
            iCase = 8;
        }
        else if(cPhoneChars <= 90) {
            iCase = 9;
        }
        else { 
            iCase = 1;
        }
         
        //1-800-I8P-IZZA

        switch (iCase) {
            case 0:
                printf("%c", cPhoneChars);
                continue;
            case 1:
                break;
            case 2:
                printf("2");
                continue;
            case 3:
                printf("3");
                continue;
            case 4:
                printf("4");
                continue;
            case 5:
                printf("5");
                continue;
            case 6:
                printf("6");
                continue;
            case 7:
                printf("7");
                continue;
            case 8:
                printf("8");
                continue;
            case 9:
                printf("9");
                continue;
        }   
    }

    // printf("%s", cNewPhoneNum);

    return 0; 
}