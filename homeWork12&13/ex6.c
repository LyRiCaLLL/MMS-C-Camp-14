#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define count 10
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void bubbleSort(int arr[], int n)
{
        int i, j;
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                  swap(&arr[j], &arr[j+1]);
                 }
              }
            }
}


int main()
{
int arr[count]={10,20,30,40,50,1,5,3,2,50};
bubbleSort(arr,count);
for(int i =0; i < count;i++)
printf("%d\n",*(arr+i));
return 0;
  }

