#include <stdio.h>
void tablerev(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }

    int icnt = 0;
    for (icnt = 10; icnt >= 1; icnt--)
    {

        printf("%d\n",icnt*ino);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    tablerev(ivalue);

    return 0;
}