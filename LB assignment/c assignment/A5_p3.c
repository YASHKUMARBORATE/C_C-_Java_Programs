#include <stdio.h>
void pattern(int ino)
{
    int icnt = 0;
    for (icnt = -ino; icnt <= ino; icnt++)
    {
        printf("%d\t",icnt);
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