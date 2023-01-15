#include <stdio.h>

int main()
{
    float fer, cel;
    printf("enter temperature in Fahrenheit:");
    scanf("%f",&fer);
    cel=((fer-32)*5)/9;
    printf("temperature in Celsius = %f",cel);
    return 0;
}

