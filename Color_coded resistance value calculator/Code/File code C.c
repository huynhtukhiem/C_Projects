#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ===== BANG MAU CHUAN ===== */
char *color[] = {"Den", "Nau", "Do", "Cam", "Vang",
    "Luc", "Lam", "Tim", "Xam", "Trang"};

/* ===== BANG MAU SAI SO ===== */
char *tol_color[] = {"Nau", "Do", "Vang_kim", "Bac", "Khong_mau"};
int tol_value[] = {1, 2, 5, 10, 20};

/* ===== HIEN THI BANG MAU ===== */
void Bang_mau(){
    printf("[0]: Den\n[1]: Nau\n[2]: Do\n[3]: Cam\n[4]: Vang\n");
    printf("[5]: Luc\n[6]: Lam\n[7]: Tim\n[8]: Xam\n[9]: Trang\n");
}

/* ===== HIEN THI BANG MAU SAI SO ===== */
void Bang_mau_sai_so(){
    printf("[0]: Nau = 1%%\n");
    printf("[1]: Do = 2%%\n");
    printf("[2]: Vang_kim = 5%%\n");
    printf("[3]: Bac = 10%%\n");
    printf("[4]: Khong_mau = 20%%\n");
}

/* ===== TINH DIEN TRO 4 VONG ===== */
void Tinh_dien_tro_4_vong_mau(){
    int v1, v2, v3, tol;
    int kq;

    system("cls");
    printf("Tinh dien tro 4 vong mau\n");

    Bang_mau(); scanf("%d", &v1); system("cls");
    Bang_mau(); scanf("%d", &v2); system("cls");
    Bang_mau(); scanf("%d", &v3); system("cls");

    Bang_mau_sai_so(); scanf("%d", &tol); system("cls");

    kq = (v1 * 10 + v2) * pow(10, v3);

    printf("Gia tri dien tro: %s %s %s %s = %d Ohm ±%d%%\n",
           color[v1], color[v2], color[v3],
           tol_color[tol], kq, tol_value[tol]);
}

/* ===== TINH DIEN TRO 5 VONG ===== */
void Tinh_dien_tro_5_vong_mau(){
    int v1, v2, v3, v4, tol;
    int kq;

    system("cls");
    printf("Tinh dien tro 5 vong mau\n");

    Bang_mau(); scanf("%d", &v1); system("cls");
    Bang_mau(); scanf("%d", &v2); system("cls");
    Bang_mau(); scanf("%d", &v3); system("cls");
    Bang_mau(); scanf("%d", &v4); system("cls");

    Bang_mau_sai_so(); scanf("%d", &tol); system("cls");

    kq = (v1 * 100 + v2 * 10 + v3) * pow(10, v4);

    printf("Gia tri dien tro: %s %s %s %s %s = %d Ohm ±%d%%\n",
           color[v1], color[v2], color[v3],
           color[v4], tol_color[tol], kq, tol_value[tol]);
}

/* ===== TRUY NGUOC VONG MAU (4 VONG) ===== */
void Tim_vong_mau(){
    int R, n = 0;
    int v1, v2;

    printf("Nhap gia tri dien tro (Ohm): ");
    scanf("%d", &R);

    while (R >= 100) {
        R /= 10;
        n++;
    }
    v1 = R / 10; // Lấy hàng chục
    v2 = R % 10; // Lấy hàng đơn vị

    printf("Vong mau: %s %s %s\n",
           color[v1], color[v2], color[n]);
}

/* ===== MAIN ===== */
int main(){
    int choice;

    printf("===== CHUONG TRINH DIEN TRO VONG MAU =====\n");
    printf("[4] Tinh dien tro 4 vong\n");
    printf("[5] Tinh dien tro 5 vong\n");
    printf("[6] Tim vong mau tu gia tri\n");
    printf("> ");
    scanf("%d", &choice);

    if (choice == 4)
        Tinh_dien_tro_4_vong_mau();
    else if (choice == 5)
        Tinh_dien_tro_5_vong_mau();
    else if (choice == 6)
        Tim_vong_mau();
    else
        printf("Lua chon khong hop le!\n");

    return 0;
}
