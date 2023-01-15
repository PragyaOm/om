//Write a function which will work exactly same as pow() function of math library.

#include<stdio.h>
int pow(int a,int b);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int r=pow(x,y);
    printf("%d",r);
}
int pow(int a,int b){
    int c=1;
    for(int i=1;i<=b;i++){
        c=a*c;
    }
    return c;
}