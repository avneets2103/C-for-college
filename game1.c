#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int random()
{
    int number;
    srand(time(0));
    number = rand()%100+1;
    return number;
}

int main()
{
   printf("The game:\nThe computer generates a random number and you have to guess the number\n");
   printf("You will be given hints after every wrong attempt\n");
   printf("The player with lower number of attempts will win the game \n\n");
   
   int number1, guess, nGuess1=1;
   number1 = random();

   printf("                                   Play player 1\n\n");

   do
   {
       printf("Enter a number between 1 to 100 you guess for\n");
       scanf("%d",&guess);

       if(guess>number1)
       {
           printf("Lower number pls\n");
       }
       else if(guess<number1)
       {
           printf("Higher number pls\n");
       }
       else
       {
           printf("Yay you got the right number in %d attempts\n\n",nGuess1);
       }
       nGuess1++;
   } while (guess != number1);

   int number2, nGuess2=1;
   number2 = random();

   printf("                                 Play player 2\n\n");

   do
   {
       printf("Enter a number between 1 to 100 you guess for\n");
       scanf("%d",&guess);

       if(guess>number2)
       {
           printf("Lower number pls\n");
       }
       else if(guess<number2)
       {
           printf("Higher number pls\n");
       }
       else
       {
           printf("Yay you got the right number in %d attempts\n\n\n",nGuess2);
       }
       nGuess2++;
   } while (guess != number2);

   if (nGuess1>nGuess2)
   {
       printf("Player 2 won");
   }
   else
   {
       printf("Plater 1 won");
   }

   return 0;
}