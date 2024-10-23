#include <stdio.h>
int main()
{
    int ino = 438;
    int idigit = 0;

    idigit = ino % 10;
    printf("%d\n", idigit);

    ino = ino / 10;
    idigit = ino % 10;
    printf("%d\n", idigit);

    ino = ino / 10;
    idigit = ino % 10;
    printf("%d\n", idigit);

    return 0;
}