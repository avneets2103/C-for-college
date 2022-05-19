#include<stdio.h>

int check(int n)
{
    for(int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i=0;
    int a =2;
    while(i<10)
    {
        if (check(a)==1)
        {
            printf("%d\n",a);
            i++;
        }
        a++;
    }
}

 