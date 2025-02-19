#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main() {
    pid_t pid;
    pid= fork();
    if(pid<0) {
    perror("failure");
    return 1;
    }
    else if(pid==0) {
        printf("%d",getpid());
    }
    else {
    printf("%d",getpid());
    }
    return 0;
}