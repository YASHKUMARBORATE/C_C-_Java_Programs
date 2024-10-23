#include<stdio.h>
#include<string.h>

int main()
{
    char arr [] = "hello";
    char brr []= {'h','e','l','l','o','\0'};

    printf("%s\n",arr);
    printf("%s\n",brr);

    printf("%d\n",strlen(arr));
    printf("%d",strlen(brr));

    return 0;
}