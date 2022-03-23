#include <stdio.h>

float mySqrt(int);
int main()
{
    
int numberForSqrt ;
scanf("%d",&numberForSqrt);
if (numberForSqrt == 0 || numberForSqrt == 1){
printf("The square root is %d", numberForSqrt) ;
return 0;
}else if (numberForSqrt > 1){
    mySqrt(numberForSqrt);
printf("The square root is %.1f", mySqrt(numberForSqrt)) ;
}
}





float mySqrt(int sqrtNumber){
    
int start = 0, sqroot;
float sqrootNumber;
int endOfRoot = sqrtNumber;

while (start <= endOfRoot) {
 
        
        sqroot = (start + endOfRoot)/2;
        
        if (sqroot * sqroot == sqrtNumber) {
            sqrootNumber = sqroot;
            break;
        }

        else if (sqroot * sqroot < sqrtNumber) {
      
            sqrootNumber=start;
          
            start = sqroot + 1;
        }
 
    
        else {
            endOfRoot = sqroot - 1;
        }
    }
 

    float j = 0.1;
    for (int i = 0; i < 5; i++) {
        while (sqrootNumber * sqrootNumber <= sqrtNumber) {
          sqrootNumber += j;
        }
 
        sqrootNumber = sqrootNumber - j;
        
    }
    return sqrootNumber;
}
