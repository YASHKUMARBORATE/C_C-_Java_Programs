#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;
    char ch = '\0';
    char CH = '\0';
    for (i = 1; i <= irow; i++)

    {
        for (j = 1, ch = 'A', CH = 'a'; j <= icol; j++, ch++, CH++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%c\t", CH);
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