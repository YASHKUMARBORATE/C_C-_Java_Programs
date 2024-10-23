#include <stdio.h>
void pattren(int ino)
{
    int icnt = 0;
  char ch = '\0';
    for (icnt = 1,ch = 'A'; icnt <= ino; icnt ++,ch++)

    {
        printf("%c\t",ch);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    pattren(ivalue);
    return 0;
}