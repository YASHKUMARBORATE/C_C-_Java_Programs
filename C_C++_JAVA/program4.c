// problem statement : accept 2 number from user and perform its addition
#include <stdio.h>
int main()
{
    // int i,j,k;
    float fValue1 =0.0, fValue2 = 0.0;
    float fResult =0.0;

    printf("enter the 1st no\n:");
    scanf("%f", &fValue1);

    printf("enter the 2st no\n:");
    scanf("%f", &fValue2);

    fResult = fValue1 + fValue2;

    printf("addition is:%0.2f", fResult);
    return 0;
}