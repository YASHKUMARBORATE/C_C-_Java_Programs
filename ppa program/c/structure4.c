#include<stdio.h>
#pragma pack(1)
struct student
{
    int RollNo;   // 4
    char division; // 1
    int age;   // 4
    float marks;  //4
    int salary;  //4
};

int main()
{

  struct student amit;

  
  printf("size of object is: %d\n",sizeof(amit));
  
  
    return 0;
}