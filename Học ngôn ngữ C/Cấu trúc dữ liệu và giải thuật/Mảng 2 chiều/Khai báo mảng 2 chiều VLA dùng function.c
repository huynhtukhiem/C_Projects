#include<stdio.h>
void Nhap_mang(int row, int col, int a[][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Nhap phan tu a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
}
void In_mang(int row, int col, int a[][col]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int row, col;
    printf("Nhap so hang: "); scanf("%d", &row);
    printf("Nhap so cot: "); scanf("%d", &col);
    int a[row][col];
    Nhap_mang(row,col,a);
    In_mang(row,col,a);

    return 0;
}
