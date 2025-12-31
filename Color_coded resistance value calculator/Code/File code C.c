
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

char *color[] = {"Den", "Nau", "Do", "Vang", "Cam",
"Xanh_la", "Xanh_duong", "Tim", "Xam", "Trang"};

char *tol_color[] = {" ", "Nau", "Do", "Vang_kim", "Bac", "Khong_mau"};
int tol_value[] = {1, 2, 5, 10, 20};

void Bang_mau(){
    printf("[0]: Den\n");
    printf("[1]: Nau\n");
    printf("[2]: Do\n");
    printf("[3]: Vang\n");
    printf("[4]: Cam\n");
    printf("[5]: Xanh_la\n");
    printf("[6]: Xanh_duong\n");
    printf("[7]: Tim\n");
    printf("[8]: Xam\n");
    printf("[9]: Trang\n");
}

void Bang_mau_sai_so(){
    printf("[1]: Nau = 1%%\n");
    printf("[2]: Do = 2%%\n");
    printf("[3]: Vang_kim = 5%%\n");
    printf("[4]: Bac = 10%%\n");
    printf("[5]: Khong_mau = 20%%\n");
}

void Tinh_dien_tro_4_vong_mau(){
    int v1, v2, v3, tol;
    system("cls");
    printf("Chuong trinh tinh dien tro vong mau\n");
    printf("Nhap vong mau thu 1: \n");
    Bang_mau();
    scanf("%d", &v1);
    system("cls");

    printf("Nhap vong mau thu 2: \n");
    Bang_mau();
    scanf("%d", &v2);
    system("cls");

    printf("Nhap vong mau thu 3: \n");
    Bang_mau();
    scanf("%d", &v3);
    system("cls");
    
    printf("Nhap vong mau sai so: \n");
    Bang_mau_sai_so();
    scanf("%d", &tol);
    system("cls");
    
    int kq = (v1*10 + v2) * pow(10, v3);
    printf("Gia tri dien tro: %s %s %s %s = %d Ohm +- %d%% \n",color[v1], color[v2], color[v3], 
        tol_color[tol], kq, tol_value[tol]);
}

void Tinh_dien_tro_5_vong_mau(){
    int v1, v2, v3, v4, tol;
    system("cls");
    printf("Chuong trinh tinh dien tro vong mau\n");
    printf("Nhap vong mau thu 1: \n");
    Bang_mau();
    scanf("%d", &v1);
    system("cls");

    printf("Nhap vong mau thu 2: \n");
    Bang_mau();
    scanf("%d", &v2);
    system("cls");

    printf("Nhap vong mau thu 3: \n");
    Bang_mau();
    scanf("%d", &v3);
    system("cls");

    printf("Nhap vong mau thu 4: \n");
    Bang_mau();
    scanf("%d", &v4);
    system("cls");
    
    printf("Nhap vong mau sai so: \n");
    Bang_mau_sai_so();
    scanf("%d", &tol);
    system("cls");
    
    int kq = (v1*100 + v2*10 + v3) * pow(10, v4);
    printf("Gia tri dien tro: %s %s %s %s %s= %d Ohm +- %d%%\n",color[v1], color[v2],
         color[v3], color[v4], tol_color[tol], kq, tol_value[tol]);
}

void Tim_vong_mau(){
    int s, v1,v2;
    printf("Nhap gia tri dien tro: ");
    scanf("%d", &s);
    
    // Đưa về dạng s = XY * 10^n, với n = 1 => s = XY (hàng chục)
    int n = 0;
    while(s >= 100){
        s /= 10;
        n++;
    }
    v1 = s / 10; // vòng 1 là hàng chục
    v2 = s % 10; // vòng 2 là hàng đơn vị
    printf("Vong mau: %s %s %s\n", color[v1], color[v2], color[n]);
}

int main(){
    int choice;
    printf("=====Chuong trinh tinh dien tro vong mau=====\n");
    printf("[4]: Tinh dien tro 4 vong mau\n");
    printf("[5]: Tinh dien tro 5 vong mau\n");
    printf("[6]: Tim vong mau bang gia tri dien tro\n");
    printf("> ");
    scanf("%d", &choice);

    if(choice == 4){
        Tinh_dien_tro_4_vong_mau();
    }
    else if(choice == 5){
        Tinh_dien_tro_5_vong_mau();
    }
    else if(choice == 6){
        Tim_vong_mau();
    }
    else{
        printf("Khong hop le, thoat chuong trinh!!!");
        return 0;
    }

    return 0;
}
