#include<stdio.h>
void MAX_min(int a[], int n){
    int max = a[0]; // ban đầu gán cho giá trị lớn nhất và nhỏ nhất là phần tử đầu tiên trong mảng
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i]; // Nếu phần tử đó lớn hơn max thì nó là max
        }
        if(a[i] < min){
            min = a[i]; // Nếu phần tử đó nhỏ hơn min thì nó là min
        }
    }
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    printf("Phan tu lon nho trong mang la: %d\n", max);
}
int main(){        
    int a[] = {1,3,3,3,5};
    int n = sizeof(a) / sizeof(a[0]); // Lấy số phần tử của mảng = 5
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    MAX_min(a,n);    
    return 0;
}
