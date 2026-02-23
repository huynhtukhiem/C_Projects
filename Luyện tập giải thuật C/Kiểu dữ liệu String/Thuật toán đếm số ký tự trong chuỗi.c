#include<stdio.h>
#include<string.h>
int length(char str[]){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
    char str[20];
    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("So ky tu trong chuoi: %d\n", length(str));
    return 0;
}
