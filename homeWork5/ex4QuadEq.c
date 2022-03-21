
#include<stdio.h>
#include<math.h>
int queEq(double,double,double,double*,double*);
int main(){
    float a,b,c;
    double x1 , x2;
scanf("%f %f %f", &a,&b,&c);
if (queEq(a,b,c,&x1 ,&x2) == 1)
{
    return -1;
}
if(x1 == x2){
    printf("x1/2 = %lf \n" ,x1);
    return 0;
}
printf("\nx1 = %lf, x2 = %lf \n", x1, x2);

    return 0;

}
int queEq(double a, double b, double c, double* x1, double* x2){
    double d;
d = pow(b,2) - 4 * a * c;
if(d < 0 )
{
    printf("No real roots!\n");
    return 1;
}
*x1 = ((-b)+ sqrt(d) ) /(2 * a);
*x2 = ((-b) - sqrt(d) ) /(2 * a);

return 0; 

}