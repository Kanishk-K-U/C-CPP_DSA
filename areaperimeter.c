//to find area and perimeter
#include<stdio.h>
int main()
{
    float l,b,r_area,r_peri;
    float r,c_area,c_circum;
    int pi=3.14;
    printf("enter length, breadth of rectangle:");
    scanf("%f%f",&l, &b);
    r_area=l*b;
    printf("\narea of rectangle is:%.2f",r_area);
    r_peri=2*(l+b);
    printf("\nperimeter of rectangle is:%.2f",r_peri);
    printf("\nenter radius of circle:");
    scanf("%f",&r);
    c_area=pi*r*r;
    c_circum=2*pi*r;
    printf("\narea of circle is:%0.2f",c_area);
    printf("\ncircumference of circle:%0.2f",c_circum);
    return 0;
}