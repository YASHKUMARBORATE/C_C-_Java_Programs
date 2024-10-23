#include <stdio.h>
void pattren(int irow,int icol)
{
    int j ,i= 0;
char ch = '\0';

    for (i = 1; i<= irow; i++)
    {
         for (j = 1,ch = 'A'; j <= icol; j++,ch++)
         {
            printf("%c\t",ch); 
         }
         printf("\n");
    }
}
int main()
{
    int ivalue1,ivalue2 = 0;
    printf("enter row and colunm:");
    scanf("%d %d", &ivalue1,&ivalue2);

    pattren(ivalue1,ivalue2);
    return 0;
}