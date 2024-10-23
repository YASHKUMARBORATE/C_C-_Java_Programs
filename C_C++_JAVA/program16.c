#include <stdio.h>

# define ret_invaid 1
#define ret_fail 2
#define ret_pass 3

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
    else
    {
        return ret_pass;
    }
}
int main()
{
    float fvalue = 0;
    int iret = 0;

    printf("enter your persentage:");
    scanf("%f", &fvalue);

    iret = displayresult(fvalue);
    
    if (iret == ret_invaid)
    {
        printf("your input is invalid\n");
    }
    else if (iret == ret_fail)
    {
        printf("student is fail in the exam\n");
    }
    else if (iret == ret_pass)
    {
        printf("student is pass in the exam\n");
    }

    return 0;
}