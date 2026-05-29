#include<stdio.h>
int FactorialDiff(int iNo)
{
   int iFactEven = 1;
   int iFactOdd = 1;

   if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for(int i = 1; i <= iNo; i++)
   {
        if(i % 2 == 0)
        {
            iFactEven = iFactEven*i;
        }
        else
        {
            iFactOdd = iFactOdd*i;
        }
   }
   return iFactEven-iFactOdd;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf(" Factorail Diierence is %d",iRet);

    

    return 0;
}