#include <stdio.h>
void displaydigit(int ino)
{
    int idigit = 0;
    while (ino > 0)
    {
        idigit = ino % 10;
        printf("%d\n", idigit);
        ino = ino / 10;
    }
}
int main()
{
    int ivalue;
    printf("enter the number:");
    scanf("%d", &ivalue);

    displaydigit(ivalue);
    return 0;
}