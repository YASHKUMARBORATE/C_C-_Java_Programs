/*
step1:  undarstanding the problem statement
step2: write the algorithm
step3: decide the programming language
step4: write a code
step: test the code

*/
#include <stdio.h>
// //////////////////////////
// int main 
// function name:addition
// decription:it is used to perform addition of 2 float
// intut: float,float
// output:float
// author: yash borate
// date: 15/04/24
////////////////////////////////
float addition(float fno1, float fno2)
{
    float fans = 0.0;
    fans = fno1 + fno2;
    return fans;
}
//////////////////////
// function name: main
// decription : it is a entry point function
///////////////////////
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("enter the 1st no\n:");
    scanf("%f", &fValue1);

    printf("enter the 2st no\n:");
    scanf("%f", &fValue2);

    fResult = addition(fValue1, fValue2); // fValue1 + fValue2;

    printf("addition is:%0.2f", fResult);
    return 0;
}