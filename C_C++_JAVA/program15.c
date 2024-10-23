#include <stdio.h>
int displayresult(float fmark)
{
    if ((fmark < 0.0f) || (fmark > 100.0f))
    {
        return 1;
    }
    if ((fmark >= 0.0f) && (fmark <= 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    float fvalue = 0.0f;
    int iret = 0;

    printf("enter your persentage:");
    scanf("%f", &fvalue);

    iret = displayresult(fvalue);
    if (iret == 1)
    {
        printf("your input is invalid\n");
    }
    else if (iret == 2)
    {
        printf("student is fail in the exam\n");
    }
    else if (iret == 3)
    {
        printf("student is pass in the exam\n");
    }

    return 0;
}