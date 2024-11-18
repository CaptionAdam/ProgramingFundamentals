/******************************************************************************

Program: Lab Assesment 2 Program 3
Coder: Adam Kuefler
Date: 15/11/2024(dd/mm/yyyy)
Purpose: Store 4 Input Intergers in an Array, and Sum all except Biggest, and Smallest

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int SumArray[4] = {0};
    int iSum;
    int iBig;
    int iSmall;
    
    while(1){
        printf("Enter 4 Numbers(x x x x): ");
        
        scanf("%d %d %d %d", &SumArray[0], &SumArray[1], &SumArray[2], &SumArray[3]);
        
    
        if(SumArray[0] > SumArray[1] && SumArray[0] > SumArray[2] && SumArray[0] > SumArray[3]){
            iBig = 0;
        }
        else if(SumArray[1] > SumArray[0] && SumArray[1] > SumArray[2] && SumArray[1] > SumArray[3]){
            iBig = 1;
        }
        else if(SumArray[2] > SumArray[0] && SumArray[2] > SumArray[1] && SumArray[2] > SumArray[3]){
            iBig = 2;
        }
        else if(SumArray[3] > SumArray[0] && SumArray[3] > SumArray[2] && SumArray[3] > SumArray[0]){
            iBig = 3;
        }
        
        if (SumArray[0] < SumArray[1] && SumArray[0] < SumArray[2] && SumArray[0] < SumArray[3]){
            iSmall = 0;
        }  
        else if(SumArray[1] < SumArray[0] && SumArray[1] < SumArray[2] && SumArray[1] < SumArray[3]){
            iSmall = 1;
        }
        else if(SumArray[2] < SumArray[0] && SumArray[2] < SumArray[1] && SumArray[2] < SumArray[3]){
            iSmall = 2;
        }
        else if(SumArray[3] < SumArray[0] && SumArray[3] < SumArray[2] && SumArray[3] < SumArray[0]){
            iSmall = 3;
        }
        
        //printf("\n%d %d %d %d\n", SumArray[0], SumArray[1], SumArray[2], SumArray[3]);
        //printf("Biggest: %d Smallest: %d", SumArray[iBig], SumArray[iSmall]);
        
        SumArray[iBig] = 0;
        SumArray[iSmall] = 0;
        
        iSum = SumArray[0] + SumArray[1] + SumArray[2] + SumArray[3];
        
        printf("Array Sum = %d\n\n", iSum);
    }
    return 0;
}