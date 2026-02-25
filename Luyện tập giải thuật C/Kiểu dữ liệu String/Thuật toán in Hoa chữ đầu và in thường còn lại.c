#include<stdio.h>
#include<string.h>
void Uppercase(char str[]){
    // Xử lý chữ cái đầu
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - ('a' - 'A');
    }
    // Xử lý các chữ còn lại
    int i = 1;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + ('a' - 'A');
        }          
        i++;
    }
}
int main(){
    char str[20];
    printf("Nhap chuoi ky tu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    Uppercase(str);
  
    printf("%s", str);
    return 0;
}
