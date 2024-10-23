#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;
    int num = 1;
    char ch = '\0';
    for (i = 1,ch = 'a'; i <= irow; i++)
    {
        for (j = 1; j <= icol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
                ch ++;
                ch += 1;
            }
            else if (i % 2 == 0)
            {
                printf("%d\t", num);
                num++;
                
            }   
        }
        num = 1;
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