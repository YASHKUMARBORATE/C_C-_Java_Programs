#include <stdio.h>
void table(int ino)
{
    if(ino<0)
    {
        ino = -ino;
    }

    int icnt = 0;
    for (icnt = 1; icnt <= 10; icnt++)
    {

        printf("%d\n",icnt*ino);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    table(ivalue);

    return 0;
}