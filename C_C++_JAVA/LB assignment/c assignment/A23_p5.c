#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0
void displayschedule(char ch)
{
    if ((ch == 'a') || (ch == 'A'))
    {
        printf("your exam at 7 am");
    }
    else if ((ch == 'b') || (ch == 'B'))
    {
        printf("your exam at 8.30 am");
    }
    else if ((ch == 'c') || (ch == 'C'))
    {
        printf("your exam at 9.20 am");
    }
    else if ((ch == 'd') || (ch == 'D'))
    {
        printf("your exam at 10.30 am");
    }
    else
    {
        printf("please enter correct division");
    }
}
int main()
{
    char cvalue = '\0';

    printf("enter your division:");
    scanf("  %c", &cvalue);

    displayschedule(cvalue);

    return 0;
}