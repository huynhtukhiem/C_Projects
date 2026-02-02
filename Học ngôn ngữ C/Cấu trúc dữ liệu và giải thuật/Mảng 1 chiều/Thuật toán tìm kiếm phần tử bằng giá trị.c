// VIết thuật toán tìm kiếm phần tử giá trị trong mảng bằng cách nhập vào giá trị cần tìm
#include<stdio.h>
void Research_array(int a[], int n, int x){
    int found = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            printf("Phan tu %d nam o vi tri %d trong mang\n", x, i);
            found++;
        }
    }
    if(!found){
        printf("Khong tim thay phan tu %d trong mang!", x);
    }
}
int main(){        
    int a[] = {1,3,3,3,5};
    int n = sizeof(a) / sizeof(a[0]); // Lấy số phần tử của mảng = 5
    int index; // Giá trị phần tử cần tìm trong mảng
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nNhap phan tu can tim: ");
    scanf("%d", &index);
    Research_array(a,n,index);
    return 0;
}
