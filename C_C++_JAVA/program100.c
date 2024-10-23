#include <stdio.h>
void display(int ino1, int ino2)
{
    int icnt = 0;
    int i = 0;
    for (i = 1; i <= ino1; i++)
    {
        for (icnt = 1; icnt <= ino2; icnt++)
        {
            if (icnt % 2 == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;

    printf("enter number of row:");
    scanf("%d", &ivalue1);

    printf("enter number of column:");
    scanf("%d", &ivalue2);

    display(ivalue1, ivalue2);
    return 0;
}