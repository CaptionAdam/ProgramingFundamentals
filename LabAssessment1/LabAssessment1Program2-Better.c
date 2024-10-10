/******************************************************************************

Lab Assessment 1 Program 2
Coder: Adam Kuefler
Date: 07/10/2024(dd/mm/yyyy)
Program (All Parts): Give Number Of Digits Of input Number

*******************************************************************************/
#include <stdio.h>

int iInput = 0;

int main()
{
    
    printf("Please Enter A Positive Integer Containing A Maximum Of 6 Digits: ");
    scanf("%d", &iInput);
    
    if(iInput < 0){
        return 0;
    }

    else if(iInput > 999999)
    {
        printf("\nWhat Did You Do You Killed It!?\n");
        return 0;
    }
    
    else if(iInput > 99999) 
    {
        printf("Your Number Has 6 Digits\n");
    }

    else if(iInput > 9999) 
    {
        printf("Your Number Has 5 Digits\n");
    }

    else if(iInput > 999) 
    {
        printf("Your Number Has 4 Digits\n");
    }

    else if(iInput > 99) 
    {
        printf("Your Number Has 3 Digits\n");
    }

    else if(iInput > 9) 
    {
        printf("Your Number Has 2 Digits\n");
    }

    else if(iInput > 0) 
    {
        printf("Your Number Has 1 Digits\n");
    }
    
    else
    {
        printf("\nSomething Went Wrong\n");
    }
    
    return 0;
}
