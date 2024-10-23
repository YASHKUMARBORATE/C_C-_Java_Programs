#include<stdio.h>
struct marvellous
{
    int no;
    float f;
    int i;

};

int main()
{
    struct marvellous mobj;
    
    struct marvellous *ptr = &mobj;
    
        ptr->no =11;
        ptr->f = 90.96;
        ptr->i= 12;

        printf("%d\n",ptr->no);

        printf("%d\n",sizeof(mobj));


    
    
    return 0;
}