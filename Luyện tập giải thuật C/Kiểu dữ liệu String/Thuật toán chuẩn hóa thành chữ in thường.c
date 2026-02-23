#include<stdio.h>
#include<string.h>
void LowerChar(char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32; // Theo bảng mã ASCII
        }
        i++;
    }
}
int main(){
    char str[20];
    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    LowerChar(str);
    printf("%s", str);
    return 0;
}
