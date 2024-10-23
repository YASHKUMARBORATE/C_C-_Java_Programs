#include<stdio.h>

int Commonbit(int iNo1,int ino2)
{
    int iDigit1 = 0;
    int iDigit2 = 0;
    int iCount = 0;

    while((iNo1 != 0)&&(ino2 != 0))
    {
        iDigit1 = iNo1 % 2;
        iDigit2 = ino2 % 2;
        if((iDigit1  == 1) &&(iDigit2  == 1))
        {
            iCount++;
        }
        iNo1 = iNo1 / 2;
        ino2 = ino2 / 2;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0,iValue2 = 0, iRet = 0;

    printf("Enter number 1st : \n");
    scanf("%d",&iValue1);

    
    printf("Enter number2nd : \n");
    scanf("%d",&iValue2);

    iRet = Commonbit(iValue1,iValue2);

    printf("Number of 1 are : %d\n",iRet);

    return 0;
}