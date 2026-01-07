#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void Bang_mau(); // Hiện bảng màu để chọn
void Bang_sai_so(); // Hiện bảng màu sai số để chọn
void Tinh_4_vong_mau(); // Tính điện trở 4 vòng màu
void Tinh_5_vong_mau(); // Tính điện trở 5 vòng màu
void Chuan_hoa(double R, double sai_so); // In ra kết quả dạng Ohm, k Ohm, M Ohm 
void Tim_vong_mau(int R); // Tìm vòng màu khi biết giá trị điện trở (R 4 vòng màu)

void Bang_mau(){
    printf("[0]: Den\n[1]: Nau\n[2]: Do\n[3]: Cam\n[4]: Vang\n");
    printf("[5]: Xanh_la\n[6]: Xanh_duong\n[7]: Tim\n[8]: Xam\n[9]: Trang\n");
}

const char *mau[10] = {"Den", "Nau", "Do", "Cam", "Vang",
"Xanh_la", "Xanh_duong", "Tim", "Xam", "Trang"}; // Mảng các chuỗi dùng để in lại màu sau khi chọn

void Bang_sai_so(){
    printf("[0]: Den __\n");
    printf("[1]: Nau 1%%\n");
    printf("[2]: Do 2%%\n");
    printf("[3]: Cam __\n");
    printf("[4]: Vang __\n");
    printf("[5]: Xanh_la 0.5%%\n");
    printf("[6]: Xanh_duong 0.25%%\n");
    printf("[7]: Tim 0.10%%\n");
    printf("[8]: Xam 0.05%%\n");
    printf("[9]: Trang __\n");
    printf("[10]: Vang_kim 5%% \n");
    printf("[11]: Bac 10%%\n");
    printf("[12]: Khong_co 20%%\n");
}

const char *mau_sai_so[13] = {"Den", "Nau", "Do", "Cam", "Vang",
     "Xanh la", "Xanh duong", "Tim", "Xam", "Trang",
      "Vang kim", "Bac", "Khong mau"}; // Mảng các chuỗi dùng để in lại màu sai số đã chọn

double sai_so[] = {0, 1, 2, 0, 0, 0.5, 0.25, 0.10,
     0.05, 0, 5, 10, 20}; // Mảng để in ra lại giá trị sai số

void Chuan_hoa(double R, double sai_so){
    if(R >= 1000000){
        printf("Gia tri dien tro: %.2fM Ohm +- %.2f%%", R/1000000, sai_so);
    }
    else if(R >= 1000){
        printf("Gia tri dien tro: %.2fk Ohm +- %.2f%%", R/1000, sai_so);
    }
    else{
        printf("Gia tri dien tro: %.0f Ohm +- %.2f%%", R, sai_so);
    }
}   

void Tinh_4_vong_mau(){
    int a,b,c,d; // Chọn các vòng màu
    double gia_tri; // Giá trị điện trở
    printf("=====NHAP VONG MAU THU NHAT=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &a);
    system("cls");

    printf("=====NHAP VONG MAU THU HAI=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &b);
    system("cls");

    printf("=====NHAP VONG MAU THU BA=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &c);
    system("cls");

    printf("=====NHAP VONG MAU SAI SO=====\n");
    Bang_sai_so();
    printf("> ");
    scanf("%d", &d);
    system("cls");

    printf("Dien tro: ");
    printf("%s %s %s %s\n", mau[a], mau[b], mau[c], mau_sai_so[d]);
    
    gia_tri = (a*10 + b) * pow(10,c); // Tính giá trị điện trở
    Chuan_hoa(gia_tri, sai_so[d]); // In kết quả
}

void Tinh_5_vong_mau(){
    int a,b,c,d,e; // Các vòng màu
    double gia_tri;
    printf("=====NHAP VONG MAU THU NHAT=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &a);
    system("cls");

    printf("=====NHAP VONG MAU THU HAI=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &b);
    system("cls");

    printf("=====NHAP VONG MAU THU BA=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &c);
    system("cls");

    printf("=====NHAP VONG MAU THU TU=====\n");
    Bang_mau();
    printf("> ");
    scanf("%d", &d);
    system("cls");

    printf("=====NHAP VONG MAU SAI SO=====\n");
    Bang_sai_so();
    printf("> ");
    scanf("%d", &e);
    system("cls");

    printf("Dien tro: ");
    printf("%s %s %s %s %s\n", mau[a], mau[b], mau[c], mau[d], mau_sai_so[e]);
    
    gia_tri = (a*100 + b*10 + c) * pow(10,d); // Tính giá trị điện trở
    Chuan_hoa(gia_tri, sai_so[e]); // In kết quả
}

void Tim_vong_mau(int R){
    int v1,v2,v3; // Các vòng màu cần tìm
    v3 = 0; // vòng 3 ban đầu bằng 0 <=> 10^0 = 10
    while(R >= 100){
        R /= 10; // Chia cho 10 cho đến khi chỉ còn 2 số
        v3++; // Đếm số mũ của vòng 3 ứng với màu đó
    }
    v1 = R / 10; // Lúc này số đầu là vòng 1
    v2 = R % 10; // Số dư là vòng 2

    printf("%s %s %s\n", mau[v1], mau[v2], mau[v3]);
}

int main(){
    int choice;
    printf("=====Resistor_Value_Reader=====\n");
    printf("[1]: Tinh dien tro 4 vong mau\n");
    printf("[2]: Tinh dien tro 5 vong mau\n");
    printf("[3]: Tim vong mau khi biet gia tri dien tro\n");
    printf("[0]: Thoat chuong trinh\n");
    printf("> ");
    scanf("%d", &choice);
    
    if(choice == 0){
        return 0;
    }
    else if(choice == 1){
        system("cls");
        Tinh_4_vong_mau();
    }
    else if(choice == 2){
        system("cls");
        Tinh_5_vong_mau();
    }
    else if(choice == 3){
        int R;
        printf("====Tim vong mau cua dien tro 4 vong mau====\n");
        printf("Nhap gia tri dien tro (Dua ve Ohm, Vi du: 4.7k Ohm = 4700)\n");
        printf("> ");
        scanf("%d", &R);
        system("cls");
        Tim_vong_mau(R);
    }
    return 0;
}
