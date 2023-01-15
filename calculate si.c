#include <stdio.h>
#include <math.h>
int main()
{
   int P,R,T;
   printf("enter principle amount:");
   scanf("%d",&P);
   printf("enter intrest rate:");
   scanf("%d",&R);
   printf("enter time in years:");
   scanf("%d",&T);
   float K;
   K=(1+R/100.0);
   printf("compound intrest is:%g",P*pow(K,T));
   return 0;
}
