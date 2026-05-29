#include<stdio.h>

double SquareFeetToSquareMeter(float fValue)
{
    double dMeter = 0.0;
    
    dMeter = (double)fValue * 0.0929;

    return dMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    dRet = SquareFeetToSquareMeter(fValue);

    printf("Area in square meter is: %.6lf\n", dRet);

    return 0;
}