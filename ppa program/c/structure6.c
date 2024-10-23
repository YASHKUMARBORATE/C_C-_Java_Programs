#include<stdio.h>
struct demo
{
    int data;
    struct demo obj; //error

    /*error: field 'obj' has incomplete type
     struct demo obj;*/

    
};

int main()
{
  

    return 0;
}