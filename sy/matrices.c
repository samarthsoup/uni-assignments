#include <stdio.h>

// function to get matrix elements entered by the user
void readMatrix(int matrix[][10], int row, int column, int matrix_id) {
    printf("for matrix %d", matrix_id);
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int result[][10], int row, int column, char type[]) {
   printf("\n%s matrix:\n", type);
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

struct matrixDimensions{
    int r, c;
};

struct matrixDimensions scanMatrix() {
    int r, c;
    printf("enter rows for the first matrix: ");
    scanf("%d", &r);
    printf("enter columns for the first matrix: ");
    scanf("%d", &c);

    struct matrixDimensions dimensions = { r, c }; 
    return dimensions;
}

// function to multiply two matrices
void multiplyMatrices(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2) {
   // Initializing elements of matrix mult to 0.
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}



int main() {
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;

   while (c1 != r2) {
      printf("make sure the columns of matrix1 is equal to the rows of matrix2\n");
      struct matrixDimensions matrix1 = scanMatrix();
      c1 = matrix1.c; r1 = matrix1.r;
      struct matrixDimensions matrix2 = scanMatrix();
      c2 = matrix2.c; r2 = matrix2.r;
   }

   // get elements of the first matrix
   readMatrix(first, r1, c1, 1);

   // get elements of the second matrix
   readMatrix(second, r2, c2, 2);

   // multiply two matrices.
   multiplyMatrices(first, second, result, r1, c1, r2, c2);

   // display the result
   display(result, r1, c2, "product");

   return 0;
}