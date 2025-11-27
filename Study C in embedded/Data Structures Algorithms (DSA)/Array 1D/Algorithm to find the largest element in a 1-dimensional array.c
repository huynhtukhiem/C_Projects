#include<stdio.h>
void Find_max(int n, int a[]){
    int max = a[0];
    int index = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            index++;
        }
    }
    printf("The largest number of the array is: %d\n", max);
    for(int i = 0; i < n; i++){
        if(a[i] == max){
            printf("At the position: %d of array\n", i);
        }
    }    
}

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n];
    // Input elements
    for(int i = 0; i < n; i++){
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Print array
    printf("The array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    // Find the max elemen
    Find_max(n,a);
    return 0;
}
