#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	pid_t pid;
	pid=fork();
	if(pid < 0)
		printf("\t fork error\n");
	else 
	if(pid == 0)
		printf("child process id is %d\n", getpid());
	else{
		sleep(10);
		printf("parent process\n");
		system("ps -axj | tail");
	}
	exit(0);
}
