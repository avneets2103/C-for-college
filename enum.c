//Enum is used for numbering purposes in c
//Enumerated values are by default integeres and cant be taken otherwise
#include <stdio.h>

int main()
{
    enum avneet{a,b=3,c,d,e=8};
    int x=a;
    int y=b;
    int z=c;
    int m=d;
    int n=e;
    printf("%d %d %d %d %d",x,y,z,m,n);

}