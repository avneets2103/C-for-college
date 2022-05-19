#include<stdio.h>

void exchange(int*x,int* y)
{
    int k = *x;
    *x=*y;
    *y=k;
}

int main()
{
   int a,b;
   scanf("%d %d",&a,&b);
   exchange(&a,&b);
   printf("%d %d",a,b);
   return 0;
}