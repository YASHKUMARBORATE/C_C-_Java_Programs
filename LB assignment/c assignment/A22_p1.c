#include <stdio.h>
#include <stdlib.h>

int maximum(int arr[], int ilen)
{
    int i = 0, max = 0;
    for (i = 0; i < ilen; i++)
    {
        if(arr[i] > max)
      max = arr[i];
    }
    return max ;
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

    iret = maximum(p, isize);
printf("\n");
    printf("maximum number :%d\n", iret);
    free(p);
    return 0;
}