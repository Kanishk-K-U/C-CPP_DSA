//to find average and total of student's five subject score
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,T;
    float avg;
    printf("Enter marks of five subjects:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    T=m1+m2+m3+m4+m5;
    avg=T/5;
    printf("Total:%d/500",T);
    printf("\nAverage:%.2f",avg);
    return 0;
}