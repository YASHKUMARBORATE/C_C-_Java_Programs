#include<stdio.h>
int factorial(int ino)
{
    int icnt = 0;
   int ifact = 1;
    for(icnt = 1;icnt<=ino;icnt++)
    {
    ifact = ifact * icnt;
    }
    return ifact;
}

int main()
{
    int ivalue = 0;
    int iret = 0;
    printf("enter the number:");
    scanf("%d",&ivalue);

iret = factorial(ivalue);

printf("factorial is:%d\n",iret);
    return 0;
}