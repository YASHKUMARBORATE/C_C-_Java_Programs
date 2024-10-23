#include <stdio.h>
#include<stdbool.h>
int chkvowel(char *str)
{
    int icount = 0;
    while (*str != '\0')
    {
        if ((*str >= 'a') || (*str <= 'e') ||(*str <= 'i') ||(*str <= 'o')||(*str <= 'u'))
        {
            return true ;
        }
        else 
        {
          return false;
        }
        
        *str++;
    }
    return icount;
}
int main()
{
    char arr[100];
    bool bret  = false;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    bret = chkvowel(arr);

if(bret==true)
{
    printf("contains vowels");
}
else
{
    printf("threr is no vowels");
}

    return 0;
}
