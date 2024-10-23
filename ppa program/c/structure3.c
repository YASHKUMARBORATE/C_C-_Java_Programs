#include<stdio.h>
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
  struct student pooja;
  
  printf("size of object is: %d\n",sizeof(amit));
  
  /* amit.RollNo = 11;
   amit.division = 'A';
   amit.marks = 90.98;
   amit.age = 19;
   amit.salary = 21000;

   pooja.RollNo = 21;
   pooja.division = 'D';
   pooja.marks = 93.67;
   pooja.age = 17;
   pooja.salary = 20000;

   printf("age of amit is :%d\n",amit.age);
   printf("age of pooja is :%d\n",pooja.age);

   printf("salary of amit is :%d\n",amit.salary);
   printf("salary of pooja is :%d\n",pooja.salary);
   */ return 0;
}