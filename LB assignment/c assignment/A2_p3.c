#include <stdio.h>
void display(int ino)
{
    if (ino < 10)
    {
        printf("hello");
    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    display(ivalue);
    return 0;
}