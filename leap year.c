#include <stdio.h>

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%12==0)
    printf("number is divisible by 3 and 4");
    else
    printf("number is not divisible by 3 and 4");
    return 0;
}
