#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("enter value for a and b");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nAdd=%d",c);
    c=a-b;
    printf("\nDiff=%d",c);
    c=a*b;
    printf("\nProduct=%d",c);
    x=(float)a/(float)b; //change of datatype
    printf("\nDiv=%.1f",x);
    c=a%b;
    printf("\nMod=%d",c);
    return 0;
}