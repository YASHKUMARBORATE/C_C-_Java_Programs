#include <stdio.h>
int rangesum(int istart, int iend)
{

    if ((istart > iend) || (istart < iend))
    {
        printf("invalid range");
    }
    int icnt = 0;
    int isum = 0;
    for (icnt = istart; icnt <= iend; icnt++)
    {
        isum = isum + icnt;
    }
    return isum;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, iret = 0;

    printf("enter starting  point:");
    scanf("%d", &ivalue1);

    printf("enter ending point:");
    scanf("%d", &ivalue2);

    iret = rangesum(ivalue1, ivalue2);

    printf("addition is %d", iret);

    return 0;
}