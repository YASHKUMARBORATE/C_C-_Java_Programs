#include<stdio.h>

int Countone(int iNo)
{
    int iDigit = 0;

    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
  
        if(iDigit  == 1) 
        {
            iCount++;
        }
        iNo = iNo / 2;
      
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number 1st : \n");
    scanf("%d",&iValue);

    iRet = Countone(iValue);

    printf("Number of 1 are : %d\n",iRet);

    return 0;
}