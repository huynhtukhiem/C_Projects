// Công cụ tính giá trị điện trở
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void Menu_vong_mau(){
    printf("[0]: Den\n");
    printf("[1]: Nau\n");
    printf("[2]: Do\n");
    printf("[3]: Cam\n");
    printf("[4]: Vang\n");
    printf("[5]: Xanh la\n");
    printf("[6]: Xanh duong\n");
    printf("[7]: Tim\n");
    printf("[8]: Xam\n");
    printf("[9]: Trang\n");
}

void Menu_vong_mau_sai_so(){
    printf("[0]: Den = ___\n");
    printf("[1]: Nau = 1%%\n");
    printf("[2]: Do = 2%%\n");
    printf("[3]: Cam = ___\n");
    printf("[4]: Vang = ___\n");
    printf("[5]: Xanh la = 0.5%%\n");
    printf("[6]: Xanh duong = 0.25%%\n");
    printf("[7]: Tim = 0.1%%\n");
    printf("[8]: Xam = 0.05%%\n");
    printf("[9]: Trang = ___\n");
    printf("[10]: Vang kim = 5%%\n");
    printf("[11]: Bac = 10%%\n");
    printf("[12]: Khong mau = 20%%\n");
}

const char *mau[10] = {"Den", "Nau", "Do", "Cam", "Vang", "Xanh_la", "Xanh_duong",
"Tim", "Xam", "Trang"};

const char *mau_sai_so[13] = {"Den", "Nau", "Do", "Cam", "Vang", "Xanh_la", "Xanh_duong",
"Tim", "Xam", "Trang", "Vang_kim", "Bac", "Khong_mau"};

double sai_so[13] = {0,1,2,0,0,0.5,0.25,0.1,0.05,0,5,10,20};

void Tinh_dien_tro_4_vong(){
    int v1, v2, v3, v4;
    double kq;

    system("cls");
    printf("Nhap vong mau thu 1:\n");
    Menu_vong_mau();
    scanf("%d", &v1);

    system("cls");
    printf("Nhap vong mau thu 2:\n");
    Menu_vong_mau();
    scanf("%d", &v2);

    system("cls");
    printf("Nhap vong mau he so nhan:\n");
    Menu_vong_mau();
    scanf("%d", &v3);

    system("cls");
    printf("Nhap vong mau sai so:\n");
    Menu_vong_mau_sai_so();
    scanf("%d", &v4);

    kq = (v1 * 10 + v2) * pow(10, v3);

    printf("\nDien tro 4 vong mau: %s %s %s %s\n",
           mau[v1], mau[v2], mau[v3], mau_sai_so[v4]);

    if (kq < 1000) {
        printf("Gia tri: %.0f Ohm +- %.2f%%\n", kq, sai_so[v4]);
    }
    else if (kq < 1000000) {
        printf("Gia tri: %.2f kOhm +- %.2f%%\n", kq / 1000, sai_so[v4]);
    }
    else {
        printf("Gia tri: %.2f MOhm +- %.2f%%\n", kq / 1000000, sai_so[v4]);
    }
}

void Tinh_dien_tro_5_vong(){
    int v1, v2, v3, v4, v5;
    double kq;

    system("cls");
    printf("Nhap vong mau thu 1:\n");
    Menu_vong_mau();
    scanf("%d", &v1);

    system("cls");
    printf("Nhap vong mau thu 2:\n");
    Menu_vong_mau();
    scanf("%d", &v2);

    system("cls");
    printf("Nhap vong mau thu 3:\n");
    Menu_vong_mau();
    scanf("%d", &v3);

    system("cls");
    printf("Nhap vong mau he so nhan:\n");
    Menu_vong_mau();
    scanf("%d", &v4);

    system("cls");
    printf("Nhap vong mau sai so:\n");
    Menu_vong_mau_sai_so();
    scanf("%d", &v5);

    kq = (v1 * 100 + v2 * 10 + v3) * pow(10, v4);

    printf("\nDien tro 5 vong mau: %s %s %s %s %s\n",
           mau[v1], mau[v2], mau[v3], mau[v4], mau_sai_so[v5]);

    if (kq < 1000) {
        printf("Gia tri: %.0f Ohm +- %.2f%%\n", kq, sai_so[v5]);
    }
    else if (kq < 1000000) {
        printf("Gia tri: %.2f kOhm +- %.2f%%\n", kq / 1000, sai_so[v5]);
    }
    else {
        printf("Gia tri: %.2f MOhm +- %.2f%%\n", kq / 1000000, sai_so[v5]);
    }
}


int main(){
    int choice;
    do{
        printf("===Tinh gia tri dien tro===\n");
        printf("[1]: Dien tro 4 vong mau\n");
        printf("[2]: Dien tro 5 vong mau\n");
        printf("> "); scanf("%d", &choice);
        if(choice != 1 && choice != 2){
            printf("Lua chon khong hop le vui long nhap lai!!\n");
        }
        switch(choice){
            case 1: Tinh_dien_tro_4_vong(); break;
            case 2: Tinh_dien_tro_5_vong(); break;
        }
    }while(choice != 1 && choice != 2);
}
