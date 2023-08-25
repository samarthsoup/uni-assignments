#include<stdio.h>
#include<stdlib.h>

struct Student{
	int prn;
	char name[20];
};

void search(struct Student records[], int target_prn, int size){
	int flag = 0;
	int counter = 1;
	for(int i=0;i<size;i++){
		if(target_prn == records[i].prn){
			printf("record found linearly!\n");
			printf("prn: %d, name: %s\n",records[i].prn, records[i].name);
			flag+=1;
			break;
		}
		counter+=1;
	}
	if(flag == 0){
		printf("no such record found\n");
	}
	printf("number of comparisons: %d\n\n", counter);
}

void display_records(int num_records, struct Student records[]){
	for(int i=0;i<num_records;i++){
		   printf("prn: %d, name: %s\n",records[i].prn, records[i].name);
	}
}

void binary_search(struct Student records[], int low, int high, int target_prn, int num_records){
	int counter = 1;
	struct Student temp;
	
	for (int i = 0; i < num_records-1; i++){
        	for (int j = 0; j < (num_records-1-i); j++){
            		if (records[j].prn < records[j + 1].prn){
                	temp = records[j];
                	records[j] = records[j + 1];
                	records[j + 1] = temp;
            		} 
        	}
    	}
	    
	while(low <= high){
		int mid = low + (high - low)/2;
		if (records[mid].prn == target_prn){
			printf("record found using binary search!\n");
			printf("prn: %d, name: %s\n",records[mid].prn, records[mid].name);
			break;
		}else if (records[mid].prn < target_prn){
			low = mid +1;
		}else {
			high = mid - 1;
		}
		counter+=1;
	}
	
	printf("number of comparisons: %d\n", counter);
}

void input(int num_records, struct Student records[]){
	for(int i=0;i<num_records;i++){
		printf("enter data for student %d\n", i+1);
		printf("enter prn for student %d\n", i+1);
		scanf("%d", &records[i].prn);
		printf("\nenter name for student %d\n", i+1);
		scanf("%s", records[i].name);
		printf("\n\n");
	}
}

int main(){
	int target_prn, num_records;
	printf("how many records do you want: ");
	scanf("%d", &num_records);
	struct Student students[num_records];
	
	input(num_records, students);
	display_records(num_records, students);
	
	printf("who are you looking for?(use prn)\n");
	scanf("%d", &target_prn);
	
	search(students, target_prn, num_records);
	
	binary_search(students, 0, num_records-1, target_prn, num_records);
	
	return 0;
	
}