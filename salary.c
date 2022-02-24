//program to find gross salary from basic pay,house rent allowance & DA
#include<stdio.h>
int main()
{
    float BS, DA, HRA, GS;
    printf("Enter Basic Salary:");
    scanf("%f",&BS);
    DA=BS*0.4;
    HRA=BS*0.2;
    GS=BS+DA+HRA;
    printf("Basic Salary: %.2f",BS);
    printf("\nDA: %.2f",DA);
    printf("\nHouse rent allowance: %.2f",HRA);
    printf("\ngross salary: %.2f",GS);
    return 0;
}