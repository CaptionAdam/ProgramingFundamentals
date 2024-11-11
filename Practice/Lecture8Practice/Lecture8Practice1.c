/******************************************************************************
Program: Lecture 7 Practice
Coder:
Date:
Purpose: Part 1 of activities appropriate to Lecture 7
*******************************************************************************/
#include <stdio.h>

//This program serves to show you a simple example of a User-Defined Function in C
//Feel free to play around with it.  
//What can you do to it that breaks it?  
//What can you do to it that improves it?


// v function declaration
float AreaOfRectangle(float fLength, float fWidth);
float VolumeOfCube(float fLength, float fWidth, float fHeight);

int main()
{
    //variable declaration
    float fFrontRectangleArea = 0;
    float fSideRectangleArea = 0;
    float fTopRectangleArea = 0;
    float fCubeVolume = 0;
    float fCubeLength = 0;
    float fCubeWidth = 0;
    float fCubeHeight = 0;
                   // v Function call // v Function arguments
    printf("Enter Length, Width, and Height of your Cube(L,W,H): ");
    scanf("%f,%f,%f", &fCubeLength, &fCubeWidth, &fCubeHeight);

    fFrontRectangleArea = AreaOfRectangle(fCubeWidth, fCubeHeight);
    fSideRectangleArea = AreaOfRectangle(fCubeLength, fCubeHeight);
    fTopRectangleArea = AreaOfRectangle(fCubeLength, fCubeWidth);
    fCubeVolume = VolumeOfCube(fCubeLength, fCubeWidth, fCubeHeight);

    
    printf("Your Cube has a frontal area of %.2f units\n", fFrontRectangleArea);   //Terminal output
    printf("Your Cube has a side area of %.2f units\n", fSideRectangleArea);   //Terminal output
    printf("Your Cube has a footprint of %.2f units\n", fTopRectangleArea);   //Terminal output
    printf("Your Cube has an Volume of %.2f units\n", fCubeVolume);   //Terminal output

    return 0;
}

/**********************************************************************
 * Function: float AreaOfRectangle(float fLength, float fWidth)
 * Coder: Cory Thorp
 * Date: 08/25/2022
 * Purpose: To calculate the area of a rectangle based on inputs
 * ********************************************************************/
 float AreaOfRectangle(float fLength, float fWidth)     //function header
 {                      // ^function parameters
     return fLength * fWidth;                       // } function definition (or body)
 }
 
/**********************************************************************
 * Function: float AreaOfCube(float fLength, float fWidth, float fHeight)
 * Coder: Adam Kuefler
 * Date: 31/10/2022
 * Purpose: To calculate the Volume of a Cube based on inputs
 * ********************************************************************/
 float VolumeOfCube(float fLength, float fWidth, float fHeight)     //function header
 {                      // ^function parameters
     return fLength * fWidth * fHeight;                       // } function definition (or body)
 }
 
