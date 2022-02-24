//to find distance bw two cities in m,ft,inches,cm
#include<stdio.h>
int main()
{
    float km, m, ft, inches, cm;
    printf("enter distance between city A & B:");
    scanf("%f",&km);
    m= km*1000;
    printf("\nThe distance bw cities in meters: %.2f",m);
    ft= km*3281;
    printf("\nThe distance bw cities in feet: %.2f",ft);
    inches=km*39370;
    printf("\nThe distance bw cities in inches: %.2f",inches);
    cm=km*km*100000;
    printf("\nThe distance bw cities in centimeters: %.2f",cm);
    return 0;
}