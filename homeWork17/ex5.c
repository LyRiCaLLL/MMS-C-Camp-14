
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <signal.h>
#include<time.h>

void func(){
    printf("I Can't die!\n");
}

int main(){
    struct sigaction sa;
    sa.sa_handler = func;
    sa.sa_flags = SA_RESTART;
    sigaction(SIGINT, &sa, NULL);

    while(1){
printf("“MMS C Camp”");
sleep(1);
    }

    return EXIT_SUCCESS;
}