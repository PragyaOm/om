#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b,c=0;
    scanf("%d",&n);
    int m=n;
    while(n>0)
    {
        n=n/10;
        a++;
    }
    n=m;
    while(m>0)
    {
        b=m%10;
        c=c+pow(b,a);
        m=m/10;
    }
    if(c==n)
    printf("armstrong");
    else
    printf("not armstrong");
    }
