/******************************************************************************

Program: Lab 2 Program 1
Coder: Adam Kuefler
Date: 12/09/2024(dd/mm/yyyy)
Purpose: Take #'s 1-16 , align in grid, and sum rows/colums/diaginals

*******************************************************************************/
  
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 Easy Copy Input

#include <stdio.h>

int main() 
{   
    //Variable Declaration
    int A1 = 0;
    int A2 = 0;
    int A3 = 0;
    int A4 = 0;
    int B1 = 0;
    int B2 = 0;
    int B3 = 0;
    int B4 = 0;
    int C1 = 0;
    int C2 = 0;
    int C3 = 0;
    int C4 = 0;
    int D1 = 0;
    int D2 = 0;
    int D3 = 0;
    int D4 = 0;
    int R1 = 0;
    int R2 = 0;
    int R3 = 0;
    int R4 = 0;
    int Col1 = 0;
    int Col2 = 0;
    int Col3 = 0;
    int Col4 = 0;
    int Diag1 = 0;
    int Diag2 = 0;
 
    //User Input
    printf("Input Numbers 1-16 in any order\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &A1, &A2, &A3, &A4, &B1, &B2, &B3, &B4, &C1, &C2, &C3, &C4, &D1, &D2, &D3, &D4); //Store Input in Variables
    printf("\n,-------------------,\n|%3d |%3d |%3d |%3d |\n|----+----+----+----|\n|%3d |%3d |%3d |%3d |\n|----+----+----+----|\n|%3d |%3d |%3d |%3d |\n|----+----+----+----|\n|%3d |%3d |%3d |%3d |\n'-------------------'", A1, A2, A3, A4, B1, B2, B3, B4, C1, C2, C3, C4, D1, D2, D3, D4); //Print Variables In Grid
    //printf("\n\n%3d %3d %3d %3d\n\n%3d %3d %3d %3d\n\n%3d %3d %3d %3d\n\n%3d %3d %3d %3d\n", A1, A2, A3, A4, B1, B2, B3, B4, C1, C2, C3, C4, D1, D2, D3, D4); //Print Variables In Grid


    //Calculation Block
    //Row Sums
    R1 = A1 + A2 + A3 + A4;
    R2 = B1 + B2 + B3 + B4;
    R3 = C1 + C2 + C3 + C4;
    R4 = D1 + D2 + D3 + D4;
    //Colum Sums
    Col1 = A1 + B1 + C1 + D1;
    Col2 = A2 + B2 + C2 + D2;
    Col3 = A3 + B3 + C3 + D3;
    Col4 = A4 + B4 + C4 + D4;
    //Diaginal Sums
    Diag1 = A1 + B2 + C3 + D4;
    Diag2 = A4 + B3 + C2 + D1;

    //Print Sums
    printf("\nRow Sums: %d %d %d %d", R1, R2, R3, R4);
    printf("\nColum Sums: %d %d %d %d", Col1, Col2, Col3, Col4);
    printf("\nDiaganal Sums: %d %d\n\n", Diag1, Diag2);

    return 0;
}
