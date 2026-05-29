#include<stdio.h>
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("large");
    }

}
int main()
{
    int iValve = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValve);

    Number(iValve);


    return 0;
}