#include<stdio.h>
struct hello
{
    int no;
   float f;

  
    
};
struct demo
{
    
    
       int data;
    struct hello hobj;
    
    
};

int main()
{
  
struct demo dobj;
dobj.data = 11;
dobj.hobj.no = 21;
dobj.hobj.f = 90.99;

    return 0;
}