// Nhập vị trí -> in phần tử tại vị trí đó
void Find_element(int n, int a[], int x){
    if(x < 0 || x >= n){
        printf("Invalid position!!");
        return;
    }
    printf("The element at position %d is %d", x,a[x]);   
}
// Nhập phần tử -> in ra số phần tử có trong mảng đó nếu trùng
void Find_element_(int n, int a[], int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            printf("Number %d at position %d in the array\n", x,i);
            count++;
        }
    }
    if(!count){
        printf("There is no element %d in the array", x);
    }
}
