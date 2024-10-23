#include <stdio.h>
void pattren(int ino)
{
    int icnt = 0;

    for (icnt = 1; icnt <= ino; icnt ++)

    {
        printf("#\t%d\t*\t",icnt);
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