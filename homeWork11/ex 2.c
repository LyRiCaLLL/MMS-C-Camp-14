#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <string.h>




typedef struct
{
    double *arr;
    size_t max_size, length;
} myDinArr;
myDinArr creatDinamArr(size_t max_Size); 
void push(myDinArr *dinamicArr, double newEl);                 
void print(myDinArr *dinamicArr);
double randDouble(float min, float max){
    return min + ((float)rand() / RAND_MAX) * (max - min);
}

int main()
{
    int n,m,p;
    myDinArr dArr1 = creatDinamArr(4);
    srand(time(NULL));
    printf("Set for n :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        push(&dArr1, randDouble(0, 1.0));
       
    }
    
    printf("Set for m :");
    scanf("%d", &m);
for (int i = 0; i < m; i++)
    {
       
        push(&dArr1, randDouble(1.0, 2.0));
       
    }
    printf("Set for n :");
    scanf("%d", &p);
    
    for (int i = 0; i < p; i++)
    {
         push(&dArr1, randDouble(2.0, 3.0));
     
    }
    print(&dArr1);
    free(dArr1.arr);
    return 0;
}
myDinArr creatDinamArr(size_t max_Size)
{
    myDinArr SecandDinArr;
    SecandDinArr.max_size = max_Size;
    SecandDinArr.length = 0;
    SecandDinArr.arr = (double *)malloc(sizeof(double) * max_Size);
    if (!SecandDinArr.arr)
    {
        fprintf(stderr, "Malloc failed\n");
        exit(-1);
    }
    return SecandDinArr;
}
void push(myDinArr *dinamicArr, double newEl)
{
    if (dinamicArr->length == dinamicArr->max_size)
    {
        // Realloc
        size_t new_max_size = dinamicArr->max_size * 2;
        dinamicArr->arr = (double *)realloc(dinamicArr->arr, new_max_size * sizeof(double));
        dinamicArr->max_size = new_max_size;
        if (dinamicArr->arr == NULL)
        {
            fprintf(stderr, "Realloc failed\n");
            exit(-1);
        }
    }
    dinamicArr->arr[dinamicArr->length++] = newEl;

    printf("===============================================\n");
    print(dinamicArr);
}

void print(myDinArr *dinamicArr)
{
    printf("max_size: %ld ;  length:  %ld\n", dinamicArr->max_size, dinamicArr->length);
    for (int i = 0; i < dinamicArr->length; i++)
    {
        printf("%.2f ", dinamicArr->arr[i]);
        // printf("%f ", *((*dinamicArr).arr+i));
    }
    printf("\n \n");
}
