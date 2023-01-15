#include<stdio.h>
int main()
{
    int a[5];
    printf("enter the value in array:");
    for(int i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=4;i>=0;i--)
    printf("%d",a[i]);
}