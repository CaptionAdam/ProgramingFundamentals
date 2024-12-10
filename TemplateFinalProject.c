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
    //DebugVars
    int PrintBin = 1;

    char cAction[11];
    char *ActionPoint = cAction;
    

    char cWeapon[20];
    char *WeaponPoint = cWeapon;

    char inChar;
    int iPlayAgain = 1;
    int iActionType;

    int iFinalOdds = 0;
    //  Weapon Stats
    int iWeaponStats;
    int iWeaponType;
    int iWeaponElement;
    int iWeaponAttribute;
    int iWeaponEchant;

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
            printf("\n*********************************************************\n");
            printf("* Ahh, you have chosen a weapon that is perfect for:    *\n");
            printf("* Throwing(1), Bludgeoning(2), Piercing(3), Slashing(4) *\n");
            printf("*********************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponType);

            //If input is not within range, give flavour text and store as 0
            if(iWeaponType < 1 || iWeaponType > 4) {
                printf("\n********************************************************\n");
                printf("* So, you have chosen a useless weapon...Best of luck. *\n");
                printf("********************************************************\n");
                
                iWeaponType = 0;
            }

            else iFinalOdds += 1;    
            
            //Encode weapon type within int variable
            iWeaponStats |= EncodeWeapon(1, iWeaponType);

            if(PrintBin == 1) PrintBinary(iWeaponStats);
            
            //*****************WEAPON ELEMENT**********************************************
            printf("\n**************************************************\n");
            printf("* You notice this weapon is imbued with magic.   *\n");
            printf("* What natural element does your weapon possess? *\n");
            printf("**************************************************\n");
            printf("*    Fire (1)        Ice (2)         Acid (3)    *\n");
            printf("*    Force(4)     Lightning (5)    Psychic (6)   *\n");
            printf("**************************************************\n");
            //printf("*  *");
            printf(": ");
            scanf("%d", &iWeaponElement);

            //If input is not within range, give flavour text and store as 0
            if(iWeaponElement < 1 || iWeaponElement > 6) {
                printf("\n***************************************************************\n");
                printf("* Oh, you must have been mistaken. This weapon is not magical. *\n");
                printf("****************************************************************\n");
                
                iWeaponElement = 0;
            }

            else iFinalOdds += 1;    
            
            //Encode weapon type within int variable
            iWeaponStats |= EncodeWeapon(2, iWeaponElement);

            if(PrintBin == 1) PrintBinary(iWeaponStats);
            
            
            //******************WEAPON ATTRIBUTE********************************************
            printf("\n********************************************************\n");
            printf("* When you hold this weapon, you feel                  *\n");
            printf("********************************************************\n");
            printf("* Stronger (1)    More Agile (2)          Tougher (3)  *\n");
            printf("* Smarter (4)     Wiser (5)       More Charismatic (6) *\n");
            printf("********************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponAttribute);
            
            //If input is not within range, give flavour text and store as 0
            if(iWeaponAttribute < 1 || iWeaponAttribute > 6) {
                printf("\n***********************************************\n");
                printf("* Huh, it was a fleeting feeling.  How boring. *\n");
                printf("************************************************\n");
                
                iWeaponAttribute = 0;
            }

            else iFinalOdds += 1;

            //Encode weapon type within int variable
            iWeaponStats |= EncodeWeapon(3, iWeaponAttribute);

            if(PrintBin == 1) PrintBinary(iWeaponStats);
            
            //*******************WEAPON ENCHANTMENT******************************************
            printf("\n**********************************************************************\n");
            printf("* There appears to be a symbol on the weapon.                        *\n");
            printf("* What symbol is upon it?                                            *\n");
            printf("**********************************************************************\n");
            printf("* Horseshoe (1)           Godly Representation (2)        Dragon (3) *\n");
            printf("* Outstretched Arms (4)   Spiral Horn (5)             Walrus man (6) *\n");
            printf("**********************************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponEchant);
            
            //If input is not within range, give flavour text and store as 0
            if(iWeaponEchant < 1 || iWeaponEchant > 6) {
                printf("\n***********************************************\n");
                printf("* Huh, it was a fleeting feeling.  How boring. *\n");
                printf("************************************************\n");
                
                iWeaponAttribute = 0;
            }

            else iFinalOdds += 1;

            //Encode weapon type within int variable
            iWeaponStats |= EncodeWeapon(4, iWeaponEchant);

            if(PrintBin == 1) PrintBinary(iWeaponStats);
            
            
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
 * Purpose: To encode the various Stats into an integer (32 bit) in 
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



