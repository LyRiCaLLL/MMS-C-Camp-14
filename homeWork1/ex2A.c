#include<stdio.h>
#include <math.h>
int main()
{
double r, h ,leng ;

printf("Enter r = ");
scanf("%lf" ,&r);
printf("Enter h = ");
scanf("%lf" ,&h);
float area = acos(((r-h)/r))*pow(r,2)-(r-h)*sqrt(2*r*h-pow(h,2));
printf("Area = %f\n", area);
printf("Enter Length = ");
scanf("%lf" ,&leng);
float volum = area * leng ;
printf("volum = %f\n" ,volum );
return 0;
}