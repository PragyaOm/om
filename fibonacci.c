#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter a number");
    scanf("%d",&n);
    while(a<=n)
    {
        printf(" %d",a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("fibonacci series is:\n",a,b);
    return 0;
}