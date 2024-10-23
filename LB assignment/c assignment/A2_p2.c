#include <stdio.h>

void display(int ino)

{

    if (ino < 0)
    {
        ino = -ino;
    }
    int icnt = ino;
    while (icnt > 0)
    {
        printf("*\n");
        icnt--;
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