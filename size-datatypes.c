//size of data types
#include<stdio.h>
#include<float.h>
#include<limits.h>
int main()
{
printf("\nsize of short integer %u to %ld is %d bytes",SHRT_MIN,SHRT_MAX,sizeof(short int));
printf("\nsize of unsigned short integer %d is %d bytes",USHRT_MAX,sizeof(unsigned short int));
printf("\nsize of integer from %lu to %d is %d bytes",INT_MIN,INT_MAX,sizeof(int));
printf("\nsize of unsigned integer  %d is %d bytes",UINT_MAX,sizeof(unsigned int));
printf("\nsize of long int from %ld to %ld is %d bytes",LONG_MIN,LONG_MAX,sizeof(long int));
printf("\nsize of long long int %ld is %d bytes ",__LONG_LONG_MAX__,sizeof(long long int));
printf("\nsize of unsigned long long int %d is #d bytes",ULLONG_MAX,sizeof(unsigned long long int));
printf("\nsize of character is %d",sizeof(char));
printf("\nsize of unsigned character is %d",sizeof(unsigned char));
printf("\nsize of float is %d",sizeof(float));
printf("\nsize of double is %d",sizeof(double));
printf("\nsize of long double is %d",sizeof(long double));
return 0;
}

