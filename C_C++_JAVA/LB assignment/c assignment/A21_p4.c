#include <stdio.h>
#include <stdlib.h>

void rang (int arr[], int ilen, int ino1,int ino2)
{
    int i = 0;
    for (i = 0; i < ilen; i++)
    {
        if ((arr[i]>ino1)&&(arr[i]<ino2))
        {
          printf("%d\t",arr[i]);
        }
    }
  
}

int main()
{
    int isize = 0, icnt = 0, start = 0,end = 0;
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
    printf("enter starting number that you search:");
    scanf("%d", &start);

     printf("enter ending number that you search:");
    scanf("%d", &end);
    
 rang(p, isize,start,end);
   

    free(p);
    return 0;
}