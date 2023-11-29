#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>

int main()
{
    int sig,pid;
    printf("Enter signal number : ");
    scanf("%d",&sig);
    printf("Enter pid : ");
    scanf("%d",&pid);
    kill(pid,sig);
    printf("program is killed !!\n");
    return 0;
}