
/******************************************************************************
ascii converter
*******************************************************************************/
#include <stdio.h>

int main()

{
// VARIABLES
char cVariable;
int iVariable;
int iOption;

// MAIN CODE
    printf("char in(1), decimal in(2), hexidecimal in(3): "); scanf("%d\n", &iOption);
    if (iOption == 1){
    printf("Char: "); cVariable = getchar();
    printf("decimal: %d\n", cVariable);
    printf("hexidecimal %x\n", cVariable);
    }
    else if(iOption == 2){
    printf("number: "); scanf("%d\n", &iVariable);
    printf("decimal: %c\n", iVariable);
    printf("hexidecimal %x\n", iVariable);
    }
    else if(iOption == 3){
    }
    return 0;
}
