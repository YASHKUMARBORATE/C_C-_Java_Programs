#include <stdio.h>
void display()
{
int icnt = 0;
int i = 0;
for(i = 1 ; i<= 3; i++ )
{
for(icnt =1; icnt <=4;icnt++)
{
printf("*\t");
}
printf("\n");
}
}
int main()
{
    
    display();
    return 0;
}