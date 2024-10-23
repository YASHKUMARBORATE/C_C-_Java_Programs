#include<stdio.h>

int addition(int no1,int no2)
{
    int ans=0;
    ans = no1 + no2;
    return ans;
}
int main()
{
int A=10;
int B = 11;
int ret =0;
    printf("inside main function\n");

ret = addition(A,B);
printf("addition:%d\n",ret);
return 0;
}