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
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
// hàm gộp 2 mảng lại thành 1
void mergeArray(int a[], int n1, int b[], int n2, int c[], int *n3){
    *n3 = n1 + n2;
    int k = 0;

    for(int i = 0; i < n1; i++){
        c[k++] = a[i];
    }
    for(int i = 0; i < n2; i++){
        c[k++] = b[i];
    }
}
int main(){
    int a[100], b[100], c[200];
    int n1, n2, n3;
    printf("=== NHAP MANG A ===\n");
    inputArray(a, &n1);
    printf("=== NHAP MANG B ===\n");
    inputArray(b, &n2);
  
    printf("Mang A: ");
    outputArray(a, n1);
    printf("Mang B: ");
    outputArray(b, n2);
    // gộp 2 mảng
    mergeArray(a, n1, b, n2, c, &n3);
    printf("Mang sau khi gop: ");
    outputArray(c, n3);
    return 0;
}
