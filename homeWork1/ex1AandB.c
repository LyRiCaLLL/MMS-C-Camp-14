#include<stdio.h>
#include <math.h>
int main()
{
double mass, height,poww;
float x = 1.3;
printf("Enter mass = ");
scanf("%lf" ,&mass);
printf("Enter height = ");
scanf("%lf" ,&height);
double sum = mass / pow(height,2);
printf("BM1 = %lf\n", sum);
float newFormul = x*(mass / pow(height,2.5));
printf("BM1new = %f\n", newFormul);
return 0;
}