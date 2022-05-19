#include<stdio.h>
int main()
{
   int year;
   scanf("%d",&year);

   if(year%400==0)
   {
       printf("Leap year");
   }
   else if(year%100==0)
   {
       printf("normal year");
   }
   else if(year%4==0)
   {
       printf("Leap year");
   }
   else
   {
       printf("Normal year");
   }

   return 0;
}