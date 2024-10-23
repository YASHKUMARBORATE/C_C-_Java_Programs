#include <stdio.h>
void oddDisplay(int ino)
{
    int icnt = 0;
    for (icnt = 1; icnt <= ino; icnt++)
    {
        if ((icnt % 2) != 0)
        {
            printf("%d\t", icnt);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    oddDisplay(ivalue);

    return 0;
}