//Fibonacci
#include<stdio.h>

int main()
{
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   printf("%d %d",a,b);
   for (int i = 0;a+b<200; i++)
   {
       int c= a+b;
       a=b;
       b=c;
       printf(" %d",c);
   }
   
   return 0;
}