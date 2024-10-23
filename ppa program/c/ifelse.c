#include<stdio.h>>
int main()
{
    int standard = 0;
    printf("enter your standard :\n");
     scanf("%d",&standard);

     if(standard==1){
        printf("your exam is at 7 am\n");
     }
     else if (standard == 2)
     {
         printf("your exam is at 8 am\n");
     }
     else if (standard == 3)
     {
         printf("your exam is at 9 am\n");
     }
     else if (standard == 4)
     {
         printf("your exam is at 10 am\n");
     }
     else
     {
        printf("wrong standard");
     }
    return 0 ;
}