#include <stdio.h>
void display(int ino)
{
    
    int icnt = 0;
    for (icnt = -ino; icnt < 0; icnt++)
    {
        printf("%d\t%d\t", icnt,-icnt);
    }
    
    printf("\n");
}
int main()
{
    int ivalue = 0;
    printf("enter number :\n");
    scanf("%d", &ivalue);
    display(ivalue);
    return 0;
}