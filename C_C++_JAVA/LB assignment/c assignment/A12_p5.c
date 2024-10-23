#include <stdio.h>
void pattren(int ino)
{
    int icnt = 0;

    for (icnt = 1; icnt <= ino; icnt ++)

    {
        printf("%d\t",icnt*2);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    pattren(ivalue);
    return 0;
}