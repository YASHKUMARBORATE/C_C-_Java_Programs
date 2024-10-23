#include<stdio.h>
#include<stdbool.h>
bool strpallindrome(char *str)
{
char ch = *str ;
while (*str != '\0')
{
ch++;
  *str++;
}
if(*str == ch)
{
    return true ;
}
else
{
    return false;
}

}
int main()
{bool bret = false;
    char arr[50] ;
     printf("enter string:");
    scanf("%[^'\n']s",arr);
  bret =  strpallindrome(arr);
if(bret == true)
{
    printf("string is pallindrome");
}
else
{
        printf("string is not pallindrome");
}
    printf("%s",arr);
    return 0;
}