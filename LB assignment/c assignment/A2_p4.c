#include<stdio.h>
void display(int ino,int frequency)
{
  
    if(frequency < 0)
    {
        frequency = - frequency;
    }
      int icnt = 0;
    for(icnt=1;icnt<=frequency;icnt++)
    {
        printf("%d\n",ino);
    }
}

int main()
{
    int ivalue = 0,icount = 0;

    printf("enter number:");
    scanf("%d",&ivalue);

    printf("enter frequence:");
    scanf("%d",&icount);

    display(ivalue,icount);
    return 0;
}