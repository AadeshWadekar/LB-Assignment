#include<stdio.h>
int DollarToINR(int iNo)
{
    int iResult = 0 ;

    iResult = iNo * 70;

    return iResult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("value in INR %d",iRet);

    

    return 0;
}