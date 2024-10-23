#include<stdio.h>
void strrev(char *str)
{
    char temp;
    char *first,*last;
first = *str;
last = *str;
while (*last != '\0')
{
last++;
}
last--;
while (*first<=*last)
{
temp = *last;
*first = temp;
*last = *first;
first++;
last--;
}

}
int main()
{
    char arr[50] ;
     printf("enter string:");
    scanf("%[^'\n']s",arr);
    strrev(arr);

    printf("%s",arr);
    return 0;
}