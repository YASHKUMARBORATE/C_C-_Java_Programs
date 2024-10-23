#include<stdio.h>

int main()
{
   int No = 11;
   int * ptr = &No;

   double data = 90.9999;
    double * dptr = &data; 

    printf("%d\n",No);
    printf("%f\n",data);

     printf("%d\n",sizeof(No));
     printf("%d\n",sizeof(ptr));
     printf("%d\n",sizeof(data));
     printf("%d\n",sizeof(dptr));

      printf("%d\n",*ptr);
      printf("%f\n",*dptr);
     
    return 0;
}