#include <stdio.h>
void pattrn(char *str)
{
    int icnt = 0;
    while (*str != '\0')
    {
      icnt = icnt + 1;
      str++;
    }
    for(int i = *str;i<icnt;i++)
    {
        for (int  j = *str; i < icnt; i++)
        {
            if(j>i)
            {
                printf("%c\t",*str);
            }
            
        }
        
    }
    
}
int main()
{ 
    char arr[30];
    printf("enter string:");
    scanf("%[^'\n']s",arr);
    
    pattrn(arr);

   
    return 0;
}