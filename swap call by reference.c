//write a program to swap by using call of reference.

#include<stdio.h>
void swap(int *a,int *b)
{
    int c=*a;
        *a=*b;
        *b=c;
printf("%d %d",*a,*b);
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);
}