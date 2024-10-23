#include<stdio.h>
int factoial(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }
    int sum = 1;
    int icnt = 0;
    for(icnt = 1;icnt <=ino;icnt++)
    {
    sum = sum * icnt;
    }
    return sum;
}
int main()
    {
        int ivalue = 0,iret = 0;

        printf("enter number:");
        scanf("%d", &ivalue);

        iret = factoial(ivalue);

        printf("factorial of number is :%d",iret);

        return 0;
    }