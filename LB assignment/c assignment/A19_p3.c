#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int ilen)
{
    printf("\n");
    int i = 0;
    for (i = 0; i < ilen; i++)
    {
        if((arr[i] % 2 == 0)&&(arr[i] % 5 == 0))
        {
           printf("%d\t",arr[i]);
        }
    }
}

int main()
{
    int isize = 0, iret = 0, icnt = 0;
    int *p = NULL;

    printf("enter number of elements:\n");
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

 display(p, isize);

 

    free(p);
    return 0;
}