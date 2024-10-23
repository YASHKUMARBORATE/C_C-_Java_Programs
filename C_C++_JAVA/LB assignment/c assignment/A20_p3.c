#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool check(int arr[], int ilen)
{
    int i = 0, icount = 0;
    for (i = 0; i < ilen; i++)
    {
        if (arr[i] == 11)
        {
            return TRUE ;
            break;
        }
        else
        {
         return FALSE ;
        }
    }
 return icount;
}

int main()
{
    int isize = 0,icnt = 0;
   bool  bret = FALSE;
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

    bret = check(p, isize);
if(bret==TRUE)
{
   printf("11 is present"); 
}
else
{
    printf("11 is absent");    
}


    free(p);
    return 0;
}