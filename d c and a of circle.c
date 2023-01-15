#include <stdio.h>

int main()
{
    float r;
    printf("enter r:");
    scanf("%f",&r);
    float d=r*2;
    float c=2*(3.14)*r;
    float a=(3.14)*r*r;
    printf("diameter=%f\n,circumference=%f\n,area=%f\n",d,c,a);
    return 0;
}
