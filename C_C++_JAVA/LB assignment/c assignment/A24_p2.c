#include <stdio.h>

void display(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf(" small case :%c", ch);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
        {
            ch = ch - 32;
            printf("capital case: %c", ch);
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