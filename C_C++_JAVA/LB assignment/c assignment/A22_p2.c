#include <stdio.h>
#include <stdlib.h>

int minimum(int arr[], int ilen)
{
    int i = 0, mini = arr[i];
    for (i = 0; i < ilen; i++)
    {
        if(arr[i] < mini)
      mini = arr[i];
    }
    return mini ;
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

    iret = minimum(p, isize);
printf("\n");
    printf("minimum number :%d\n", iret);
    free(p);
    return 0;
}