#include<stdio.h>

int main()
{
    int i = 11;       // 4 byte
    char ch = 'A';    // 1 byte
    float f = 90.89;   // 4 byte
    double d = 90.356;    // 8 byte

   int arr[5];          // 20 byte
   double brr[5];      // 40 byte
   float crr [5];    // 20 byte
   char drr [5];     // 5 byte

       printf("%d\n",sizeof(ch));
       printf("%d\n",sizeof(i));
       printf("%d\n",sizeof(f));
       printf("%d\n",sizeof(d));

       printf("%d\n",sizeof(arr));
       printf("%d\n",sizeof(brr));
       printf("%d\n",sizeof(crr));
       printf("%d\n",sizeof(drr));           
 return 0 ;
}