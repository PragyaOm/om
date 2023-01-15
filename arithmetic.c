#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int s=a+b;
    int d=a-b;
    int p=a*b;
    int f=a/b;
    printf("sum=%d\n difference=%d\n product=%d\n division=%d",s,d,p,f);
    return 0;
}
