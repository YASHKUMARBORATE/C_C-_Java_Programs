#include <stdio.h>
int wordcount(char *src)
{
    int imax = 0;
    while (*src != '\0')
    {
        if ((*src == imax)&&(*src != '\0'))
        {
            src++;
        }
        else
        {
            imax++;
        }
    }
    return imax;
}
int main()
{
    int iret = 0;
    char arr[30];

    printf("enter string:");
    scanf("%[^'\n']s", arr);

    iret = wordcount(arr);
    
    printf("%d", iret);

    return 0;
}