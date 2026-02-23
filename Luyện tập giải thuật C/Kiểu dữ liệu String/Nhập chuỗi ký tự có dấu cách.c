#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Nhap ho va ten: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    printf("Ho va ten cua ban la: %s\n", name);
    return 0;
}
