#include<stdio.h>

int main()
{
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int sum = a1+a2;
    for (int i=2;i<n;i++)
    {
        int c = a1+a2;
        a1=a2;
        a2=c;
        sum=sum+  c;
    }
    printf("%d",sum);
    return 0;
}