#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    printf("\n");
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;


    printf("Enter Number Of Element:\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate the memory \n");

        return -1;
    }

    printf("Enter %d Element \n ",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);


    free(p);

    return 0;
}