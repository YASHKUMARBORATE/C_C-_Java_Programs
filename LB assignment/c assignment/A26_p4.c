#include <stdio.h>
void digits(char *str)
{
    
    while (*str != '\0')
    {
        printf("%d",*str); 
     *str++;
    }
  
 
}
int main()
{
    char arr[100];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

digits(arr);


    return 0;
}
