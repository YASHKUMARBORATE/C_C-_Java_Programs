#include <stdio.h>
void displayfactor(int ino)
{
    int icnt = 0;

    printf("factors of  is:%d \n", ino);
    for (icnt = 1; icnt < ino; icnt++)
    {
        if ((ino % icnt) == 0)
        {
            printf("%d \n", icnt);
        }
    }
}
int main()
{
    int ivalue = 0;
    printf("enter the number:");
    scanf("%d", &ivalue);
    displayfactor(ivalue);
    return 0;
}