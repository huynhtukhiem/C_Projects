#include<stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    //Input the element of the array
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Output
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
