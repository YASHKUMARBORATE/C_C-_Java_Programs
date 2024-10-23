#include <stdio.h>
#include <stdlib.h>

int lastocc(int arr[], int ilen, int ino)
{
    int i = 0, icount = -1;
    for (i = 0; i < ilen; i++)
    {
        if (arr[i] == ino)
        {
            icount = i;
        }
    }
    return icount;
}

int main()
{
    int isize = 0, icnt = 0, inum = 0;
    int *p = NULL;
    int iret = 0;
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
    printf("enter number that you search:");
    scanf("%d", &inum);
    iret = lastocc(p, isize, inum);
    if (iret == -1)
    {
        printf("%d number is not occ", iret);
    }
    else
    {
        printf("%d number is occ", iret);
    }

    free(p);
    return 0;
}