#include <stdio.h>
#include <stdlib.h>

int difference(int arr[], int ilen)
{
    int i = 0, icount1 = 0, icount2 = 0, diff = 0;
    for (i = 0; i < ilen; i++)
    {
        if (arr[i] % 2 == 0)
        {
            icount1 = icount1 + arr[i];
        }
        else
        {
            icount2 = icount2 + arr[i];
        }
        diff = icount1 - icount2;
    }
    return diff;
}

int main()
{
    int isize = 0, iret = 0, icnt = 0;
    int *p = NULL;

    printf("enter number of elements:");
    scanf("%d", &isize);

    p = (int *)malloc(isize * sizeof(int));

    if (p == NULL)
    {
        printf("unalbe to allocate memory");
        return -1;
    }
    printf("enter elements:\n");
    for (icnt = 0; icnt < isize; icnt++)
    {
        scanf("%d", &p[icnt]);
    }

    iret = difference(p, isize);

    printf("result is:%d", iret);

    free(p);
    return 0;
}