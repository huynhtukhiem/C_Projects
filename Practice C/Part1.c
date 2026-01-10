#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Sinhvien{
    int mssv; // mã số
    char ten[20]; // Tên sinh viên
    float diem; // điểm thi
};

void Nhap_thong_tin(struct Sinhvien sv[], int n){
    printf("===Nhap thong tin sinh vien===\n");
    for(int i = 0; i < n; i++){
        printf("--Sinh vien %d--\n", i+1);
        printf("Nhap ho va ten: ");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

        printf("Nhap MSSV: "); scanf("%d", &sv[i].mssv);
        printf("Nhap diem thi: "); scanf("%f", &sv[i].diem);
        getchar();
        printf("\n");
    }
}

void In_thong_tin(struct Sinhvien sv[], int n){
    system("cls");
    printf("===Thong tin sinh vien===\n");
    for(int i = 0; i < n; i++){
        printf("---Sinh vien %d---\n", i+1);
        printf("MSSV: %d\n", sv[i].mssv);
        printf("Ho va ten: %s\n", sv[i].ten);
        printf("Diem thi: %.2f\n", sv[i].diem);
        printf("--------------\n");
    }
}

void Tim_diem_max(struct Sinhvien sv[], int n){
    double diem_max = sv[0].diem; // Ban đầu gán sinh viên 1 có điểm cao nhất
    char sv_max[20];
    for(int i = 0; i < n; i++){
        if(sv[i].diem > diem_max){
            diem_max = sv[i].diem;
            strcpy(sv_max, sv[i].ten);
        }
    }
    printf("Sinh vien co diem cao nhat: %s\n", sv_max);
    printf("Diem: %.2f\n", diem_max);
}

int main(){
    int num = 3; // Số sinh viên trong lớp
    struct Sinhvien sv[num]; 
    system("cls");
    Nhap_thong_tin(sv,num);
    In_thong_tin(sv,num);
    Tim_diem_max(sv,num);
    return 0;
}
