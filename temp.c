//program to find franheit to  celsius
#include<stdio.h>
int main()
{
    float f, c;
    printf("enter the temp in farenheit:");
    scanf("%f",&f);
    c= (f-32)*5/9;
    printf("\ntemp in celsius: %.2f",c);
    return 0;
}