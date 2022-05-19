//int var: Declaration and defination
//extern int var: Only declaration
#include<stdio.h>

extern int var1;

int main()
{
   auto int var;
   printf("%d\n",var);//garbage value as in main functon by default isnt present
   printf("%d",var1);//but for a global vatiables the defualt value of zero is given.
   return 0;
}