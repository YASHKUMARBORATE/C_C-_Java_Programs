#include <stdio.h>

void display(char ch)
{
    printf("decimal :%d\n",ch);
    printf("octal :%o\n",ch);
    printf("hexadecimal :%lx\n",ch);
}
int main()
{
    char cvalue = '\0';

    printf("enter charcter:");
    scanf("  %c", &cvalue);
    display(cvalue);

    return 0;
}