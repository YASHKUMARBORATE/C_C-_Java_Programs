#include <stdio.h>
void display(int ino)
{
    static int icnt = 1;
  static  char ch = 'a';
    if (icnt <= ino)
    {
        printf("%c\t", ch);
        icnt++;
            ch++;
        display(ino);
    }
}
int main()
{
    int ivalue = 0;
    printf("enter number that you want:");
    scanf("%d", &ivalue);

    display(ivalue);
    return 0;
}