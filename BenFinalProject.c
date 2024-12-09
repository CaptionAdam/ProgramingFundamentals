/******************************************************************************
Program: ELTR1102 Course Project
Coder: Ben Crossland
Date: 06/12/2024
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>  //to use toupper()
#include <stdlib.h> //to use rand() and srand()
#include <time.h>   //to use time()


//Function Declarations
int ArrayCompare(char *cArray);
void PrintBinary(int iIntegerInput);
int EncodeWeapon(int iAttribute, int iValue);
int PrintWeapon();
void FinalAttack(int iDifficulty);

int main()
{
// local variables
char cOptionArray[11], cOptionInput;
char cWeaponInput;
int iWeaponType, iWeaponElement, iWeaponAttribute, iWeaponEnchant;
int iWeaponCharacteristics;
int index = 0, iOption;
int iDifficulty = 1;
int iPlayAgain = 1;

// MAIN CODE
while(iPlayAgain){
char cWeaponName[20] = {0}; // decalring weapon name array because of a funky bug that does something some how and im not sure what
    //*************************************************************
    //********************Intro Scene/Choice***********************
    //*************************************************************
        
    //Descriptive text, setting scene
    printf("You have reached the final room of the dungeon.\nA large dragon stands before you.\nIt is beyond massive.\nYou see a weapon and a shield on the floor.\nWhat do you do?\n");
        
    //Prompt for choice
    printf("(FEAR PUDDLE)\t(GRAB WEAPON)\t(GRAB SHIELD)\n");

    //Get input text
    while ((cOptionInput = getchar()) != '\n') {
        cOptionArray[index] = toupper(cOptionInput); // capatalize all characters in the word
        index++;
    }
    index = 0; // reset index for next use
        
    //Compare input text to options
    iOption = ArrayCompare(cOptionArray);
        
    // checking to continue program based off user option input
    if (iOption == 0) printf("\nYou failed to act, and perished.");
        
    else if(iOption == 1) printf("\nThe dragon is disgusted with you. It breathes fire. You perish.");
        
    else if (iOption == 2) printf("\nYou reach for a weapon and the dragon chomps you. You perish."); 
        
    else if (iOption == 3){ // proceeds to rest of program
            
    //***************************************************************************
    //************************Weapon Choices*************************************
    //***************************************************************************
            
            
    //*******************WEAPON NAME*********************************************
            
    //Flavour text and prompt for choice of weapon (Direct input character array)
    printf("\n\nYou reach for a shield and protect yourself from the dragon's attack.\nWith the benefit of the shield's protection, you reach for a weapon.\n");
    printf("What type of weapon do you grab? (20 characters max): ");
            
    //Get input text
    while ((cWeaponInput = getchar()) != '\n') {
        cWeaponName[index] = toupper(cWeaponInput); // capatalize all characters in the word
        index++;
    }
    index = 0; // reset index for next use
            
    
            
    //******************WEAPON TYPE************************************************
            
            
    //Flavour text and prompt for choice of weapon type
    printf("\n\n\nAhh, you have chose a weapon that is perfect for:\n");
    printf("Throwing(1), Bludgeoning(2), Piercing(3), Slashing(4)?: ");
    scanf("%d", &iWeaponType);
            
    //If input is not within range, give flavour text and store as 0
    if (iWeaponType < 1 || iWeaponType > 4){
        printf("\n\n\nSo, you have chosen a useless weapon...Best of luck.");
        iWeaponType = 0;
    }
    // setting difficulty for FinalAttack()
    else iDifficulty += 25; 
    
    //Delineation for readability
            
    //Encode weapon type within int variable
    iWeaponCharacteristics |= EncodeWeapon(1, iWeaponType); // ors the output of encodeweapon() into a 32 bit int variable
            
    //*****************WEAPON ELEMENT**********************************************
            
            
    //Flavour text and prompt for choice of weapon element
    printf("\n\n*************************************************");
    printf("\n\nYou notice this weapon is imbued with magic.\nWhat natural element does your weapon possess?");
    printf("\nFire  (1)\tIce (2)\t\tAcid (3)\nForce (4)\tLightning (5)\tPsychick (6)\n");
    scanf("%d", &iWeaponElement);        
    
    //If input is not within range, give flavour text and store as 0
    if (iWeaponElement < 1 || iWeaponElement > 6){
        printf("\n\n\nOh, you must have been mistaken. This weapon is not magical.");
        iWeaponElement = 0;
    }
    // setting difficulty for FinalAttack()
    else iDifficulty += 25; 
    
    //Encode weapon element within int variable
    iWeaponCharacteristics |= EncodeWeapon(2, iWeaponElement); // ors the output of encodeweapon() into a 32 bit int variable
    
    //******************WEAPON ATTRIBUTE********************************************
            
            
    //Flavour text and prompt for choice of weapon attribute
    printf("\n\n*************************************************");
    printf("\n\nWhen you hold this weapon, you feel");
    printf("\nStronger (1)\tMore Agile (2)\tTougher (3)\nSmarter  (4)\tWiser (5)\tMore Charismatic (6)\n");
    scanf("%d", &iWeaponAttribute);        
    
    //If input is not within range, give flavour text and store as 0
    if (iWeaponAttribute < 1 || iWeaponAttribute > 6){
        printf("\n\n\nHuh, it was a fleeting feeling.  How boring.");
        iWeaponAttribute = 0;
    }
    // setting difficulty for FinalAttack()
    else iDifficulty += 25; 
    
    //Encode weapon attribute within int variable
    iWeaponCharacteristics |= EncodeWeapon(3, iWeaponAttribute); // ors the output of encodeweapon() into a 32 bit int variable
    
    //*******************WEAPON ENCHANTMENT******************************************
            
            
    //Flavour text and prompt for choice of weapon enchant
    printf("\n\n*************************************************");
    printf("\n\nThere appears to be a symbol on the weapon.\nWhat symbol is upon it?");
    printf("\nHorseshoe (1)\t\tGoldy Representation (2)\tDragon (3)\nOutstretched Arms (4)\tSpiral Horn (5)\t\t\tWalrus man (6)\n");
    scanf("%d", &iWeaponEnchant);        
    
    //If input is not within range, give flavour text and store as 0
    if (iWeaponEnchant < 1 || iWeaponEnchant > 6){
        printf("\n\n\nIt seems to have been a smudge of dirt.  You disappointedly wipe it off.");
        iWeaponEnchant = 0;
    }
    // setting difficulty for FinalAttack()
    else if (iWeaponEnchant == 3) iDifficulty += 50; // if dragon is selected
    else iDifficulty += 20; // if anything else is selected
        
    
    //Encode weapon enchantment within int variable
    iWeaponCharacteristics |= EncodeWeapon(4, iWeaponEnchant); // ors the output of encodeweapon() into a 32 bit int variable
    
    //******************************************************************************
    //********************CONFRONTATION WITH THE DRAGON*****************************
    //******************************************************************************
            
            
    //Flavour text
    printf("\n\n*************************************************");
    printf("\n\nYou hold your weapon outstretched towards the dragon.\nIt looks in your direction, and lunges towards you.\nYou see an opportunity and sidestep the attack.\nAs the dragon's head passes, you come down on it with the full might of your\n\n");        
            
    //Determination of attack chance of success based on encoded weapon int variable
    PrintWeapon(iWeaponCharacteristics, cWeaponName);    
            
            
    //The final attack resolves, and adventure ends
    FinalAttack(iDifficulty);     
            
    }
        
    //****************************************************************************
    //**********************REPLAY PROMPT AND VARIABLE RESET**********************
    //****************************************************************************
        
    //Play again?
    printf("\n\nPlay again? \tYes (1)\tNo (0) ");
    scanf("%d", &iPlayAgain);
    printf("\n\n\n****************************************\n\n\n");
        
        
    //flush input buffer
    while((getchar()) != '\n');     //Prevents characters in input buffer from affecting next loop
        
    //Reset loop variables
    iDifficulty = 0;
    index = 0;
}
        
    return 0;
}


//******************************************************************************
//*************************User Defined Functions*******************************
//******************************************************************************



/********************************************************************************
 * Function: Array Compare
 * Coder: Ben Crossland
 * Date: 1/12/2024
 * Purpose: Compares choice to options, returns match identity, or lack thereof
 * *****************************************************************************/
