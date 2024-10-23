#include<stdio.h>
int multiplication(int No1,int No2)
{
  int ans = 0;
  ans = No1 *No2;
  return ans;
}
int main()
{
  int value1 = 0, value2 = 0,ret = 0;

int (*fptr)(int,int);
fptr = multiplication;
printf("enter first number :\n");
scanf("%d",&value1);

printf("enter second number :\n");
scanf("%d",&value2);
ret = multiplication (value1, value2);

printf("multiplication is : %d\n",ret);
return 0;

}