#include <stdio.h>

int main()
{
    float a;
    printf("enter temperature in celcius:");
    scanf("%f",&a);
    printf("convert temperature in fahrenheit:%g",9/5.0*a+32);
    return 0;
}