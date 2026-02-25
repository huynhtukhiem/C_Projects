#include<stdio.h>
void Input_array(int n, int a[]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void Print_array(int n, int a[]){
    printf("Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void Reverse_array(int n, int a[]){
    for(int i = 0; i < n/2; i++){
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1- i] = temp;
    }
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    Input_array(n,a);
    Print_array(n,a);
    printf("Array reversed: ");
    Reverse_array(n,a);
    Print_array(n,a);
    return 0;
}
