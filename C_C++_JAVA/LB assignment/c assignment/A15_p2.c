#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;
    int num = 2;
    int num1 = 1;
    for (i = 1; i <= irow; i++)
    {
        for (j = 1; j <= icol; j++)
        {

            if (i % 2 != 0)
            {
                printf("%d\t", num);
                num += 2;
                num1 = 1;
            }
            else if (i % 2 == 0)
            {
                printf("%d\t", num);
                num1 += 2;
                num = 2;
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