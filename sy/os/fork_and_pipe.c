#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

int main(){
    pid_t num_pid;
	char message1[MAX];
	char message2[MAX];
	int p[2],n;

	printf("enter message: ");
	fflush(stdin);
	scanf("%s", message1);
	
	if(pipe(p)<0){
		printf("\npipe creation error");
		exit(0);
	}
	num_pid = fork();
	if(num_pid<0){
		printf("\nfork error");
		exit(0);
	}else if(num_pid > 0){
		close(p[0]);
		write(p[1], message1, MAX);
	}
	else{
		close(p[1]);
		n=read(p[0] , message2, MAX);
		message2[n]='\0';
		printf("received message through pipe: %s\n", message2);
	}
	exit(0);

}
