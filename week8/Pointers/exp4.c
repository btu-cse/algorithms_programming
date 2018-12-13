#include <stdio.h>

#define ROWS 3
#define COLS 3

void printMatrix(int matrix[][COLS], int rows, int cols);

int main(){
    int matrix[3][3]={1,3,5,7,9,4,8,6,2};

    /* Print elements in matrix */
    printf("Elements of %dx%d matrix.\n", ROWS, COLS);
    printMatrix(matrix, ROWS, COLS);


    return 0;
}

void printMatrix(int (*matrix)[COLS], int rows, int cols){
    int i, j;

    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++){
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}
