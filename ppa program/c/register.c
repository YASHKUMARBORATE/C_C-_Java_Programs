#include <stdio.h>
void marvellous()
{

    int i = 11;
    register int j = 21;
    register int k;
    printf("%d\n",k);
}
int main()
{
    printf("demonstation of auto storage classes..\n");
    marvellous();
    return 0;
}