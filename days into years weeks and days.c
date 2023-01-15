#include <stdio.h>

int main()
{
   int days;
   printf("enter number of days:");
   scanf("%d",&days);
   printf("days in years:%d",days/365);
   printf("days in weeks:%d",(days%365)/7);
   printf("days in days:%d",days%365%7);
   return 0;
}