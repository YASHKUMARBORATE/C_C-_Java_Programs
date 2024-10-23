#include <stdio.h>
void rangedisplay(int istart, int iend)
{
    if (istart > iend)
    {
        printf("invalid range");
    }
    int icnt = 1;
    for (icnt = istart; icnt <= iend; icnt++)
    {
        if(icnt % 2 == 0)
        {
            printf("%d\t", icnt);
        }
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("enter starting  point:");
    scanf("%d", &ivalue1);

    printf("enter ending point:");
    scanf("%d", &ivalue2);

    rangedisplay(ivalue1, ivalue2);

    return 0;
}