#include <stdio.h>
void pattren(int ino)
{
    int icnt = 0;

    for (icnt = ino; icnt >= 1; icnt --)

    {
        printf("%d\t#\t",icnt);
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