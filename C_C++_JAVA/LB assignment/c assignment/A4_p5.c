#include <stdio.h>
int sumfact(int ino)
{
    if (ino < 0)
    {
        ino = -ino;
    }

    int icnt = 0, sum = 0;
    for (icnt = 1; icnt <= ino; icnt++)
    {

        if ((ino % icnt) == 0)
        {
            sum = sum + icnt;
        }
    }
    return sum;
}
    int sumnonfact(int ino)
{
    if (ino < 0)
    {
        ino = -ino;
    }

    int icnt = 0, sum = 0;
    for (icnt = 1; icnt <= ino; icnt++)
    {

        if ((ino % icnt) != 0)
        {
            sum = sum + icnt;
        }
    }
    return sum;

}
int main()
{
    int ivalue = 0, factsum = 0, nonfactsum = 0, diff = 0;
    printf("enter number:");
    scanf("%d", &ivalue);

    factsum = sumfact(ivalue);
    nonfactsum = sumnonfact(ivalue);

    diff = factsum - nonfactsum;
    printf("%d\n", diff);
    return 0;
}