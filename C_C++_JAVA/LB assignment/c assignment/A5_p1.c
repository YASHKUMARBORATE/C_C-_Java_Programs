#include <stdio.h>
void pattern(int ino)
{
    if(ino<0)
    {
        ino=-ino;
    }
    int icnt = 0;
    for (icnt = 1; icnt <= ino; icnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int ivalue = 0;
    
    printf("enter number:");
    scanf("%d", &ivalue);

    pattern(ivalue);

    return 0;
}