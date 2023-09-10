#include<stdio.h>

int getMax(int arr[], int n) {
	  int max = arr[0];
	  for (int i = 1; i < n; i++)
		    if (arr[i] > max)
		      max = arr[i];
	  return max;
}

void bucketSort(int arr[],int n){
	const int max=getMax(arr,n)+1;
	int bucket[max];
	for(int i=0;i<max;i++){
		bucket[i]=0;
	}
	for(int i=0;i<n;i++){
		bucket[arr[i]]++;
	}
	int index=0;
	for(int i=0;i<max;i++){
		while(bucket[i]>0)
		{
			arr[index++]=i;
			bucket[i]--;
		}
	}
}

void radixSort(int arr[], int n){
	int large, pass, div, bktno, count[10], bkt[20][20];
	large = arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]>large){
			large = arr[i];
		}
	}
	pass = 0;

	while(large>0){
		pass++;
		large = large/10;
	}

	div = 1;

	for(int i=0;i<=pass;i++){
		for(int j=0;j<=9;j++){
			count[j]=0;
		}

		for(int i=0;i<n;i++){
			bktno = (arr[i]/div)%10;
			bkt[bktno][count[bktno]] = arr[i];
			count[bktno]++;
		}
		int j = 0;
		for(bktno=0;bktno<=9;bktno++){
			for(int i=0; i<count[bktno];i++){
				arr[j]=bkt[bktno][i];
				j++;
			}
		}

		div=div*10;
	}
}

int main(){
	int n, choice;
	printf("enter the number of students:  ");
	scanf("%d",&n);
	int percentages[n];
	printf("enter the Ist year percentages:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&percentages[i]);
	}
	
	printf("\n\n1.bucket sort\n2.radix sort\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			bucketSort(percentages, n);
			printf("top 5 scores using bucket sort:\n");
			for(int i=n-1;i>=n-5;i--){
				printf("%d%%\n",percentages[i]);
			}
			break;
		case 2:
			radixSort(percentages, n);
			printf("top 5 scores using radix sort:\n");
			for(int i=n-1;i>=n-5;i--){
				printf("%d%%\n",percentages[i]);
			}
			break;
		default:
			printf("invalid input\n");
			break;
	}
	
	return 0;
}
