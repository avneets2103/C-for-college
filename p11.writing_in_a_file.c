#include<stdio.h>
int main()
{
   int n;
   printf("Enter n: \n");
   scanf("%d",&n);

   FILE*ptr=fopen("sample.txt","a");

   char name[100];
   int marks;

   for (int i = 0; i < n; i++)
   {
       printf("Enter name of student %d: \n",i+1);
       scanf("%s",&name);
       fprintf(ptr,"%s ",name);
       printf("Enter marks of %s: \n",name);
       scanf("%d",&marks);
       fprintf(ptr,"%d\n",marks);
   }
   
   fclose(ptr);
   return 0;
}