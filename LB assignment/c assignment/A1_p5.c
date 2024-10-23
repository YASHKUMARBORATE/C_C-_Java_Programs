#include<stdio.h>

void accept(int ino)
{int icnt = 0;
    for(icnt = 1;icnt<=ino;icnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int ivalue = 0;
    ivalue = 5;

    accept(ivalue);
    return 0;
}