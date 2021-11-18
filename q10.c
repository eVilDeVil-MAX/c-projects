#include<stdio.h>
double poly(double a);
int main(void)
{
    double p,x;
    printf("enter the value of x to evaluate the following expression 3x^5 + 2x^4 -5x^2 -x^2 + 7x -6 ");
    scanf("%f",&x);
    p = poly(x);
    printf("%f",p);
    return 0;
}

double poly(double a)
{
    double a1;
    a1 = 3*a*a*a*a*a  + 2*a*a*a*a - 5*a*a- a*a + 7*a - 6;
    return a1;
}