#include<stdio.h>
int main(){
    // include rows and columns of the array
    int row, col;
    printf("Enter number of rows: "); scanf("%d", &row);
    printf("Enter number of columns: "); scanf("%d", &col);
    int a[row][col];
    
    // Input the element of array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    // Output
    printf("The array 2D entered: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
