#include <stdio.h>
void pattren(int irow, int icol)
{
    int j, i = 0;
    int num = 1;
   
 
    for (i = 1; i <= irow; i++)
    {
        for (j = 1; j <= icol; j++)
        {
            printf("%d\t", num); 
            if (num ==9)
            {
              num = 0; 
            }
            num++;
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