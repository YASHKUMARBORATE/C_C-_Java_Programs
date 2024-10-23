#include <stdio.h>
int reverse(int ino)
{
    int idigit = 0;
    static int i = 0;
    if (ino != 0)
    {
        idigit = ino % 10;

        i = (i * 10) +idigit;

        reverse(ino / 10);
    }
    return i;
}
int main()
{
    int ivalue = 0, iret = 0;
    printf("enter digit that you want:");
    scanf("%d", &ivalue);

    iret = reverse(ivalue);

    printf("%d", iret);
    return 0;
}