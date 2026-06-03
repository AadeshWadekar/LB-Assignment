#include<stdio.h>

int MultiDigits(int iNo)
{
    int iMult = 1;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;   
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}