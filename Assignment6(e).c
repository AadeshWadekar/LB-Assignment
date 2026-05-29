#include<stdio.h>
void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
    printf("\n");
    
}


int main()
{
    int iValve = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValve);

    TableRev(iValve);

    return 0;
}