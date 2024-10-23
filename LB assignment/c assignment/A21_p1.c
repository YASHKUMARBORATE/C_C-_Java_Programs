#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
bool check(int arr[], int ilen,int ino)
{
    int i = 0;
    for (i = 0; i < ilen; i++)
    {
        if (arr[i]  = ino)
        {
            return TRUE ;
        
        }
        else
        {
            return FALSE ;
        }
    }
}

int main()
{
    int isize = 0, icnt = 0,inum = 0;
    int *p = NULL;
   bool bret = FALSE;
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
scanf("%d",&inum);
    bret = check(p, isize,inum);

    if(bret==TRUE)
    {
        printf("number is present");
    }
    else
    {
      printf("number is not present");  
    }

    free(p);
    return 0;
}