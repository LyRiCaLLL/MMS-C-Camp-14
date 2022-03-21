#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int triangle(double, double, double, double *, double *);

int main()
{
    while(1){
    double a, b, c;
    double peremetur, lice;
    scanf("%lf %lf %lf", &a, &b, &c);
    // triangle(a, b, c, &peremetur, &lice);
if (    triangle(a, b, c, &peremetur, &lice) == 1)
{
    continue;
}else
{
    printf("P = %lf, S = %lf \n", peremetur, lice);

}


        
    }
    return 0;
}

int triangle(double a, double b, double c, double *P, double *S)
{

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
    {
        fprintf(stderr,"Invalid triengal sizes! \n");
        return 1;
    }
    *P = a + b + c;

    double p = *P / 2;

    *S = sqrt(p * (p - a) * (p - b) * (p - c));

    return 0;

}
