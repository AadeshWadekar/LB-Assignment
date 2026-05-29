#include<stdio.h>
int KMtOMeter(int iNo)
{
    int iMeter  = 0;

    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter Distance : ");
    scanf("%d",& iValue);

    iRet = KMtOMeter(iValue);

    printf("Distance in meter  is  %d",iRet);

    

    return 0;
}