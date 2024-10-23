#include <stdio.h>
void multiple(int ino)
{
    int icnt = 0;
    for (icnt = 1; icnt <= 5; icnt++)
    {

        printf("%d\n",icnt*ino);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number:");
    scanf("%d", &ivalue);

    multiple(ivalue);

    return 0;
}