/******************************************************************************

Program: Lecture 6 Practice
Coder:
Date:
Purpose: Assortment of activities appropriate to Lecture 6

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    //local variables
    int iInteger = 0;
    volatile unsigned int iUInteger = 0;
    short int iSInteger = 0;
    unsigned short int iUSInteger = 0;
    long int iLInteger = 0;
    unsigned long int iULInteger = 0;
    
    

    
    //****************Character Data Types*******************
    
    
    //Display of character data types.  Play around with it!
    
    //Local variables
    char cCharacter = 0;
    
    //Prompt for numeric character input
    printf("\n\nPlease enter a single digit number on your keyboard: "); 
    
    
    cCharacter = getchar();
    printf("\n\ncCharacter is the character %c", cCharacter);               //Output numberic character
    printf("\ncCharacter has a hex value of %x", cCharacter);               //Output hex value of character
    printf("\ncCharacter has a dec value of %d", cCharacter);               //Output dec value of character
    cCharacter -= 0x30;
    printf("\ncCharacter has a decimal value of %d after subtracting 0x30", cCharacter);    //subtract 0x30 and output decimal value of converted character
    
    
    //What did you notice about how this conversion worked?  How could it be useful to you?
    
    
    
    
    
    
    //Space-counting program.  Play around with it!
    
    // //Local variables
    // char cInput; 
    // int iSpaceCount= 0;
    
    // //prompt for user input
    // printf("\n\nPlease enter a sentence:  ");
    // do
    // {
    //     cInput = getchar();                 //take input character
    //     if(cInput == ' ')iSpaceCount++;     //increment if space pressed
    // }while(cInput != '\n');                 //continue until enter pressed
    
    // //output to terminal
    // printf("You have entered a sentence with %d spaces.", iSpaceCount);
    
    //Do you have any observations about this program and how it operates?
    
    
    
    
    //putchar() function introduction
    
    // //Local variables
    // char cInput2;
    
    // //Prompt for user input
    // printf("Please enter a sentence: ");
    
    // do
    // {
    //     cInput2 = getchar();        //take user input
    //     putchar(cInput2);           //print character from buffer to terminal after enter pressed
    // }while(cInput2 != '\n');
    
    //Do you have any observations about this program and how it operates?
    
    
    
    
    
    
    //Number entry program
    
    // //Local variables
    // char cInput3 = 0;
    
    // //Prompt for user input
    // printf("Please enter a number between 0 and 9: ");
    
    // cInput3 = getchar();
    // if((cInput3 <= 0x39)&&(cInput3 >= 0x30))
    // {
    //     cInput3 -= 0x30;
    //     printf("Your number is %d", cInput3);
    // }
    // else printf("Wow, couldn't even enter a number between 0 and 9.  Sad.");
    
    
    //What did you notice about how this program operates?  
    
    
    
    //What happens if you enter a number larger than 9?
    
    
    
    //What does this tell you about how getchar() takes values?
    
    
    
    
    
 
    
    //Congratulations on finishing Part 3 of your theory practice.  On to part 4.

    return 0;
}