/******************************************************************************

Lab Assessment 1 Program 3
Coder: Adam Kuefler
Date: 04/10/2024(dd/mm/yyyy)
Program (All Parts): Find Letter Grade

*******************************************************************************/
#include <stdio.h>

int iGrade = 0;

int main()
{
    printf("Please Enter Grade Presentage(0-100): %%");
    scanf("%d", &iGrade);
    
    if(iGrade >= 85)
    {
        printf("The letter grade is A");
    }
    else if(iGrade >= 68)
    {
        printf("The letter grade is B");
    }
    else if(iGrade >= 56)
    {
        printf("The letter grade is C");
    }
    else if(iGrade < 56)
    {
        printf("The grade is unacceptable");
    }
    
    
    return 0;
}
