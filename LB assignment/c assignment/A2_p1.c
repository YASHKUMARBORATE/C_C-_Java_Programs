#include <stdio.h>

void display(int ino)

{
    int icnt = 1;

    if (ino < 0)
    {
        ino = -ino;
    }

    while (icnt <= ino)
    {
        printf("*\n");
        icnt++;
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    display(ivalue);
    return 0;
}