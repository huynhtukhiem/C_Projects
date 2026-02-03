// Chèn một phần tử x vào một mảng có sẳn vào một vị trí k theo ý muốn
// Ý tưởng:
/*
chèn 10 và vị trí 0 trong mảng [1,2,3,4,5] -> [10,1,2,3,4,5]
Mảng ban đầu có 5 phần tử, dịch và lưu các phần tử ban đầu có vị trí là (5 - 1) đến phần tử có vị trí là (0) qua bên phải 1 đơn vị để chèn phần tử 10, 
  sau khi dịch, vị trí của các phần tử ban đầu tăng lên 1 đơn vị, chèn phần tử mới và cập nhật kích thước của mảng  
*/
#include<stdio.h>
void Chen_phan_tu(int a[], int *n, int x, int k){
    for(int i = *n-1; i >= k; i--){
        a[i+1] = a[i]; // dịch vị trí và lưu phần tử vào vị trí mới
    }
    a[k] = x; // Chèn phần tử mới
    (*n)++; // Cập nhật kích thước mảng
}
void Nhap_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void In_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main(){
    int n,index,k;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int a[n];
    Nhap_mang(a,n);
    printf("Mang ban dau la: ");
    In_mang(a,n);
    printf("Nhap phan tu can chen: ");
    scanf("%d", &index);
    printf("Nhap vi tri muon chen: ");
    scanf("%d", &k);

    Chen_phan_tu(a,&n,index,k);
    In_mang(a,n);
    return 0;
}
