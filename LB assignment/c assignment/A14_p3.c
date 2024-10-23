#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;
    char ch = '\0';
  
    for (i = 1, ch = 'A'; i <= irow; i++,ch++ )

    {
        for (j = 1; j <= icol; j++)
        {
                printf("%c\t", ch);
           
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1, ivalue2 = 0;
    printf("enter row and colunm:");
    scanf("%d %d", &ivalue1, &ivalue2);

    pattren(ivalue1, ivalue2);
    return 0;
}