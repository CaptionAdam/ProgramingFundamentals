/******************************************************************************
Program: Negative to Positive transition in binary
Coder: Cory Thorp
Date: No thanks, I'm washing my hair that night
Program purpose: To illustrate the way that int/char variables are stored in 
binary, and show the transition from positive to negative. 


*******************************************************************************/
#include <stdio.h>

//Function Declaration
void PrintBinary (char cByteChar);      

int main ()
{
    
    //Variable declarations
    char cNumber = -128;      //Max negative value for character variable



    //Functional loop
    for (; cNumber <= +127; cNumber++)        //Loop, runs through values char is capable of
    {
        PrintBinary (cNumber);    //Calls PrintBinary function to output value in binary
        if (cNumber == 127) break;       //Stops loop at 127 so it doesn't run forever
    }

    
    //Demonstrate adding one more to value
    printf ("\nNow, let's add 1 more\n");   //Print prompt
    cNumber++;                              //Add 1 to value
    PrintBinary (cNumber);                  //Output to terminal

    return 0;
}


//User Defined Function Definitions

/********************************************************************************
 * Function: PrintBinary(char cByteChar)
 * Coder: Cory Thorp
 * Date: No thanks, I'm full
 * *****************************************************************************/
void PrintBinary (char cByteChar)
{
  char cSteps = 0;

  //Output in binary format
  printf (" 0b");
  for (int iIndex = 7; iIndex >= 0; iIndex--)	//Start at MSB
    {
      cSteps = cByteChar >> iIndex;	//shift bytes to right by current value in index
      if (cSteps & 0x01)
	printf ("1");		//if cstep bitwise and with 0b00000001 is true, print 1
      else
	printf ("0");		//otherwise print a 0
    }
  printf ("  Current value is %i \n", cByteChar);



}