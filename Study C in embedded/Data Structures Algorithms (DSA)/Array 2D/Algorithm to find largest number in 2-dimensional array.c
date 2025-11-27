#include<stdio.h>

void Find_max(int row, int col, int a[][col]){
    int max = a[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }   
    }
    
    printf("The largest number in array is: %d\n", max);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] == max){
                printf("At position: Row %d Column %d in array\n", i,j);
            }
        }
    }
}


int main(){
    int row, col;
    printf("Enter the rows: "); scanf("%d", &row);
    printf("Enter the columns: "); scanf("%d", &col);
    int a[row][col];

    // Input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Enter a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    // Output
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    Find_max(row,col,a);
    return 0;
}
