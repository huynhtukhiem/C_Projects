void MAX_min(int row, int col, int a[][col]){
    int max = a[0][0];
    int min = a[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);
}
