#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* num1, const void* num2){
    return *(int*)num2 - *(int*)num1;
}

int main(){
    int nums[] = {12,34,5,70,46};
    qsort(nums, 5, sizeof(nums[0]), compare);
   

        printf("Num = %d\n", nums[1]);
    
    return 0;
}