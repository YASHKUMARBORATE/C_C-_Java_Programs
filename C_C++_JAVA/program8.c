#include <stdio.h>
#include <stdbool.h>
/*
alogorithm
start
     accept one number from as no
    divide the number no by 2
    if reminder is0
    then display the result as even number
    otherwice display the result as odd number
*/
///////////////////////////
//   function name : check even or odd
//   description: used to check whether number is ev
//   input : integer
//   output: boolean
//  author: yash rajendra borate
//  date: 16/04/24
//////////////////////////////////
bool checkevenodd(unsigned int ino)
{
    if ((ino % 2) == 0)
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

    bRet = checkevenodd(ivalue);
    if (bRet == true)
    {
        printf("%d is even number\n", ivalue);
    }
    else
    {
        printf("%d is odd number\n", ivalue);
    }
    return 0;
}