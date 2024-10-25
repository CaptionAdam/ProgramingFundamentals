/******************************************************************************

Program: Lecture 6 Practice
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 6

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//Preprocessor directives
#define LENGTH 5

int main()
{
    //Index Variable Declaration - Do not comment out
    int iIndex = 0;
    
    

    //*******************Multidimensional Arrays******************
    //Index Variables Declaration - Do not comment out
    int iRow = 0;
    int iCol = 0;
    
    
    //variable declaration    
    int i2DArray[3][3] = {5};

    printf("i2DArray[3][3] = {5} output is:  \n");
    for(iRow = 0; iRow < 3; iRow++)     //for each row position
    {
        for(iCol = 0; iCol < 3; iCol++)     //for each column position within each row
        {
            printf("%d\t", i2DArray[iRow][iCol]);   //print value at current row and column position
        }
        printf("\n");   //add new line after each row completes
    }
    printf("\n\n");     //add space for readability
    
    
    // //variable declaration
    // int i2DArray2[3][3] = {9,8,7,6,5,4,3,2,1};
   
    // printf("i2DArray2[3][3] = {9,8,7,6,5,4,3,2,1} output is:  \n");
    // for(iRow = 0; iRow < 3; iRow++)     //for each row position
    // {
    //     for(iCol = 0; iCol < 3; iCol++)     //for each column position within each row
    //     {
    //         printf("%d\t", i2DArray2[iRow][iCol]);   //print value at current row and column position
    //     }
    //     printf("\n");   //add new line after each row completes
    // } 
    // printf("\n\n");     //add space for readability
    
    // //variable declaration
    // int i2DArray3[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    
    // printf("i2DArray3[3][3] = {{9,8,7},{6,5,4},{3,2,1}} output is:  \n");
    // for(iRow = 0; iRow < 3; iRow++)     //for each row position
    // {
    //     for(iCol = 0; iCol < 3; iCol++)     //for each column position within each row
    //     {
    //         printf("%d\t", i2DArray3[iRow][iCol]);   //print value at current row and column position
    //     }
    //     printf("\n");   //add new line after each row completes
    // } 
    

    // //What are your thoughts on these examples? Did anything suprise you? Why?
    
    
    
    
    

    //******************Filling 2D arrays*********************************
    
    // //variable declaration
    // int i2DArray4[3][3] = {0};
    
    // //prompt for input
    // printf("Please input 9 integer values:  ");
    
    // for(iRow = 0; iRow < 3; iRow++)     //for each row position
    // {
    //     for(iCol = 0; iCol < 3; iCol++)     //for each column position within each row
    //     {
    //         scanf("%d", &i2DArray4[iRow][iCol]);   //get value at current row and column position
    //     }
    //     printf("\n");   //add new line after each row completes
    // }     
    
    
    
    
    // printf("i2DArray4[3][3] = {??} output is:  \n");
    // for(iRow = 0; iRow < 3; iRow++)     //for each row position
    // {
    //     for(iCol = 0; iCol < 3; iCol++)     //for each column position within each row
    //     {
    //         printf("%d\t", i2DArray4[iRow][iCol]);   //print value at current row and column position
    //     }
    //     printf("\n");   //add new line after each row completes
    // } 

    // //What did you notice about this section of code and output?  Thoughts/notes?
    
    
    



    


    
    //Congratulations on finishing part 5 of your theory practice.  Good work!    


    return 0;
}


