#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }

    for(int i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}