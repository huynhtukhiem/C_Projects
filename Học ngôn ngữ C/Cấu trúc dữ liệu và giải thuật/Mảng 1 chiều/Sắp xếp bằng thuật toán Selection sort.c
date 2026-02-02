// Viết chương trình nhập số lượng mảng và các phần tử trong mảng sau đó sắp xếp tăng dần
#include<stdio.h>
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
void Selection_sort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main(){
    int n;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int a[n];
    Nhap_mang(a,n);
    printf("Mang ban dau la: ");
    In_mang(a,n);
    printf("Mang sau khi sap xep: ");
    Selection_sort(a,n);
    In_mang(a,n);
    return 0;
}
/*
Nhap so luong phan tu trong mang: 7
Nhap phan tu a[0]: 3
Nhap phan tu a[1]: 4
Nhap phan tu a[2]: 2
Nhap phan tu a[3]: 34
Nhap phan tu a[4]: 2
Nhap phan tu a[5]: 5
Nhap phan tu a[6]: 3
Mang ban dau la: 3 4 2 34 2 5 3 
Mang sau khi sap xep: 2 2 3 3 4 5 34
*/
