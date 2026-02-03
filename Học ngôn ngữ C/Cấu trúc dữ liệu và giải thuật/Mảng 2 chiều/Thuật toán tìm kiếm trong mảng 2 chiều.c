// Tìm kiếm phần chỉ số (Nhập số hàng, số cột => phần tử)
// Tìm kiếm bằng phần tử (Nhập phần tử cần tìm => vị trí trong mảng)
// Cách 1: 
void Search(int row, int col, int a[][col], int x, int y){
    if(x < 0 || x > row || y < 0 || y > col){
        printf("Chi so khong hop le");
        return;
    }
    printf("Gia tri tai hang %d cot %d la: %d",x,y, a[x][y]);
}

// Cách 2: 
void Search(int row, int col, int a[][col], int x){
    int found = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] == x){
                printf("Phan tu %d nam tai hang %d cot %d\n",x,i,j);
                found++;
            }
        }
    }
    if(!found){
        printf("Khong tim thay phan tu %d trong mang!", x);
    }
}
