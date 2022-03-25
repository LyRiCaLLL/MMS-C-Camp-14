#include <stdio.h>

int sum(int *arr, size_t size );
void arrayEvaluate(int* arr, size_t n, int(*f)(int*,size_t));

int main(){
    size_t n = 5;
    int arr []= {1,2,3,4,5};

   int(*f)(int*, size_t);
    
    arrayEvaluate(arr, n, sum);
    return 0;
}
void arrayEvaluate(int* arr, size_t n, int(*f)(int*,size_t)) {
    printf("%d", f(arr, n));
}
int sum(int *arr, size_t size ){
    int sum = 0;
    for(int i = 0; i < size; i++){
          sum += arr [i];
    }
    return sum;
}
