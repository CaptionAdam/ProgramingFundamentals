/******************************************************************************
Coder: Cory Thorp
Date: 25-OCT-2024
Program: Harold's Hairy Hellephant Haberdashery
Program purpose: Fun!
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //seed randomizer
    srand((unsigned)time(NULL));
    
    
    //Variable declarations
    int iHellephantHeight[10] = {0};
    int iHellephantLength[10] = {0};
    int iChoice = 0;
    int iCase = 0;
    
    //Flavour text
    printf("Welcome to Harold's Hairy Hellephant Haberdashery! \n");
    printf("We're so glad you could join us!\n");
    printf("We have a group of Hellephants in a line. We're looking for one that is less than 5' tall and more than 8' long\n");
    printf("Can you help us find one?\n\n");
    
    
    //Randomize hellephant sizes
    for(int iIndex = 0; iIndex < 10; iIndex++) iHellephantHeight[iIndex] = rand()%5 + 3;  
    for(int iIndex = 0; iIndex < 10; iIndex++) iHellephantLength[iIndex] = rand()%8 + 3;
    
    
    
    while(1)
    {
        //Prompt for user input
        printf("Which Hellephant would you like to look at? (1-10, 0 to quit): ");
        scanf("%d", &iChoice);
        
        //Leave if chose 0
        if(!iChoice)break;
    
    
        //Convert iChoice for array usage
        iChoice--;
        
        
        //Output Hellephant stats to user
        printf("Hellephant %d is %d feet tall and %d feet long\n", iChoice + 1, iHellephantHeight[iChoice], iHellephantLength[iChoice]);
    }
    
    //Prompt for user input
    printf("\n\nSooooooooo, which Hellephant is defective?  ");
    scanf("%d", &iChoice);
    
    //Convert iChoice for array usage
    iChoice--;
    
    //Output time!
    if((iHellephantHeight[iChoice] < 5) && (iHellephantLength[iChoice] > 8)) iCase = 1;
    else iCase = 2;
    
    //Debugging
    //printf("Hellephant choice is %d, Height is %d, Length is %d")
    
    switch(iCase)
    {
        case 1: printf("\nCongratulations, you got it. \n Now, help me toss this Hellephant into the grinder. \n Burgers for everyone!!\n\nYou...win?");break;
        case 2: printf("\nSad news, you didn't succeed.\n  Maybe there wasn't one.  Maybe you just messed up. \n Everyone still needs burgers though. \n Into the grinder with you!\n\n\n\nYOU LOSE");break;
    }
    

    return 0;
}
