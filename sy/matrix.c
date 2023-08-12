#include<stdio.h>
int main(){
	int a, matrix1[3][3], matrix2[3][3], output_matrix[3][3];
	printf("1:addition\n2:subtraction\n3:multiplication\n");
	scanf("%d",&a);
	printf("\nenter first matrix: \n");
	for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
    		printf("enter element [%d][%d]",i,j);
    		scanf("%d",&matrix1[i][j]);
    	}
    }
    printf("\nenter second matrix: \n");
	for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
    		printf("enter element [%d][%d]",i,j);
    		scanf("%d",&matrix2[i][j]);
    	}
    }
    printf("\nentered matrix 1 is: \n");
    for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
    		printf("%d ",matrix1[i][j]);
    		if(j == 2){
    			printf("\n");
    		}	
    	}
    }
    printf("\nentered matrix 2 is: \n");
    for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
    		printf("%d ",matrix2[i][j]);
    		if(j == 2){
    			printf("\n");
    		}	
    	}
    }
    	
    switch(a) {
    	case 1:
    		printf("\nsum is: \n");
    		for(int i = 0; i < 3; i++){
    			for(int j = 0; j < 3; j++){
		    		output_matrix[i][j] = matrix1[i][j] + matrix1[i][j];
		    		printf("%d ",output_matrix[i][j]);
		    		if(j == 2){
		    			printf("\n");
		    		}	
		    	}
    		}
    		break;
    	case 2:
    		printf("\nsum is: \n");
    		for(int i = 0; i < 3; i++){
    			for(int j = 0; j < 3; j++){
		    		output_matrix[i][j] = matrix1[i][j] - matrix2[i][j];
		    		printf("%d ",output_matrix[i][j]);
		    		if(j == 2){
		    			printf("\n");
		    		}	
		    	}
    		}
    		break;
		case 3:
			
			// Multiplying first and second matrices and storing it in result
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					for (int k = 0; k < 3; k++) {
						output_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
					}
				}
			}	
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					printf("%d  ", output_matrix[i][j]);
					if (j == 2)
						printf("\n");
				}
			}
			break;
    	default:
    		printf("incorrect input");
    		break;
    }
	return 0;
}