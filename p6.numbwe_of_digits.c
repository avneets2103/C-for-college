#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   scanf("%d",&n);
   int count = 0;
   do{
       n/=10;
       ++count;
   }while(n!=0);
   printf("%d",count);
   return 0;
}