/*
0 to 35 fail
35 to 50  pass class
50 to 60 second class
60 to 75 frist class
75 to 100 frist class with distingtion
*/

#include <stdio.h>

#define ret_invaid -1

#define ret_fail 1
#define ret_passclass 2
#define ret_secondclass 3
#define ret_fristclass 4
#define ret_destingtion 5

int displayresult(float fmark)
{
    if ((fmark < 0.0f) || (fmark > 100.0f))
    {
        return ret_invaid;
    }
    if ((fmark >= 0.0f) && (fmark < 35.0f))
    {
        return ret_fail;
    }
    else if ((fmark >= 35.0f) && (fmark < 50.0f))
    {
        return ret_passclass;
    }
    else if ((fmark <= 50.0f) && (fmark < 60.0f))
    {
        return ret_secondclass;
    }
    else if ((fmark <= 60.0f) && (fmark < 75.0f))
    {
        return ret_fristclass;
    }
    else if ((fmark <= 75.0f) && (fmark < 100.0f))
    {
        return ret_destingtion;
    }
}
int main()
{
    float fvalue = 0;
    int iret = 0;

    printf("enter your persentage:");
    scanf("%f", &fvalue);

    iret = displayresult(fvalue);

    switch (iret)
    {
    case ret_fail:
        printf("student is fail");
        break;
    case ret_passclass:
        printf("student is pass");
        break;
    case ret_secondclass:
        printf("student is second class");
        break;
    case ret_fristclass:
        printf("student is frist class");
        break;
    case ret_destingtion:
        printf("student is frist class with destingtion");
        break;
    case ret_invaid:
        printf("invalid input");
        break;
    }

    return 0;
}