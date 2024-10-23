#include <stdio.h>
#include <stdbool.h>

bool displayresult(float fmark)
{
    if ((fmark >= 0.0f) && (fmark < 35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    float fvalue = 0.0f;
    bool bret = false;

    printf("enter your persentage:");
    scanf("%f", &fvalue);

    bret = displayresult(fvalue);
    if (bret == false)
    {
        printf("student is fail in the exam\n");
    }
    else
    {
        printf("student is pass in the exam\n");
    }
    return 0;
}