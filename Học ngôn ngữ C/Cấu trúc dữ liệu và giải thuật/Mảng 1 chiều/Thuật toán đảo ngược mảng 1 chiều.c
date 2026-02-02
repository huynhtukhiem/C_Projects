#include<stdio.h>
// Ý tưởng:
/*
[1,2,3,4,5] => [5,4,3,2,1]
Hoán đổi phần tử đầu là phần tử cuối; phần tử thứ 2 là phần tử áp chót; duyệt đến nữa mảng thì ngừng 
Giả sử mảng có 5 phần tử => phần tử 0 là phần tử cuối (a[0] = a[5-1]); phần tử thứ 1 là phần tử áp chót (a[1]= a[5-1-1]);
phần tử thứ 2 là phần tử kế áp chót (a[2] = a[5-1-2])
=> công thức tổng quát: a[i] = a[n-1-i]
*/

void Reverse_Array(int a[], int n){
    for(int i = 0; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;        
    }
}

int main(){        
    int a[] = {1,2,3,4,5};
    int n = sizeof(a) / sizeof(a[0]); // Lấy số phần tử của mảng = 5
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nMang dao nguoc: ");
    Reverse_Array(a,n);
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
