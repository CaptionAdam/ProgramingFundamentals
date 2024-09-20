#include <stdio.h>
int iDate1[3];
int iDate1OUT;
int iDate2[3];
int iDate2OUT;
int main() {
    printf("Enter first date (DD/MM/YYYY): "); scanf("%d/%d/%d", &iDate1[0], &iDate1[1], &iDate1[2]);
    printf("Enter second date (DD/MM/YYYY): "); scanf("%d/%d/%d", &iDate2[0], &iDate2[1], &iDate2[2]);
    iDate1OUT = iDate1[0] + (iDate1[1] * 100) + (iDate1[2] * 10000); iDate2OUT = iDate2[0] + (iDate2[1] * 100) + (iDate2[2] * 10000);
    if(iDate1OUT > iDate2OUT) {printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate2[0], iDate2[1], iDate2[2], iDate1[0], iDate1[1], iDate1[2]);}
    else if (iDate1OUT == iDate2OUT) {printf("\n%d/%d/%d is the same day %d/%d/%d\n", iDate1[0], iDate1[1], iDate1[2], iDate2[0], iDate2[1], iDate2[2]);}
    else{printf("\n%d/%d/%d occurs before %d/%d/%d\n", iDate1[0], iDate1[1], iDate1[2], iDate2[0], iDate2[1], iDate2[2]);}   
    return 0; }
