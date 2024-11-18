/******************************************************************************

Program: Lab Assesment 2 Program 1
Coder: Adam Kuefler
Date: 15/11/2024(dd/mm/yyyy)
Purpose: Take Input Number Double 7 Times, And Return As Hex

*******************************************************************************/
#include <stdio.h>

int main()
{
    int iInput;
    
    while(1){
        printf("Please Enter A Number(0-310):");
        scanf("%d", &iInput);
        
        if(iInput < 0| iInput > 310) {
            printf("You Have Saddened The Code :(\n\n");
            continue;
        }
        
        else {
            for(int i = 1; i <= 7; i++) {
                iInput *= 2;
            }
        }
    
        printf("Output: %x\n\n", iInput);
    }
    return 0;
}