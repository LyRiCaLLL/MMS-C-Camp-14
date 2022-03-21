#include <stdio.h>
#include <stdlib.h>
 

int rectangle(double, double, double *, double *);

int main()
{
    while(1){
    double a, b;
    double peremetur, lice;
    scanf("%lf %lf ", &a, &b);
 
if (    rectangle(a, b, &peremetur, &lice) == 1)
{
    continue;
}else
{
    printf("P = %lf, S = %lf \n", peremetur, lice);

}


        
    }
    return 0;
}

int rectangle(double a, double b, double *P, double *S)
{

    if (a <= 0 || b <= 0 )
    {
        fprintf(stderr,"Invalid reactangle sizes! \n");
        return 1;
    }
    *P = 2*(a + b) ;

    *S = a*b;

    return 0;

}