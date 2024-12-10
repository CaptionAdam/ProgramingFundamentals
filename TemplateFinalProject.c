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
void PrintBinary(int iIntegerInput);
int EncodeWeapon(int iAttribute, int iValue);
//int PrintWeapon();
// void FinalAttack();

int main()
{
    char cAction[11];
    char *ActionPoint = cAction;
    

    char cWeapon[20];
    char *WeaponPoint = cWeapon;

    char inChar;
    int iPlayAgain = 1;
    int iActionType;

    int iFinalOdds = 0;
    //  Weapon Stats
    int iWeaponAttributes;
    int iWeaponType;
    int iWeaponElement;

    while(iPlayAgain)
    {
        
        //*************************************************************
        //********************Intro Scene/Choice***********************
        //*************************************************************
        
        //Descriptive text, setting scene
        
        printf("***************************************************\n");
        printf("* You have reached the final room of the dungeon. *\n");
        printf("* A large dragon stands before you.               *\n");
        printf("* It is beyond massive.                           *\n");
        printf("* You see a weapon and a shield on the floor.     *\n");
        printf("***************************************************\n\n");
        

        //Prompt for choice
        printf("*******************\n");
        printf("* What do you do? *\n");
        printf("*******************\n");
        printf("(FEAR PUDDLE)  (GRAB WEAPON)  (GRAB SHIELD)\n");
            //Get input text
            ActionPoint = cAction;

            while ((inChar = getchar()) != '\n' && (ActionPoint - cAction) < 11) {         //Loop Till 'ENTER' Is Charicter In Buffer
                *ActionPoint = toupper(inChar);
                ActionPoint++;
            }
            
            //Compare input text to options
            iActionType = ArrayCompare(cAction);

        if(iActionType == 3)         //If choice allows to move on
        {
            
            //***************************************************************************
            //************************Weapon Choices*************************************
            //***************************************************************************
            
            
            //*******************WEAPON NAME*********************************************
            
            //Flavour text and prompt for choice of weapon (Direct input character array)
            //printf("Shield Worked!!!");
            printf("*************************************************************************\n");
            printf("* You reach for a shield and protect yourself from the dragon's attack. *\n");
            printf("* With the benefit of the shield's protection, you reach for a weapon.  *\n");
            printf("* What type of weapon do you grab?                                      *\n");
            printf("*************************************************************************\n");
            printf("(20 characters max): ");
            //Get input text
            
            WeaponPoint = cWeapon;                                                          //Set Pointer to Position 0

            while ((inChar = getchar()) != '\n' && (WeaponPoint - cWeapon) < 20) {          //Loop Till 'ENTER' Is Charicter In Buffer
                *WeaponPoint = toupper(inChar);
                WeaponPoint++;
            }        

            //Space for readability
            
            
            
            //******************WEAPON TYPE************************************************
            
            
            //Flavour text and prompt for choice of weapon type
            printf("*********************************************************\n");
            printf("* Ahh, you have chosen a weapon that is perfect for:    *\n");
            printf("* Throwing(1), Bludgeoning(2), Piercing(3), Slashing(4) *\n");
            printf("*********************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponType);

            //If input is not within range, give flavour text and store as 0
            if(iWeaponType < 1 || iWeaponType > 4) {
                printf("********************************************************\n");
                printf("* So, you have chosen a useless weapon...Best of luck. *\n");
                printf("********************************************************\n");
                
                iWeaponType = 0;
            }

            else iFinalOdds += 25;    
            
            //Encode weapon type within int variable
            iWeaponAttributes |= EncodeWeapon(1, iWeaponType);

            PrintBinary(iWeaponAttributes);
            
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
        
        else if(iActionType == 2) 
        {
            printf("You reach for a weapon and the dragon chomps you. You perish.\n");
        }
        
        else if(iActionType == 1) 
        {
            printf("The dragon is disgusted with you. It breathes fire. You perish.\n");
        }
        else 
        {
            printf("Try Again\n");
            continue;
        }  

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
 * Function: int ArrayCompare(char cArray)
 * Coder: Adam Kuefler
 * Date: 06/12/2024
 * Purpose: Compares choice to options, returns match identity, or lack thereof
 * *****************************************************************************/
int ArrayCompare(char *cArray)
{
    char cOption1[11] = {"FEAR PUDDLE"};
    char cOption2[11] = {"GRAB WEAPON"};
    char cOption3[11] = {"GRAB SHIELD"};
    int iCorrect1 = 0, iCorrect2 = 0, iCorrect3 = 0;
    int iIndex = 0;
    //For each array option, check letter for match against known options, increment if match found

    while (iIndex < 11) {
        if(cOption1[iIndex] == cArray[iIndex]) iCorrect1 ++;

        if(cOption2[iIndex] == cArray[iIndex]) iCorrect2 ++;

        if(cOption3[iIndex] == cArray[iIndex]) iCorrect3 ++;

        iIndex++;
        //printf("%d,%d,%d\n", iCorrect1, iCorrect2, iCorrect3);
    }
    
    //If match, return result, else return 0 for no match

    if(iCorrect1 >= 9) return 1;

    if(iCorrect2 >= 9) return 2;
    
    if(iCorrect3 >= 8) return 3;

    else return 0;
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
    int iWeaponStats = 0;
    
//Depending on attribute, encode in defined position of int variable
switch(iAttribute){
    case 1:
        iWeaponStats = iValue << 24; // shift bits 24 places left
        break;
    case 2:
        iWeaponStats = iValue << 16; // shift bits 16 places left
        break;
    case 3:
        iWeaponStats = iValue << 8; // shift bits 8 places left
        break;
    case 4:
        iWeaponStats = iValue << 0; // shift bits 0 places left
        break;
}

    PrintBinary(iWeaponStats);

    return iWeaponStats;
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



