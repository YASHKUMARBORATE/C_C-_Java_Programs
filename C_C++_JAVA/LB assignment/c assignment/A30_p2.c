#include <stdio.h>
#include<stdbool.h>
bool strncamp(char *src, char *dest )
{while ((*src!= '\0')&&(*dest != '\0'))
{
  break;
}
  src++;
  dest++;
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
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Infosystems";
  bret =  strncamp(arr, brr);

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