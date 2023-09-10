#include<stdio.h>
#include<stdlib.h>

struct Student{
	int prn;
	char name[20];
};

void linear_search(struct Student records[], int target_prn, int size){
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

void binary_search(int num_records, struct Student records[], int low, int high, int target_prn){
	int counter = 1;
	    
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

void selection_sort(int num_records, struct Student records[]) {
	struct Student temp;
	
	for(int i=0;i<num_records-1;i++){
		int min_index = i;
		for(int j=i+1;j<num_records;j++){
			if(records[j].prn < records[min_index].prn){
				min_index = j;
			}	
		}
		temp = records[min_index];
		records[min_index]=records[i];
		records[i]=temp;
	}
}

void insertion_sort(int num_records, struct Student records[]) {
	struct Student key;
	
	for(int i=1; i<num_records; i++){
		key = records[i];
		int j=i-1;
		
		while (j >= 0 && records[j].prn > key.prn) {
		      records[j+1] = records[j];
		      j=j-1;
		}
		records[j+1]=key;
	}
}

void shell_sort(int num_records, struct Student records[]) {
	struct Student temp;
	
	for (int interval = num_records/2; interval>0; interval/=2) {
		for (int i=interval; i<num_records; i++) {
			temp = records[i];
			int j;
			for(j=i; j>=interval && records[j-interval].prn>temp.prn; j-=interval){
				records[j]=records[j-interval];
			}
			records[j]=temp;
		}
	}
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

void display_records(int num_records, struct Student records[]){
	for(int i=0;i<num_records;i++){
		   printf("prn: %d, name: %s\n",records[i].prn, records[i].name);
	}
}

int main(){
	int target_prn, num_records;
	printf("how many records do you want: ");
	scanf("%d", &num_records);
	struct Student students[num_records];
	
	input(num_records, students);
	display_records(num_records, students);
	
	printf("\nafter shell sort\n");
	
	shell_sort(num_records, students);
	display_records(num_records, students);
	
	printf("who are you looking for?(use prn)\n");
	scanf("%d", &target_prn);
	
	linear_search(students, target_prn, num_records);
	
	binary_search(num_records, students, 0, num_records-1, target_prn);
	
	return 0;
	
}