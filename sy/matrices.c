/*
Samarth Kulkarni
SY AIDS-A
Roll No. 48
*/

#include <stdio.h>
#include <stdlib.h>

void readMatrix(int matrix[][10], int row, int column, int matrix_id) {
    printf("for matrix %d\n", matrix_id);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][10], int row, int column, char type[]) {
    printf("\n%s matrix:\n", type);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d  ", matrix[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
    printf("\n");
}

struct matrixDimensions{
    int r, c;
};

struct matrixDimensions scanMatrixDimensions(int matrix_id) {
    int r, c;
    printf("enter rows for matrix%d: ", matrix_id);
    scanf("%d", &r);
    printf("enter columns for matrix%d: ", matrix_id);
    scanf("%d", &c);

    struct matrixDimensions dimensions = { r, c }; 
    return dimensions;
}

void multiplyMatrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void addSubtractMatrices(int first[][10], int second[][10], int result[][10], int r, int c, char operation) {
    if(operation == '-'){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                second[i][j] = -second[i][j];
            }
        }
    }
    
    for(int i = 0; i < r; i++){
    	for(int j = 0; j < c; j++){
		    result[i][j] = first[i][j] + second[i][j];
		}
    }
}

void transposeMatrix(int matrix[][10], int transpose[][10], int r, int c) {
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}


int main() {
    int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2, choice;

    while (1) {
        printf("1:addition\n2:subtraction\n3:multiplication\n4:transpose\n5:exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                struct matrixDimensions square_matrix = scanMatrixDimensions(1);
                c1 = square_matrix.c; 
                r1 = square_matrix.r;
                readMatrix(first, r1, c1, 1);
                readMatrix(second, r1, c1, 2);
                displayMatrix(first, r1, c1, "first");
                displayMatrix(second, r1, c1, "second");
                addSubtractMatrices(first, second, result, r1, c1, '+');
                displayMatrix(result, r1, c1, "sum");
                break;
            case 2:
                struct matrixDimensions square_matrix_0 = scanMatrixDimensions(1);
                c1 = square_matrix_0.c; 
                r1 = square_matrix_0.r;
                readMatrix(first, r1, c1, 1);
                readMatrix(second, r1, c1, 2);
                displayMatrix(first, r1, c1, "first");
                displayMatrix(second, r1, c1, "second");
                addSubtractMatrices(first, second, result, r1, c1, '-');
                displayMatrix(result, r1, c1, "difference");
                break;
            case 3:
                struct matrixDimensions matrix1 = scanMatrixDimensions(1);
                c1 = matrix1.c; r1 = matrix1.r;
                struct matrixDimensions matrix2 = scanMatrixDimensions(2);
                c2 = matrix2.c; r2 = matrix2.r;
                while (c1 != r2) {
                    printf("error: make sure the columns of matrix1 is equal to the rows of matrix2\n");
                    struct matrixDimensions matrix1 = scanMatrixDimensions(1);
                    c1 = matrix1.c; r1 = matrix1.r;
                    struct matrixDimensions matrix2 = scanMatrixDimensions(2);
                    c2 = matrix2.c; r2 = matrix2.r;
                }
                readMatrix(first, r1, c1, 1);
                readMatrix(second, r2, c2, 2);
                displayMatrix(first, r1, c1, "first");
                displayMatrix(second, r2, c2, "second");
                multiplyMatrices(first, second, result, r1, c1, r2, c2);
                displayMatrix(result, r1, c2, "product");
                break;
            case 4:
                struct matrixDimensions transpose_matrix = scanMatrixDimensions(1);
                c1 = transpose_matrix.c; r1 = transpose_matrix.r;
                readMatrix(first, r1, c1, 1);
                displayMatrix(first, r1, c1, "entered");
                transposeMatrix(first, result, r1, c1);
                displayMatrix(result, r1, c1, "transpose");
                break;
            case 5:
                exit(0);
            default:
                printf("incorrect input\n");
                break;
        }
    }
   return 0;
}