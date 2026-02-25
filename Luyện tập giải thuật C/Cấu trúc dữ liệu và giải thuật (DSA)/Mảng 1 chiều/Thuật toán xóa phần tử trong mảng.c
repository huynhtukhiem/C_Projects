#include <stdio.h>
// hàm nhập mảng
void inputArray(int a[], int *n){
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
// hàm in mảng
void outputArray(int a[], int n){
    printf("Mang hien tai: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// hàm xóa phần tử
void Delete(int a[], int *n, int pos){
    if(pos < 0 || pos >= *n){
        printf("Vi tri xoa khong hop le!!\n");
        return;
    }
    for(int i = pos; i < *n - 1; i++){
        a[i] = a[i+1];
    }
    (*n)--;
}
int main(){
    int a[100];
    int n;
    inputArray(a, &n);
    outputArray(a, n);
    int pos;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &pos);
    Delete(a, &n, pos);
    outputArray(a, n);
    return 0;
}
