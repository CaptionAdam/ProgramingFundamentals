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
int PrintWeapon(int iWeaponStats, int iWeaponNameLength, char *cWeaponName);
void FinalAttack(int iDifficulty);

int main()
{
    //DebugVars
    int PrintDebug = 0;                                                                     //Debug Printout Enable

    //Action Variables
    char cAction[11];                                                                       //Inital Action Char Array
    char *ActionPoint = cAction;                                                            //Pointer For cAction Array
    
    //Weapon Name Variables
    char cWeapon[20];                                                                       //Weapon Name Char Array
    char *WeaponPoint = cWeapon;                                                            //Pointer For cWeapon Array
    int iWeaponNameLength = 0;                                                              //Weapon name Length
    int iWeaponStats, iWeaponType, iWeaponElement, iWeaponAttribute, iWeaponEchant;         //Weapon Stats, Weapon Type, Weapon Element, Weapon Attribute, Weapon Enchant

    //General Program Variables
    char inChar;                                                                            //Input Charicter
    int iPlayAgain = 1;                                                                     //Weather You Play Again Or Not
    int iActionType;                                                                        //What Action Is Taken
    int iFinalOdds;                                                                         //Weapon Strength For Final Encounter

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
        printf("(FEAR PUDDLE)  (GRAB WEAPON)  (GRAB SHIELD)\n:");

        //Get input text
        ActionPoint = cAction;                                                         //Reset Pointer To 0 Position

        while ((inChar = getchar()) != '\n' && (ActionPoint - cAction) < 11) {         //Loop Till 'ENTER' Is Charicter In Buffer or till Exceding array
            *ActionPoint = toupper(inChar);                                            //Set Input Charicters to Uppercase
            ActionPoint++;                                                             //Increment Pointer
        }
            
            //Compare input text to options
            iActionType = ArrayCompare(cAction);                                        //Use Array Compare To Deside the Next Action

        if(iActionType == 3)                                                            //If Action Type = 3 Continue
        {
            
            //***************************************************************************
            //************************Weapon Choices*************************************
            //***************************************************************************
            
            
            //*******************WEAPON NAME*********************************************
            
            //Flavour text and prompt for choice of weapon (Direct input character array)
            printf("\n\n*************************************************************************\n");
            printf("* You reach for a shield and protect yourself from the dragon's attack. *\n");
            printf("* With the benefit of the shield's protection, you reach for a weapon.  *\n");
            printf("* What type of weapon do you grab?                                      *\n");
            printf("*************************************************************************\n");
            printf("(20 characters max): ");
            //Get input text
            
            WeaponPoint = cWeapon;                                                          //Set Pointer to Position 0

            while ((inChar = getchar()) != '\n' && (WeaponPoint - cWeapon) < 20) {          //Loop Till 'ENTER' Is Charicter In Buffer
                *WeaponPoint = inChar;
                WeaponPoint++;
                iWeaponNameLength++;
            }        



            //******************WEAPON TYPE************************************************
            
            
            //Flavour text and prompt for choice of weapon type
            printf("\n\n*********************************************************\n");
            printf("* Ahh, you have chosen a weapon that is perfect for:    *\n");
            printf("* Throwing(1), Bludgeoning(2), Piercing(3), Slashing(4) *\n");
            printf("*********************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponType);                                                      //Store Input As iWeaponType

            //If input is not within range, give flavour text and store as 0
            if(iWeaponType < 1 || iWeaponType > 4) {                                        //If iWeaponType Out Of Range
                printf("\n********************************************************\n");
                printf("* So, you have chosen a useless weapon...Best of luck. *\n");
                printf("********************************************************\n");
                
                iWeaponType = 0;                                                            //Set iWeaponType = 0
            }    
            
            //Encode Weapon Type In iWeaponStats
            iWeaponStats |= EncodeWeapon(1, iWeaponType);                                   //Or EncodeWeapon Output With iWeaponStats To Overwrite Type Nibble

            //Debug Print Out
            if(PrintDebug == 1) { 
               PrintBinary(iWeaponStats);
                printf("%d",iWeaponStats);
            }
            //*****************WEAPON ELEMENT**********************************************
            printf("\n\n**************************************************\n");
            printf("* You notice this weapon is imbued with magic.   *\n");
            printf("* What natural element does your weapon possess? *\n");
            printf("**************************************************\n");
            printf("*    Fire (1)        Ice (2)         Acid (3)    *\n");
            printf("*    Force(4)     Lightning (5)    Psychic (6)   *\n");
            printf("**************************************************\n");
            //printf("*  *");
            printf(": ");
            scanf("%d", &iWeaponElement);                                                   //Store Input As iWeaponElement

            //If input is not within range, give flavour text and store as 0
            if(iWeaponElement < 1 || iWeaponElement > 6) {                                  //If iWeaponElement Out Of Range
                printf("\n***************************************************************\n");
                printf("* Oh, you must have been mistaken. This weapon is not magical. *\n");
                printf("****************************************************************\n");
                
                iWeaponElement = 0;                                                         //Set iWeaponElement = 0
            }    
            
            //Encode Weapon Element In iWeaponStats
            iWeaponStats |= EncodeWeapon(2, iWeaponElement);                                //Or EncodeWeapon Output With iWeaponStats To Overwrite Element Nibble

            //Debug Print Out
            if(PrintDebug == 1) {
               PrintBinary(iWeaponStats);
                printf("%d",iWeaponStats);
            }
            
            //******************WEAPON ATTRIBUTE********************************************
            printf("\n\n********************************************************\n");
            printf("* When you hold this weapon, you feel                  *\n");
            printf("********************************************************\n");
            printf("* Stronger (1)    More Agile (2)          Tougher (3)  *\n");
            printf("* Smarter (4)     Wiser (5)       More Charismatic (6) *\n");
            printf("********************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponAttribute);                                                 //Store Input As iWeaponAtribute
            
            //If input is not within range, give flavour text and store as 0
            if(iWeaponAttribute < 1 || iWeaponAttribute > 6) {                              //If iWeaponAttribute Out Of Range
                printf("\n\n***********************************************\n");
                printf("* Huh, it was a fleeting feeling.  How boring. *\n");
                printf("************************************************\n");
                
                iWeaponAttribute = 0;                                                       //Set iWeaponAttribute = 0
            }

            //Encode Weapon Attriute In iWeaponStats
            iWeaponStats |= EncodeWeapon(3, iWeaponAttribute);                              //Or EncodeWeapon Output With iWeaponStats To Overwrite Attribute Nibble

            //Debug Print Out
            if(PrintDebug == 1) {
               PrintBinary(iWeaponStats);
                printf("%d",iWeaponStats);
            }

            //*******************WEAPON ENCHANTMENT******************************************
            printf("\n\n**********************************************************************\n");
            printf("* There appears to be a symbol on the weapon.                        *\n");
            printf("* What symbol is upon it?                                            *\n");
            printf("**********************************************************************\n");
            printf("* Horseshoe (1)           Godly Representation (2)        Dragon (3) *\n");
            printf("* Outstretched Arms (4)   Spiral Horn (5)             Walrus man (6) *\n");
            printf("**********************************************************************\n");
            printf(": ");
            scanf("%d", &iWeaponEchant);                                                     //Store Input As iWeaponEchant
            
            //If input is not within range, give flavour text and store as 0
            if(iWeaponEchant < 1 || iWeaponEchant > 6) {                                     //If iWeaponEchant Out Of Range
                printf("\n***********************************************\n");
                printf("* Huh, it was a fleeting feeling.  How boring. *\n");
                printf("************************************************\n");
                
                iWeaponAttribute = 0;                                                        //Set iWeaponEchant = 0
            }
            
            //Encode Weapon Enchantment In iWeaponStats
            iWeaponStats |= EncodeWeapon(4, iWeaponEchant);                                  //Or EncodeWeapon Output With iWeaponStats To Overwrite Enchantment Nibble

            //Debug Printout
            if(PrintDebug == 1) {
                PrintBinary(iWeaponStats);
                printf("%d",iWeaponStats);
            }
            
            //******************************************************************************
            //********************CONFRONTATION WITH THE DRAGON*****************************
            //******************************************************************************
            
            
            //Flavour text
            printf("\n\n********************************************************************************\n");
            printf("* You hold your weapon outstretched towards the dragon.                        *\n");
            printf("* It looks in your direction, and lunges towards you.                          *\n");
            printf("* You see an opportunity and sidestep the attack.                              *\n");
            printf("* As the dragon's head passes, you come down on it with the full might of your *\n");
            printf("********************************************************************************\n");
            
            iFinalOdds = PrintWeapon(iWeaponStats, iWeaponNameLength, cWeapon);
            //Determination of attack chance of success based on encoded weapon int variable
            
            
            //The final attack resolves, and adventure ends
            FinalAttack(iFinalOdds);
            
        }
        
        //****************************************************************************
        //**********************REPLAY PROMPT AND VARIABLE RESET**********************
        //****************************************************************************
        
        else if(iActionType == 2) {                                                                                //If Array Compare Returned 2 You Die
            printf("\n\n*****************************************************************\n");
            printf("* You reach for a weapon and the dragon chomps you. You perish. *\n");
            printf("*****************************************************************\n\n");
        }
        else if(iActionType == 1) {  
            printf("\n\n*******************************************************************\n");                                                                               //If Array Compare Returns 3 You Die Diffrently
            printf("* The dragon is disgusted with you. It breathes fire. You perish. *\n");    
            printf("*******************************************************************\n\n");
        }
        else                                                                                                        //If Nothing Else Try Again
        {
            printf("Try Again\n");
            continue;                                                                                               //Restart Loop
        }  

        //Play again?
        printf("Play again? \tYes (1)\tNo (0)");                                                                    //Ask To Play Again
        scanf("%d", &iPlayAgain);                                                                                   //Collect User Input
        printf("\n\n\n****************************************\n\n\n");                                             //Print Break To Show Next Run
        
        
        //flush input buffer
        while((getchar()) != '\n');                                                                                 //Prevents Characters Input Buffer From Affecting Next Loop
        
        //Reset loop variables
        iWeaponNameLength = 0;                                                                                      //Reset Weapon Name Length
        iWeaponStats = 0;                                                                                           //Wipe Weapon Stats
        iFinalOdds = 0;                                                                                             //Reset Final Odds
    }
        
    return 0;
}


//******************************************************************************
//*************************User Defined Functions*******************************
//******************************************************************************



/********************************************************************************
 * Function: int ArrayCompare(char *cArray)
 * Coder: Adam Kuefler
 * Date: 10/12/2024
 * Purpose: Compares choice to options, returns match identity, or lack thereof
 * *****************************************************************************/
int ArrayCompare(char *cArray)
{
    //Variable Declaration
    char cOption1[11] = {"FEAR PUDDLE"};                                //Array 1 = FEAR PUDDLE
    char cOption2[11] = {"GRAB WEAPON"};                                //Array 2 = GRAB WEAPON
    char cOption3[11] = {"GRAB SHIELD"};                                //Array 3 = GRAB SHIELD
    int iCorrect1 = 0, iCorrect2 = 0, iCorrect3 = 0;                    //Int Counters For Matching Chars Between Input And Options
    int iIndex;                                                         //Loop Index Int
   
    //For each array option, check letter for match against known options, increment if match found
    for(iIndex = 0 ; iIndex < 11 ; iIndex++) {
        if(cOption1[iIndex] == cArray[iIndex]) iCorrect1 ++;            //If Option1 Char == Input Array Char Correct1 +1
        if(cOption2[iIndex] == cArray[iIndex]) iCorrect2 ++;            //If Option2 Char == Input Array Char Correct1 +2
        if(cOption3[iIndex] == cArray[iIndex]) iCorrect3 ++;            //If Option3 Char == Input Array Char Correct1 +3

        //printf("%d,%d,%d\n", iCorrect1, iCorrect2, iCorrect3);        //Debug Output
    }
    
    //If match, return result, else return 0 for no match
    if(iCorrect1 >= 9) return 1;                                        //If iCorrect1 Has 9 or more Chars Matching Return 1
    if(iCorrect2 >= 9) return 2;                                        //If iCorrect2 Has 9 or more Chars Matching Return 2
    if(iCorrect3 >= 8) return 3;                                        //If iCorrect3 Has 9 or more Chars Matching Return 3
    else return 0;                                                      //If None Of Them Meet The Requirment Return 0
}



/********************************************************************************
 * Function: int EncodeWeapon(int iAttribute, int iValue)
 * Coder: Adam Kuefler
 * Date: 10/12/2024(dd/mm/yyyy)
 * Purpose: To encode the various Stats into an integer (32 bit) in 
 * bits 1-4, 8-12, 16-20, and 24-28
 * 
 * MSB  XXXX    XXXX    XXXX    XXXX    XXXX    XXXX    XXXX    XXXX     LSB
 *              Type          Element        Attribute       Enchantment
 * 
 * *****************************************************************************/
int EncodeWeapon(int iAttribute, int iValue)
{   
    //Variable Declaration
    int iWeaponStats = 0;                                       //Output variable declaration
    
    switch(iAttribute){                                         //Depending on attribute, encode in defined position of int variable
        case 1:                                                 //When iAttribute = 1
            iWeaponStats = iValue << 24;                        //Shift 24 Bits Left
            break;
        case 2:                                                 //When iAttribute = 2
            iWeaponStats = iValue << 16;                        //Shift 16 Bits Left
            break;
        case 3:                                                 //When iAttribute = 3
            iWeaponStats = iValue << 8;                         //Shift 8 Bits Left
            break;
        case 4:                                                 //When iAttribute = 4
            iWeaponStats = iValue;                              //No Need To Shift Bits
            break;
    }
    // //Debug Outputs
    //PrintBinary(iWeaponStats);
    //printf("%d", iWeaponStats);

    return iWeaponStats;                                        //Return Weapon Stats
}
/***************************************************************************************
 * Function: int PrintWeapon(int iWeaponStats, int iWeaponNameLength, char *cWeaponName)
 * Coder: Adam Kuefler
 * Date: 10/12/2024(dd/mm/yyyy)
 * Purpose: To print the full name of the awesome weapon you designed
 **************************************************************************************/

int PrintWeapon(int iWeaponStats, int iWeaponNameLength, char *cWeaponName)
{
    //Variable Declarations
    int iType, iElement, iAttribute, iEchant;           //Ints for Weapon Type, Element, Attribute, And Enchantment
    int iFinalOdds = 0;                                 //Final Odds For Current Loop

    //Decode WeaponStats into Element, Type, ArrayName, "of", Attribute, Enchantment
    //Decode Element
    iElement = (iWeaponStats >> 16) &0xf;               //And WeaponStats With 1111 Setting All To 0 Except Least Significant Nibble And Store As Element
    
    //Print Elemental Based On Decoded Element Int
    switch(iElement) {
        case 0:
            printf("\n*** Non-magical ");
            break;
        case 1:
            printf("\n*** Fiery ");
            iFinalOdds++;
            break;
        case 2:
            printf("\n*** Icy ");
            iFinalOdds++;
            break;
        case 3:
            printf("\n*** Acidic ");
            iFinalOdds++;
            break;
        case 4:
            printf("\n*** Forceful ");
            iFinalOdds++;
            break;
        case 5:
            printf("\n*** Lightning ");
            iFinalOdds++;
            break;
        case 6:
            printf("\n*** Psychic ");
            iFinalOdds++;
            break;
    }
    //Decode Type
    iType = (iWeaponStats >> 24) &0xf;                  //And WeaponStats With 1111 Setting All To 0 Except Least Significant Nibble And Store As Type

    //Print Type Based On Decoded Type Int
    switch(iType) {
        case 0:
            printf("Useless ");
            break;
        case 1:
            printf("Thrown ");
            iFinalOdds++;
            break;
        case 2:
            printf("Bludgeoning ");
            iFinalOdds++;
            break;
        case 3:
            printf("Piercing ");
            iFinalOdds++;
            break;
        case 4:
            printf("Slashing ");
            iFinalOdds++;
            break;
    }
    

    //Weapon Name
    for(int iIndex = 0; iIndex < iWeaponNameLength; iIndex++) {     //Initalize iIndex = 0; While iIndex < iWeaponNameLength; Increment iIndex
        putchar(cWeaponName[iIndex]);                               //Output Current Array Position Char
    }

    //Print Of
    printf(" of ");                                                 //Print ' of '
    
    //Decode Attribute
    iAttribute = (iWeaponStats >> 8) &0xf;                          //And WeaponStats With 1111 Setting All To 0 Except Least Significant Nibble And Store As Attribute

    //Print Attribute Based On Decoded Attribute Int
    switch(iAttribute) {
        case 0:
            printf("Boring ");
            break;
        case 1:
            printf("Strong ");
            iFinalOdds++;
            break;
        case 2:
            printf("Agile ");
            iFinalOdds++;
            break;
        case 3:
            printf("Tough ");
            iFinalOdds++;
            break;
        case 4:
            printf("Intelligent ");
            iFinalOdds++;
            break;
        case 5:
            printf("Wise ");
            iFinalOdds++;
            break;
        case 6:
            printf("Charismatic ");
            iFinalOdds++;
            break;
    }
    
    //Decode Enchantment
    iEchant = (iWeaponStats >> 0) &0xf;                             //And WeaponStats With 1111 Setting All To 0 Except Least Significant Nibble And Store As Enchantment

    //Print Enchantment Based On Decoded Enchantment Int
    switch(iEchant) {
        case 0:
            printf("Dirt ***");
            break;
        case 1:
            printf("Luck ***");
            iFinalOdds++;
            break;
        case 2:
            printf("Holy Might ***");
            iFinalOdds++;
            break;
        case 3:
            printf("Dragon Slaying ***");
            iFinalOdds += 2;
            break;
        case 4:
            printf("Warm Hugs ***");
            iFinalOdds++;
            break;
        case 5:
            printf("Unicorns ***");
            iFinalOdds++;
            break;
        case 6:
            printf("Mythbusting ***");
            iFinalOdds++;
            break;
    }
    
    //End of statement delineation
    return iFinalOdds;                                              //Return Int Of Weapon Strength Againt Dragon
    
}


/********************************************************************************
 * Function: void FinalAttack(int )
 * Coder: Adam Kuefler
 * Date: 10/12/2024(dd/mm/yyyy)
 * Purpose: Takes input of final attack chance, determines result, outputs to terminal
 * *****************************************************************************/

void FinalAttack(int iDifficulty)
{   
    //Variable Declaration
    int iRandom = 0;                                    //Store Random Value (1-5)
    
    //Flavour text and determination of difficulty of the hit based on weapon choices
    switch(iDifficulty) {
        case 0:
            printf("\n\n**********************************************************\n");
            printf("* This will have to be the luckiest strike of your life. *\n");
            printf("**********************************************************\n");
            break;
        case 1:
            printf("\n\n*****************************************************\n");
            printf("* Chances are slim, but maybe this strike will work. *\n");
            printf("******************************************************\n");
            break;
        case 2:
            printf("\n\n*********************************************************************\n");
            printf("* Like the toss of a coin, you are unsure if this strike will land. *\n");
            printf("*********************************************************************\n");
            break;
        case 3:
            printf("\n\n***********************************************************************************\n");
            printf("* You feel as though there is a better than average chance of hitting the dragon. *\n");
            printf("***********************************************************************************\n");
            break;
        case 4:
            printf("\n\n************************************************\n");
            printf("* A strike on this dragon is extremely likely. *\n");
            printf("************************************************\n");
            break;
        case 5:
            printf("\n\n*********************************************************************************************************\n");
            printf("* The stars and the planets have aligned on this moment in time. You see the hit happen before it does. *\n");
            printf("*********************************************************************************************************\n");
            break;
    }
        //Generate random value for whether the strike hits 
        srand(time(NULL));
        iRandom = rand() % 5;
    
    if(iRandom <= iDifficulty)                          //If Weapon Value is >= Random Value
    {
        //Flavour text - User won!
        printf("\n\n***********************************************************************\n");
        printf("* Your weapon gloriously connects with the dragon.                    *\n");
        printf("* You feel it fall, with a loud thud.                                 *\n");
        printf("* As you step past the dragon, you see a mountain of gold and jewels. *\n");
        printf("* The dragon will not terrorize the nearby people any longer.         *\n");
        printf("***********************************************************************\n\n");

        printf("You Have Won.\n");
    }
    else                                                //If Weapon Value is <= Random Value
    {
        //Flavour text - User lost!
        printf("\n\n*********************************************************************\n");
        printf("* Your weapon fails to connect with the dragon.                     *\n");
        printf("* You feel it shift its weight and turn back toward you.            *\n");
        printf("* You turn slowly, just in time to see a massive jaw encompass you. *\n");
        printf("*********************************************************************\n\n");

        printf("You have lost this time, and some how didn't die.\n");
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



