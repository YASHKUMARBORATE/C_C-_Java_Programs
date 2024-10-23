#include <stdio.h>
#include <stdbool.h>
/*
alogorithm
start
     accept one number from as no
    divide the number no by 3
    if reminder is 0
      divide the number no by 5
      if reminder is 0
      then the result is divisible by 3 ans 5
    then display the result as even number
    otherwice display the it is not divisble
*/
//////////////////////////////////
//   function name :checkdivisible
//   description: used to check whether number ischeckdivisible by 3 ans 5
//   input : integer
//   output: boolean
//  author: yash rajendra borate
//  date: 16/04/24
//////////////////////////////////
bool checkdivisible(unsigned int ino)
{
    if (((ino % 3) == 0) && ((ino % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned ivalue = 0;
    bool bRet = false;

    printf("enter the number:");
    scanf("%d", &ivalue);

    bRet = checkdivisible(ivalue);
    if (bRet == true)
    {
        printf("%d is divisble by 3 and 5 \n", ivalue);
    }
    else
    {
       printf("%d is not divisble by either 3 and 5 \n", ivalue);
    }
    return 0;
}
/*
logical && operator
first    second    &&     ||
true       true    true   true
false      false   false   false
true      false    fales   true
false      true     false    true
*/