#include <stdio.h>
#include <stdlib.h>

int difference(int arr[], int ilen)
{
    int i = 0, max = 0,mini = arr[i],diff = 0;
    for (i = 0; i < ilen; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < mini)
        {
         mini = arr[i];
        }
        diff = max - mini ;
    }
    return diff ;
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

    iret = difference(p, isize);
    printf("\n");
    printf("difference is :%d\n", iret);
    free(p);
    return 0;
}