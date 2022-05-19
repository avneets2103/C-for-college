#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char a,char b)
{
    if (a==b)
    {
        return 0;
    }
    else if ((a=='s'&&b=='w')||(a=='w'&&b=='g')||(a=='g'&&b=='s'))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}


int main()
{
   char comp, you;
   srand(time(0));
   int number = rand()%3+1;
   if (number = 1)
   {
       comp='w';    
   }
   else if (number=2)
   {
       comp='s';
   }
   else
   {
       comp='g';
   }

   printf("Enter w for water, g for gun, s for snake\n");
   scanf("%c",&you);

   if (snakewatergun(you,comp)==0)
   {
       printf("Game was a draw");
   }
   else if (snakewatergun(you,comp)==1)
   {
       printf("You won");
   }
   else
   {
       printf("You lose");
   }
   
   printf("\nYou chose %c and the computer chose %c\n",you,comp);
   return 0;
}