#include <stdio.h>

void display(char ch)
{
    if ((ch >= '0') && (ch <= '255'))
    {
        printf("%d", ch);
        printf("%he", ch);
        printf("%o", ch);
    }
}
int main()
{
    char cvalue = '\0';

    printf("enter charcter:");
    scanf("  %c", &cvalue);

    display(cvalue);

    return 0;
}