int ArrayCompare(char *cArray){
// Local Variables
char cOption1[11] = "FEAR PUDDLE"; // char array for each option
char cOption2[11] = "GRAB WEAPON"; // ^
char cOption3[11] = "GRAB SHIELD"; // ^
int iCorrect1 = 0, iCorrect2 = 0, iCorrect3 = 0; // counters for each option
int index = 0;
// Function Code

    //For each array option, check letter for match against known options, increment if match found
    while (index < 11){ //runs through array
        if (cOption1[index] == cArray[index]) iCorrect1++; // option 1 check
        
        if (cOption2[index] == cArray[index]) iCorrect2++; // option 2 check
        
        if (cOption3[index] == cArray[index]) iCorrect3++; // option 3 check
        
        index++;
    }
    
    //If match(allowing for 1 error), return result, else return 0 for no match
    if (iCorrect1 >= 10) return 1;
    
    else if (iCorrect2 >= 10) return 2;
    
    else if (iCorrect3 >= 9) return 3;// allows 2 errors because shield and sheild
    
    else return 0;
}


/********************************************************************************
 * Function: EncodeWeapon
 * Coder: Ben Crossland
 * Date: 05/12/2024
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
int iWeaponCharacteristics = 0;
    
//Depending on attribute, encode in defined position of int variable
switch(iAttribute){
    case 1:
        iWeaponCharacteristics = iValue << 24; // shift bits 24 places left
        break;
    case 2:
        iWeaponCharacteristics = iValue << 16; // shift bits 16 places left
        break;
    case 3:
        iWeaponCharacteristics = iValue << 8; // shift bits 8 places left
        break;
    case 4:
        iWeaponCharacteristics = iValue << 0; // shift bits 0 places left
        break;
}

return iWeaponCharacteristics; // returns a 32 bit int with ivalue stored within it
}

/********************************************************************************
 * Function: PrintWeapon
 * Coder: Ben Crossland
 * Date: 05/12/2024
 * Purpose: To print the full name of the awesome weapon you designed
 * *****************************************************************************/

