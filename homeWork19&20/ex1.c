#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include<time.h>
#define COUNT 10

void* routine(void* arg){
  static const char ucase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const size_t ucase_count = sizeof(ucase) - 1;
    size_t i, j;

    srand(time(NULL));

    for(i = 0; i < 10; i++) {
        for(j = 0; j < COUNT; j++) {
            char random_char;
            int random_index = (double)rand() / RAND_MAX * ucase_count;
            
            random_char = ucase[random_index];
            printf("%c", random_char);
        }
        printf("\n");
    }
}

int main(){
    pthread_t th[COUNT];

    for (int i = 0; i < COUNT; i++){
        if(pthread_create(&th[i], NULL, routine, NULL) != 0){
            perror("create thread:");
            return EXIT_FAILURE;
        }
    }

    for (int i = 0; i < COUNT; i++){
        if(pthread_join(th[i], NULL) != 0){
            perror("join thread:");
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}