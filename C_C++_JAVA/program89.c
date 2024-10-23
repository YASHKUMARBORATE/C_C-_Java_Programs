#include <stdio.h>
void display(int ino)
{

    int icnt = 0;
    char ch = '\0';
    for (icnt = 1,ch = 'a'; icnt <= ino; icnt++, ch++)
    {
        printf("%c\t", ch);
    }

    printf("\n");
}
int main()
{
    int ivalue = 0;
    printf("enter number :\n");
    scanf("%d", &ivalue);
    display(ivalue);
    return 0;
}