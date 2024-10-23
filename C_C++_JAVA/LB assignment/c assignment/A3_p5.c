#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool chkvowel(char ch)
{
    if(ch=='a'||ch =='e'|| ch == 'i'||ch=='o'||ch=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cvalue = '\0';
    bool bert = FALSE;

    printf("enter character:");
    scanf("%c",&cvalue);

bert = chkvowel(cvalue);

    if(bert==TRUE)
    {
        printf("it is vowel");

    }
    else
    {
        printf("it is not vowel");

    }
    return 0;
}