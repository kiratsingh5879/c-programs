#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main() {
    pid_t pid;
    pid=fork();
    if(pid<0) {
        printf("fork failed");
        return 1;
    }
    else if(pid==0) {
        printf("child process:%d",getpid());
        printf("child running...\n");
        sleep(2);
        printf("child completed...\n");
    }
    else {
        printf("parent id=%d",getpid());
        printf("parent running...\n");
        wait(NULL);
        printf("waiting for child...\n");
        printf("parent completed.. \n");
    }
    return 0;
}