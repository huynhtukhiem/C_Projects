#include<stdio.h>
int main(){
    int a[3][3];
    
    printf("Nhap ma tran 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Nhap phan tu a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran vua nhap: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
