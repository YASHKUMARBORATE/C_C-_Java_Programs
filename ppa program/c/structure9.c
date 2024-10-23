#include <stdio.h>

struct demo
{
  int no;
  int data;
};
int main()
{

  struct demo obj;
  struct demo *ptr = &obj;

  obj.no = 11;

  ptr->data = 21;

  return 0;
}