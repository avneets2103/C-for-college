//checking a character frequency in string
#include<stdio.h>

int char_freq(char string[],char ch)
{
   int a=0;
   int i=0;
   while (string[i]!='\0')
   {
       if (string[i]==ch)
       {
           a++;
       }
       i++;
   }
   
   return a;
}

int main()
{
    char string[100];
    char ch;
    gets(string);
    scanf("%c",&ch);
    printf("%d",char_freq(string,ch));
    return 0;
}