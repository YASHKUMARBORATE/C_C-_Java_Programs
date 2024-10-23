#include <stdio.h>
float addition(
    float fno1, // frist input
    float fno2  // second input
)
{
    float fans = 0.0; // variable to store result
    fans = fno1 + fno2;
    return fans;
}
int main()
{
    float fValue1 = 0.0; // variable to store first input
    float fValue2 = 0.0; // variable to store second input
    float fResult = 0.0;// variable to store return  value

    printf("enter the 1st no\n:");
    scanf("%f", &fValue1);

    printf("enter the 2st no\n:");
    scanf("%f", &fValue2);

    fResult = addition(fValue1, fValue2); // fValue1 + fValue2;

    printf("addition is:%0.2f", fResult);
    return 0;
}