int PrintWeapon(int iWeaponCharacteristics, char *cWeaponName)
{
//Variable Declarations
int iType, iElement, iAttribute, iEnchant;
int index = 0;
//Delineation for readability
    
//Decode weapon into Element, Type, ArrayName, "of", Attribute, Enchantment
//Decode Element
iElement = (iWeaponCharacteristics >> 16) &0xf; // and it with 1111 to set everything but first nibble to 0
    
    switch(iElement){ // output text based on element choice
        case 0:
            printf("Non-magical ");
            break;
        case 1:
            printf("Fiery ");
            break;
        case 2:
            printf("Icy ");
            break;
        case 3:
            printf("Acidic ");
            break;
        case 4:
            printf("Forceful ");
            break;
        case 5:
            printf("Lightning ");
            break;
        case 6:
            printf("Psychic ");
            break;
    }
    
    //Decode Type
    iType = (iWeaponCharacteristics >> 24) &0xf; // and it with 1111 to set everything but first nibble to 0
    
    switch(iType){ // output text based on weapon type
        case 0:
            printf("Useless ");
            break;
        case 1:
            printf("Thrown ");
            break;
        case 2:
            printf("Bludgeoning ");
            break;
        case 3:
            printf("Piercing ");
            break;
        case 4:
            printf("Slashing ");
            break;
    }
    //Weapon Name
    while (index <= 20){
        printf("%c", cWeaponName[index]);
        index++;
    }

    //Of
    printf(" of ");
    
    //Decode Attribute
    iAttribute = (iWeaponCharacteristics >> 8) &0xf; // and it with 1111 to set everything but first nibble to 0
    
    switch(iAttribute){ // output text based on attribut of weapon
        case 0:
            printf("Boring ");
            break;
        case 1:
            printf("Strong ");
            break;
        case 2:
            printf("Agile ");
            break;
        case 3:
            printf("Tough ");
            break;
        case 4:
            printf("Intelligent ");
            break;
        case 5:
            printf("Wise ");
            break;
        case 6:
            printf("Charismatic ");
            break;
    }
    //Decode Enchantment
    iEnchant = (iWeaponCharacteristics >> 0) &0xf; // and it with 1111 to set everything but first nibble to 0
    
    switch(iEnchant){ // output text based on weapons enchant
        case 0:
            printf("Dirt ");
            break;
        case 1:
            printf("Luck");
            break;
        case 2:
            printf("Holy Might");
            break;
        case 3:
            printf("Dragon Slaying");
            break;
        case 4:
            printf("Warm Hugs ");
            break;
        case 5:
            printf("Unicorns ");
            break;
        case 6:
            printf("Mythbusting ");
            break;
    }
    
}


/********************************************************************************
 * Function: FinalAttack
 * Coder: Ben Crossland
 * Date: 06/12/2024
 * Purpose: Takes input of final attack chance, determines result, outputs to terminal
 * *****************************************************************************/

void FinalAttack(int iDifficulty)
{
int iRandom = 0; 
    
//Flavour text based off difficulty of the hit from weapon
if (iDifficulty == 1) printf("\n\nThis will have to be the luckiest strike of your life.");
else if (iDifficulty == 25 || iDifficulty == 20) printf("\n\nChances are slim, but maybe this strike will work.");
else if (iDifficulty == 50 || iDifficulty == 45) printf("\n\nLike the toss of a coin, you are unsure if this strike will land.");
else if (iDifficulty == 75 || iDifficulty == 70) printf("\n\nYou feel as though there is a better than average chance of hitting the dragon.");
else if (iDifficulty == 95) printf("\n\nA strike on this dragon is extremely likely.");
else if (iDifficulty == 100) printf("\n\nThe stars and the planets have aligned on this moment in time. You see the hit happen before it does.");

//Generate random value for whether the strike hits 
srand(time(NULL)); 
iRandom = (rand() % (100)); // between 0 - 100

    
if(iRandom <= iDifficulty) // if iRandom is smaller you win
{
    //Flavour text - User won!
    printf("\n\nYour weapon gloriously connects with the dragon.\nYou feel it fall, with a loud thud.\nAs you step past the dragon, you see a mountain of gold and jewels.\nThe dragon will not terrorize the nearby people any longer.");
    printf("\n\nYou have won.");
}
else
{
    //Flavour text - User lost!
    printf("\n\nYour weapon fails to connect with the dragon.\nYou feel it shift its weight and turn back toward you.\nYou turn slowly, just in time to see a massive jaw encompass you.");
    printf("\n\nYou have lost this time.");    
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