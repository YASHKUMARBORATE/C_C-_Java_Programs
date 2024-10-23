#include <stdio.h>
#include <stdlib.h>

void digitssum(int arr[], int ilen)
{
    int i = 0, isum = 0;
    for (i = 0; i < ilen; i++)
    {
        while (ilen > 0)
        {
            isum += arr[i] % 10;
            printf("%d", isum);
            arr[i] /= 10;
        }
    }
}

int main()
{
    int isize = 0, icnt = 0, iret = 0;
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

    digitssum(p, isize);
    printf("\n");

    free(p);
    return 0;
}