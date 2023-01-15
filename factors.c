#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a positive number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(n%i==0){
            printf("%d",i);
        }
    }
    printf("factors of %d are:", n);
    return 0;
}