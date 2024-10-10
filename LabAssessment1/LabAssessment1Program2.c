/******************************************************************************

Lab Assessment 1 Program 2
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Program (All Parts): Give Number Of Digits Of input Number

*******************************************************************************/
#include <stdio.h>

int iInput = 0;
int iDigits = 1;

int main()
{
    
    printf("Please Enter A Positive Integer Containing A Maximum Of 6 Digits: ");
    scanf("%d", &iInput);
    
    if(iInput < 0){
        return 0;
    }
    
    else if(iInput > 999999){
        printf("\nWhat Did You Do You Killed It!?");
        return 0;
    }
    
    iInput = iInput / 10;
    
    if(iInput > 0){
        iDigits += 1;
    }
    
    iInput = iInput / 10;
    
    if(iInput > 0){
        iDigits += 1;
    }
    
     iInput = iInput / 10;
    
    if(iInput > 0){
        iDigits += 1;
    }
    
    iInput = iInput / 10;
    
    if(iInput > 0){
        iDigits += 1;
    }
    
     iInput = iInput / 10;
    
    if(iInput > 0){
        iDigits += 1;
    }
    
    printf("Your Number Has %d Digits", iDigits);
    
    return 0;
}
