#include<stdio.h>
int main()
{
    int a[5];
    int p=0,n=0;
    printf("enter the values in array\n");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        p++;
        if(a[i]<0)
        n++;
    }
    printf("count positive numbers in array:%d\n",p);
    printf("count negative numbers in array:%d",n);
    return 0;
}