#include <stdio.h>

int main()
{
    int l,b;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d%",&b);
    int perimeter = 2*(l+b);
    printf("%d",perimeter);
    return 0;
}