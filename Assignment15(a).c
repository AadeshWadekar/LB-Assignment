#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;


bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo);
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    bool bRet = false;
    int iValue = 0;

    printf("Enter no of Element :\n");
    scanf("%d",&iSize);

   

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory \n");
        return -1;
    }
    printf("Enter %d element  \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
     printf("Enter Numbers :\n");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("number is not present");

    }

    free(p);


    return 0;
}