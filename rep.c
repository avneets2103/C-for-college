#include <stdio.h>
#include <malloc.h>
int main()
{
   printf("Enter size of array: \n");
   int n;
   scanf("%d",&n);
   double*ptr=(double*)malloc(n*sizeof(double));
   for (int i = 0; i < n; i++)
   {
      scanf("%lf",&ptr[i]);
   }
   for (int i = 0; i < n; i++)
   {
      printf("%0.2lf ",ptr[i]);
   }
   return 0;
}
