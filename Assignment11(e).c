#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd )
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending point : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);



    return 0;   
}