#include <stdio.h>
#include <unistd.h>
#include<sys/wait.h>

int main() {
    int count = 0;

    while (1) {
        int pid;
         pid = fork();

        if (pid == -1) {
            
            perror("fork() failed");
            break;
        } else if (pid == 0) {
            _exit(0);
        } else {
    
            count++;
            printf("Created child process %d with PID %d\n", count, getpid());
        }
    }

    printf("Maximum number of child processes reached.\n");

    return 0;
}
