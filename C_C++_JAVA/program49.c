#include <stdio.h>
int factorial(int ino)
{
    int icnt = 0;
    unsigned int ifact = 1;
    icnt = 1;
    while (icnt <= ino)
    {
        ifact = ifact * icnt;
        icnt++;
    }

    return ifact;
}

int main()
{
    int ivalue = 0;
    unsigned long int iret = 0;
    printf("enter the number:");
    scanf("%d", &ivalue);

    iret = factorial(ivalue);

    printf("factorial is:%lu\n", iret);
    return 0;
}