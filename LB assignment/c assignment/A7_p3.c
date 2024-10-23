#include <stdio.h>
int evenfactor(int ino)
{
    if (ino < 0)
    {
        ino = -ino;
    }
    int result = 1;
    int icnt = 0;

    for (icnt = 1; icnt <= ino; icnt++)
    {
        if ((icnt % 2) == 0)
        {
            result = result * icnt;
        }
    }
    return result;
}
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter number :");
    scanf("%d", &ivalue);

    iret = evenfactor(ivalue);
    printf("even factorial of number is: %d", iret);

    return 0;
}