#include <stdio.h>

void display(char ch)
{
    int i = 0;
      char c = '\0';
    if((ch>='A')&&(ch<='Z'))
    {
      
        for(c = ch;c<='Z';c++)
        {
            printf("%c\t",c);
        }
    }
    else if ((ch>='a')&&(ch<='z'))
    {
        for(c =ch;c>='a';c--)
        {
            printf("%c\t",c);
        }
    }
    
}
int main()
{
    char cvalue = '\0';

    printf("enter charcter:");
    scanf("  %c", &cvalue);
    display(cvalue);

    return 0;
}