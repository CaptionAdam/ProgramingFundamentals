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
    
    

    
    //******************Character Arrays*************************
    
    //Initialize character array with single character
    //Variable declaration
    char cArray[10] = {'a'};
    
    
    printf("cArray[10] contents are:  ");  //Output preamble
    for(iIndex = 0; iIndex < 10; iIndex++) 
    {
        printf("%c", cArray[iIndex]);     //Output values
    }
    printf("  after filling\n\n");     //Spaces for readability
    
    
    //Fill array with characters
    //Variable declaration
    char cArray2[10] = {'b','a','n','a','n','a','r','a','m','a'};
    
    
    printf("cArray2[10] contents are:  ");  //Output preamble
    for(iIndex = 0; iIndex < 10; iIndex++) 
    {
        printf("%c", cArray2[iIndex]);     //Output values
    }
    printf("  after filling\n\n");     //Spaces for readability
    
    
    //Notes on these examples:
    
    
    
    
    
    
    
    //***************Taking user input with Char Arrays*************
    
    
    // //Initialize character array with single character, take 10 char input
    // //Variable declaration
    // char cArray3[10] = {0};
    
    
    // //prompt for user input
    // printf("Please enter 10 characters (includes space and enter), then press enter:  ");
    // for(iIndex = 0; iIndex < 10; iIndex++)
    // {
    //   cArray3[iIndex] = getchar(); 
    // }
    
    // printf("cArray3[10] contents are:  ");  //Output preamble
    // for(iIndex = 0; iIndex < 10; iIndex++) 
    // {
    //     printf("%c", cArray3[iIndex]);     //Output values
    // }
    // printf("  after filling\n\n");     //Spaces for readability
    
    
    
    
    
    //What do you notice about how this operates?  Did it finish when you hit enter before
    //getting to 10 characters?  
    
    
    
    
    
    // //Initialize character array with single character, take ?? char input
    // //Variable declaration
    // char cArray4[50] = {0};
    // char cInput = 0;
    // int iCharCount = 0;
    
    
    // //prompt for user input
    // printf("Please enter characters (includes space), then press enter:  ");
    
    // while(((cInput = getchar()) != '\n') && iCharCount < 50)        
    // {
    //     putchar(cInput);
    //     iCharCount++;
    // }
    
    // for(iIndex = 0; iIndex < iCharCount; iIndex++) 
    // {
    //     printf("%c", cArray4[iIndex]);     //Output values
    // }
    // printf("  is your input\n\n");     //Spaces for readability    
    
    
    //What did you notice about how this operates? 
    
    



    
 
    
    //Congratulations on finishing Part 4 of your theory practice.  Good work!    


    return 0;
}


