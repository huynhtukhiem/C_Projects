#include<stdio.h>
#define MAX 10
int main(){
    int a[MAX] = {2,3,14,3,4};
    int size = 5; // Số phần tử trong mảng    
    int x = 10; // Phần tử cần chèn
    int y = 2; // Vị trí cần chèn
    //Kiểm tra xem mảng đã đầy chưa
    if(size > MAX){
        printf("Mang da day, khong the chen");
        return 1;
    }
    // Kiểm tra xem vị trí chèn có hợp lệ không
    if(y < 0 || y > size){
        printf("Vi tri chen khong hop le!");
        return 1;
    }
    // Dời các phần tử sau vị trí cần chèn về bên phải và chèn phần tử 
    for(int i = size; i > y; --i){
        a[i] = a[i-1]; // Dời
    }
    a[y] = x; // Gán giá trị
    ++size;

    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
