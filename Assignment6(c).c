#include<stdio.h>
int Factorial(int iNo)
{
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
     {
        iFact = iNo * iFact;
        iNo--;
    }
    return iFact;
}


int main()
{
    int iValve = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValve);

    iRet = Factorial(iValve);
    
    printf("Factorial of number is %d",iRet);


    return 0;
}