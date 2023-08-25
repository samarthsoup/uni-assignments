#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main(){
	int n;
	printf("how many numbers do you want in your array?\n");
	scanf("%d",&n);
	int array[n];
	int temp;
	printf("input any %d numbers that you want to see in ascending or descending order\n",n);
	for(int i=0;i<n;i++){
		printf("element %d: ", i+1);
		scanf("%d",&array[i]);
		printf("\n");
	}
	
	pid_t process_id = fork();
	if(process_id<0){
		printf("error in fork execution\n");
	}else{
		if(process_id==0){
			printf("child process with id %d\narray in descending order\n",getpid());
			for(int i=0; i<n; i++){
				for(int j=i+1; j<n; j++) { 
					if(array[i]<array[j]){
						temp = array[i];
						array[i] = array[j];
						array[j] = temp;
					    }
				}
			}
			for(int i=0; i<n; i++){
				printf("%d ",array[i]);
			}
			printf("\n");
		}else{
			printf("parent process with id %d\narray in ascending order\n",getppid());
			for(int i=0; i<n; i++){
				for(int j=i+1; j<n; j++) { 
					if(array[i]>array[j]){
						temp = array[i];
						array[i] = array[j];
						array[j] = temp;
					    }
				}
			}
			for(int i=0; i<n; i++){
				printf("%d ",array[i]);
			}
			printf("\n");
			wait(NULL);
		}
	}

	exit(0);
}
