//in general we use automatic variables thus whenever a function or part of code gets finished the variable gets destroyed itself, thus if we run it again we go back to initial value, thus its an uissue for programs which need permamnent chnages.
//thus static variable is used to solve this issue by using 
//static int var = 0; this will nt be deleted when the parethesis ends, the value is retained.

//But why nt a global variable to be used, but it will be available to every function in the program as it isnt a good thing to do.
#include<stdio.h>
int main()
{
   for (int i = 0; i < 10; i++)
   {
       static int a=0;
       a=a+i;
       printf("%d\n",a);
   }
   for (int i = 0; i < 10; i++)
   {
        int a=0;
       a=a+i;
       printf("%d\n",a);
   }
     
   return 0;
}
