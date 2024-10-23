#include <stdio.h>
#include<stdbool.h>
bool strncamp(char *src, char *dest,int icnt )
{while ((*src!= '\0')&&(icnt != 0))
{
  break;
}
  src++;
  dest++;
  icnt--;
if((*src=='\0')&&(*dest == '\0'))
{
    return true;
}
else
{
    return false;
}



}
int main()
{
    bool bret = false;
    char arr[50];
    char brr[30];
     printf("enter 1st string:");
    scanf("%[^'\n']s",arr);

     printf("enter 2nd string:");
    scanf("%[^'\n']s",brr);
  bret =  strncamp(arr, brr,10);

if(bret== true)
{
    printf("both srings are equal");
}
else
{
    printf("both srings are not equal"); 
}
    return 0;
}