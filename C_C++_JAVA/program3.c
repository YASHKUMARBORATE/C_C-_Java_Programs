// problem statement : accept 2 number from user and perform its addition
#include <stdio.h>
int main()
{
    // int i,j,k;
    int iValue1 =0, iValue2 = 0;
    int iResult =0;

    printf("enter the 1st no\n:");
    scanf("%d", &iValue1);

    printf("enter the 2st no\n:");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;

    printf("addition is:%d", iResult);
    return 0;
}