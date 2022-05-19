//prime number btwn 2 intervals

#include<stdio.h>

void prime(int a,int b)
{
    for (int i = a; i <= b; i++)
    {
        int count=0;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j == 0)
            {
                count++;
            }    
        }
        if (count==0)
        {
            printf("%d\n",i);
        }    
    }
}

int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   prime(a,b);
   return 0;
}