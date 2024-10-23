#include <stdio.h>
void displayfactor(int ino)
{
    int icnt = 0;
    for (icnt = 1; icnt <= (ino/2); icnt++)
    {
        if ((ino % icnt) == 0)
        {
            printf("factors of  is:%d\n", icnt);
        }
    }
}
int main()
{
    int ivalue = 0;
    
    printf("enter the number:\n");
    scanf("%d", &ivalue);

    displayfactor(ivalue);

    return 0;
}