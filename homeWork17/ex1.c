#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<time.h>

#define COUNT 10
int main(){
    srand(time(NULL));
    for (int i = 0; i < COUNT; i++){
        pid_t pid = fork();
        if (0 == pid){
              static const char ucase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const size_t ucase_count = sizeof(ucase) - 1; // ucase includes terminating '\0'
    size_t i, j;

    srand(time(NULL));

    for(i = 0; i < COUNT; i++) {
        for(j = 0; j < COUNT; j++) {
            char random_char;
            int random_index = (double)rand() / RAND_MAX * ucase_count;
            
            random_char = ucase[random_index];
            printf("%c", random_char);
        }
        printf("\n");
    }
            
            exit(EXIT_SUCCESS);
        }
    }
    for (int i = 0; i < COUNT; i++){
        wait(NULL);
    }
    return EXIT_SUCCESS;
}