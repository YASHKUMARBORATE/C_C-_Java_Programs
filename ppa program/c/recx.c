#include<stdio.h>
void display(int no1)
{
    static int icnt = 0;
    if (icnt<no1)
    {
        printf("jay ganesh..\n");
        icnt++;
        display(no1);
    }
    
}
int main()
{
    display(3);
    return 0;
}