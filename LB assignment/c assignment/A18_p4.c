#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;

    for (i = 1; i <= irow; i++)
    {
        for (j = 1; j <= icol; j++)
        {
            if ((i==1)||(j==1)||(i==irow)||(j==icol)||(i==j))
            {
                printf("*\t");
            }
              else if (j>i)
            {
                printf("#\t");
            }
            else if (j<i)
            {
                printf("$\t");
            }
            
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