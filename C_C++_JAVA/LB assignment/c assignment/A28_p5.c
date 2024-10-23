#include <stdio.h>
void strcatx(char *src, char *dest)
{
  while (*src != '\0')
  {
    *src++;
  }
  while (*dest != '\0')
  {
    *src = *dest;
    src++;
    dest++;
  }
  *dest = '\0';
}
int main()
{
  char arr[30] = "Marvellous INfosystem";
  char brr[30] = " logic Building";
  strcatx(arr, brr);

  printf("%s", arr);
  return 0;
}