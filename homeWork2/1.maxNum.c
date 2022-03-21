#include<stdio.h>
#include<stdlib.h>
int main(){
    double a,b,c;
    printf ("num1 = ");
    scanf("%lf", &a);
        printf ("num2 = ");
    scanf("%lf", &b);
        printf ("num3 = ");
    scanf("%lf", &c);
if(a > b && a > c){
printf("the Biggest Num - %lf\n" ,a);
}else if (b > a && b > c){
    printf("the Biggest Num - %lf\n" ,b);
}else if (c > a && c > b ){
    printf("the Biggest Num - %lf\n" ,c);
}else if (a == b && a == c){
    printf("the Num are equal - Num1 - %lf == Num2 - %lf == Num3 - %lf\n" ,a,b,c);
}else{
    fprintf(stderr,"Wrong Num\n");
    return EXIT_FAILURE;
}
return EXIT_SUCCESS;


}