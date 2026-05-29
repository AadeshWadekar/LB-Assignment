#include<stdio.h>
int EvenFactorial(int iNo)
{
   int iFact = 1;

   if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for(int i = 1; i <= iNo; i++)
   {
        if(i % 2 == 0)
        {
            iFact = iFact*i;
        }
   }
   return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorail is %d",iRet);

    

    return 0;
}