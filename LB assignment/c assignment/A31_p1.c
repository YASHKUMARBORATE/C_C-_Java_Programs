#include <stdio.h>
int wordcount(char *src)
{
    int len = 1;
    while (*src != '\0')
    {
        if (*src == ' ')
        {
            len++;
        }
    }
    return len;
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