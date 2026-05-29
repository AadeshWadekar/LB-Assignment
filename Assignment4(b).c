#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 1)
    {
        iNo = -iNo;
    }
    for( iCnt = (iNo / 2);iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0) 
        {
            printf("%d\t",iCnt);
        }
    }
            printf("\n");
}

int main()
{
    int iValue = 0;
    

    printf("Enter number: \n");
    scanf("%d", &iValue);

    FactRev(iValue);

   

    return 0;
}