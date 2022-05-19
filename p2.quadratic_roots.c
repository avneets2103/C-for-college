//ax^2+bx+c
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter value of a:\n");
    int a;
    scanf("%d",&a);
    printf("Enter value of b:\n");
    int b;
    scanf("%d",&b);
    printf("Enter value of c:\n");
    int c;
    scanf("%d",&c);

    double D = (b*b)-(4*a*c);

    if (D<0)
    {
        printf("IMAGINARY ROOTS");
    }
    else
    {
        double x1= (-1*b + sqrt(D))/(2*a);
        double x2= (-1*b - sqrt(D))/(2*a);
        printf("The roots are: \nx1 = %0.2lf\nx2 = %0.2lf",x1,x2);
    }
    return 0;
}