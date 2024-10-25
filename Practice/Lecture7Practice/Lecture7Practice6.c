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
    
    


    //**********************Constant Arrays************************************
    
    const char cCardValues[] = {'2','3','4','5','6','7','8','9','J','Q','K','A'};

    for(iIndex = 12; iIndex >= 0; iIndex--) printf("%c ", cCardValues[iIndex]);
    printf("\n\n");     //spaces for readability
    
    //Does the compiler allow you to print values as normal?
    
    
    
    
    
    
    // printf("Time for new values!\n");
    // for(iIndex = 0; iIndex < 12; iIndex++) cCardValues[iIndex = 0];     //Set all values to 0

    // printf("These are your new values: ");    
    // for(iIndex = 12; iIndex >= 0; iIndex--) printf("%c ", cCardValues[iIndex]);     //Reprint values to terminal

    // //Does the compiler allow you to replace values as normal?  What happens?







    //************************Generating Random Numbers********************* 


    //Using rand() to get random values

    // //Variable declaration
    // int iRandom = 0;
    
    // printf("The initial value of iRandom is %d\n", iRandom);  //Print current value
    // iRandom = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom);  //Print current value
    // iRandom = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom);  //Print current value
    // iRandom = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom);  //Print current value
    // iRandom = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom);  //Print current value

    // printf("\n\n");     //spaces for readability
    
    // //What did you notice about how rand() operates?  
    
    
    
    
    
    
    
    //Using srand() to get random values
    
    // //Variable declaration
    // int iRandom2 = 0;
    
    // srand(400);     //Adjust value here
    
    // printf("The initial value of iRandom is %d\n", iRandom2);  //Print current value
    // iRandom2 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom2);  //Print current value
    // iRandom2 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom2);  //Print current value
    // iRandom2 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom2);  //Print current value
    // iRandom2 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom2);  //Print current value

    // printf("\n\n");     //spaces for readability
    
    // //What did you notice about how srand() operates?
    






    
    
    
    
    //Using srand(time()) to get random values
    
    // //Variable declaration
    // int iRandom3 = 0;
    
    // srand(time(NULL));     //Adjust value here
    
    // printf("The initial value of iRandom is %d\n", iRandom3);  //Print current value
    // iRandom3 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom3);  //Print current value
    // iRandom3 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom3);  //Print current value
    // iRandom3 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom3);  //Print current value
    // iRandom3 = rand() % 10000;   //Randomize value between 0 and 9999
    // printf("The current value of iRandom is %d\n", iRandom3);  //Print current value

    // printf("\n\n");     //spaces for readability
    
    // //What did you notice about how srand(time()) operates?    
    
    
    
    
    
    
    

    
    //Congratulations on finishing your theory practice.  Good work!    


    return 0;
}


