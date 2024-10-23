#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int ilen)
{
    int i = 0;
    for (i = 0; i < ilen; i++)
    {
      if((arr[i]>100)&&(arr[i]<999))  
      {
        printf("%d\n",arr[i]);
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

   display(p, isize);
    printf("\n");

    free(p);
    return 0;
}