#include<stdio.h>
int main(){
    int a[3][3] = {
        {1,0,3},
        {4,5,6},
        {7,8,9}
    };
    int min = a[0][0];
    int max = a[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
          if(a[i][j] > max){
            max = a[i][j];
        }
    }
    printf("Phan tu nho nhat trong mang 2 chieu: %d\n", min);
    printf("Phan tu lon nhat trong mang 2 chieu: %d\n", max);
    return 0;
}
