#include<stdio.h>
int main()
{
   char ch;
   scanf("%c",&ch);
   int ascii=ch;
   if ((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
   {
       printf("alphabet");
   }
   else{
       printf("nt a alphabet");
   }
   return 0;
}