#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {
	int pid = fork();
	if(pid > 0){
		printf("parent process id %d\n", getpid());
		printf("child process id %d\n", pid);
	}else if(pid == 0){
		sleep(10);
		printf("child process id %d\n", getpid());
		printf("parent process id %d\n", getppid());
	}else{
		printf("\tfork error\n");
	}
	return 0;
}

