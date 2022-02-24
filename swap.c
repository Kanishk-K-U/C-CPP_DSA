// program to swap numbers 
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nA: %d  B: %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nA: %d  B: %d",a,b);
}