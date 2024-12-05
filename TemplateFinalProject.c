/******************************************************************************

Program: ELTR1102 Project
Coder: Adam Kuefler
Date: 05/12/2024(dd/mm/yyyy)
Purpose:  

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>  //to use toupper()
#include <stdlib.h> //to use rand() and srand()
#include <time.h>   //to use time()




//Function Declarations
int ArrayCompare(char *cArray);
// void PrintBinary(int iIntegerInput);
// int EncodeWeapon(int iAttribute, int iValue);
// int PrintWeapon();
// void FinalAttack();

int main()
{
    char cAction[11];
    char *Pointer = cAction;
    char inChar;
    int iPlayAgain = 1;

    while(iPlayAgain)
    {
        //*************************************************************
        //********************Intro Scene/Choice***********************
        //*************************************************************
        
        //Descriptive text, setting scene
        
        printf("You have reached the final room of the dungeon.\nA large dragon stands before you.\nIt is beyond massive.\nYou see a weapon and a shield on the floor.\n");

        

            //Prompt for choice

            printf("What do you do?\n(FEAR PUDDLE)  (GRAB WEAPON)  (GRAB SHIELD)");

            //Get input text

           while ((inChar = getchar()) != '\n' && (Pointer - cAction) < 11) {         //Loop Till 'ENTER' Is Charicter In Buffer
                inChar = toupper(inChar);
                *Pointer = inChar;
                Pointer++;
            }
            
            //Compare input text to options

            ArrayCompare(cAction);

        // if()        //If choice allows to move on
        {
            
            //***************************************************************************
            //************************Weapon Choices*************************************
            //***************************************************************************
            
            
            //*******************WEAPON NAME*********************************************
            
            //Flavour text and prompt for choice of weapon (Direct input character array)
            
            //Get input text
            
            //Space for readability
            
            
            
            //******************WEAPON TYPE************************************************
            
            
            //Flavour text and prompt for choice of weapon type
            
            //If input is not within range, give flavour text and store as 0
            
            //Delineation for readability
            
            //Encode weapon type within int variable
            
            //*****************WEAPON ELEMENT**********************************************
            
            
            
            
            
            //******************WEAPON ATTRIBUTE********************************************
            
            
            
            
            //*******************WEAPON ENCHANTMENT******************************************
            
            
            
            
            //******************************************************************************
            //********************CONFRONTATION WITH THE DRAGON*****************************
            //******************************************************************************
            
            
            //Flavour text
            
            
            //Determination of attack chance of success based on encoded weapon int variable
            
            
            
            //The final attack resolves, and adventure ends
            
            
        }
        
        //****************************************************************************
        //**********************REPLAY PROMPT AND VARIABLE RESET**********************
        //****************************************************************************
        
        //Play again?
        printf("Play again? \tYes (1)\tNo (0)");
        scanf("%d", &iPlayAgain);
        printf("\n\n\n****************************************\n\n\n");
        
        
        //flush input buffer
        while((getchar()) != '\n');     //Prevents characters in input buffer from affecting next loop
        
        //Reset loop variables
        
    }
        
    return 0;
}


//******************************************************************************
//*************************User Defined Functions*******************************
//******************************************************************************



/********************************************************************************
 * Function: int ArrayCompare(char )
 * Coder: Adam Kuefler
 * Date: I love those, they're tasty!
 * Purpose: Compares choice to options, returns match identity, or lack thereof
 * *****************************************************************************/
int ArrayCompare(char *cArray)
{
    //{F, E, A, R,  , P, U, D, D, L, E}
    //{G, R, A, B,  , W, E, A, P, O, N}
    //{G, R, A, B,  , S, H, I, E, L, D}
    
    //For each array option, check letter for match against known options, increment if match found

    
    //If match, return result, else return 0 for no match

}



/********************************************************************************
 * Function: int EncodeWeapon(int iAttribute, int iValue)
 * Coder: Cory Thorp
 * Date: Date squares are the best!
 * Purpose: To encode the various attributes into an integer (32 bit) in 
 * bits 1-4, 8-12, 16-20, and 24-28
 * 
 * MSB  XXXX    XXXX    XXXX    XXXX    XXXX    XXXX    XXXX    XXXX     LSB
 *              Type          Element        Attribute       Enchantment
 * 
 * *****************************************************************************/
int EncodeWeapon(int iAttribute, int iValue)
{
    //Output variable declaration    
    
    //Depending on attribute, encode in defined position of int variable


}

/********************************************************************************
 * Function: int PrintWeapon()
 * Coder: Cory Thorp
 * Date: Only if they're pitted, thanks
 * Purpose: To print the full name of the awesome weapon you designed
 * *****************************************************************************/

int PrintWeapon()
{
    //Variable Declarations

    
    //Delineation for readability
    
    //Decode weapon into Element, Type, ArrayName, "of", Attribute, Enchantment
    //Decode Element

    
    //Decode Type

    
    //Weapon Name


    //Of
    printf(" of ");
    
    //Decode Attribute

    
    //Decode Enchantment

    
      //End of statement delineation
    
       //Integer to determine weapon strength against Dragon
}


/********************************************************************************
 * Function: void FinalAttack(int )
 * Coder: Cory Thorp
 * Date: You realize that you could do much better.
 * Purpose: Takes input of final attack chance, determines result, outputs to terminal
 * *****************************************************************************/

void FinalAttack()
{
    int iRandom = 0;
    int iDifficulty = 0;
    
    //Flavour text and determination of difficulty of the hit based on weapon choices


       //Generate random value for whether the strike hits 
    
    
    if(iRandom >= iDifficulty)
    {
        //Flavour text - User won!

    }
    else
    {
        //Flavour text - User lost!

    }
    
}

/********************************************************************************
 * Function: void PrintBinary(int iIntegerInput)
 * Coder: Cory Thorp
 * Date: No thanks, I'm married
 * Purpose: To output a 32 bit integer as a representation of the individual bits 
 * Used to check encoded int, if necessary
 * *****************************************************************************/
 void PrintBinary(int iIntegerInput)
{
    char cSteps = 0;
    
    //Output in binary format
    printf(" 0b");
    for(int iIndex = 31; iIndex >= 0; iIndex--)     //Start at MSB
    {
        cSteps = iIntegerInput >> iIndex;           //shift bytes to right by current value in index
        if(cSteps & 0x01)printf("1");               //if cstep bitwise and with 0b00000001 is true, print 1
        else printf("0");                           //otherwise print a 0
    }
    printf("\n");       //space for readability
    
}



