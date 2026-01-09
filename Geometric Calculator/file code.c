#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define pi 3.145 // Xấp xỉ giá trị pi lấy 3 chữ số thập phân

void Menu(){
    printf("==================Chuong trinh tinh toan hinh hoc================\n");
    printf("=======Hinh hoc phang=========|========Hinh hoc khong gian=======\n");
    printf("[1]: Hinh chu nhat            |  [15]: Hinh cau\n");
    printf("[2]: Hinh vuong               |  [16]: Hinh tru\n");
    printf("[3]: Hinh tron                |  [17]: Hinh non\n");
    printf("[4]: Hinh tam giac            |  [18]: Hinh hop chu nhat\n");
    printf("[5]: Hinh tam giac deu        |  [19]: Hinh lap phuong\n");
    printf("[6]: Hinh tam giac can        |  [20]: Hinh non cut\n");
    printf("[7]: Hinh tam giac vuong      |  [21]: Hinh lang tru\n");
    printf("[8]: Hinh thang               |  [22]: Hinh chop\n");
    printf("[9]: Hinh thang vuong         |  [23]: Phuong trinh duong thang\n");
    printf("[10]: Hinh thang can          |  [24]: Phuong trinh bac hai\n");     
    printf("[11]: Hinh thoi               |  [25]: Phuong trinh bac ba\n");
    printf("[12]: Hinh binh hanh          |  [0]: Thoat \n");
    printf("[13]: Hinh ngu giac deu       |  \n");
    printf("[14]: Hinh luc giac deu       |  \n");
}

void Menu(); // Hiển thị các hình học cần tính toán
void Hinh_chu_nhat();
void Hinh_vuong();
void Hinh_tron();
void Hinh_tam_giac(); 
void Hinh_tam_giac_deu();
void Hinh_tam_giac_can();
void Hinh_tam_giac_vuong();
void Hinh_thang();
void Hinh_thang_vuong();
void Hinh_thang_can();
void Hinh_thoi();
void Hinh_binh_hanh();
void Hinh_ngu_giac_deu();
void Hinh_luc_giac_deu();
void Hinh_cau();
void Hinh_tru();
void Hinh_non();
void Hinh_hop_chu_nhat();
void Hinh_lap_phuong();
void Hinh_non_cut();
void Hinh_lang_tru();
void Hinh_chop();
void Phuong_trinh_duong_thang();
void Phuong_trinh_bac_hai();
void Phuong_trinh_bac_ba();

void Hinh_chu_nhat(){
    int a,b,S,C;
    double h;
    printf("=====Hinh chu nhat=====\n");
    printf("Nhap chieu dai: "); scanf("%d", &a);
    printf("Nhap chieu rong: "); scanf("%d", &b);
    S = a*b;
    C = 2 * (a+b);
    h = sqrt(pow(a,2) + pow(b,2));
    printf("Dien tich hinh chu nhat: %d\n", S);
    printf("Chu vi hinh chu nhat: %d\n", C);
    printf("Duong cheo hinh chu nhat: %.3f\n", h);
    system("pause");
}

void Hinh_vuong(){
    int a,S,C;
    double h;
    printf("=====Hinh vuong=====\n");
    printf("Nhap do dai canh: "); scanf("%d", &a);
    S = pow(a,2);
    C = 4*a;
    h = a * sqrt(2);
    printf("Dien tich hinh vuong: %d\n", S);
    printf("Chu vi hinh vuong: %d\n", C);
    printf("Duong cheo hinh vuong: %.3f\n", h);
    system("pause");
}

void Hinh_tron(){
    int r,d;
    double S, C;
    printf("=====Hinh tron=====\n");
    printf("Nhap ban kinh: ");
    scanf("%d", &r);
    d = 2 * r;
    C = 2 * pi * r;
    S = pi * r * r;
    printf("Duong kinh hinh tron: %d\n", d);
    printf("Chu vi hinh tron: %.3f\n", C);
    printf("Dien tich hinh tron: %.3f\n", S);
    system("pause");
}

void Hinh_tam_giac(){
    int a, b, c;
    double C, S, p;
    printf("=====Hinh tam giac=====\n");
    printf("Nhap canh a: "); scanf("%d", &a);
    printf("Nhap canh b: "); scanf("%d", &b);
    printf("Nhap canh c: "); scanf("%d", &c);
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Ba canh khong tao thanh tam giac!\n");
        system("pause");
        return;
    }
    C = a + b + c;
    p = C / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Chu vi tam giac: %.3f\n", C);
    printf("Dien tich tam giac: %.3f\n", S);
    system("pause");
}

void Hinh_tam_giac_deu(){
    int a;
    double C, S, h;
    printf("=====Hinh tam giac deu=====\n");
    printf("Nhap do dai canh: ");
    scanf("%d", &a);
    C = 3 * a;
    h = a * sqrt(3) / 2;
    S = a * a * sqrt(3) / 4;
    printf("Chu vi tam giac deu: %.3f\n", C);
    printf("Chieu cao tam giac deu: %.3f\n", h);
    printf("Dien tich tam giac deu: %.3f\n", S);
    system("pause");
}

void Hinh_tam_giac_can(){
    int a, b;
    double h, S, C;
    printf("=====Hinh tam giac can=====\n");
    printf("Nhap do dai canh ben (a): ");
    scanf("%d", &a);
    printf("Nhap do dai day (b): ");
    scanf("%d", &b);
    if (2 * a <= b) {
        printf("Khong tao thanh tam giac can!\n");
        system("pause");
        return;
    }
    h = sqrt(a * a - (b * b) / 4.0);
    C = 2 * a + b;
    S = b * h / 2;
    printf("Chu vi tam giac can: %.3f\n", C);
    printf("Chieu cao tam giac can: %.3f\n", h);
    printf("Dien tich tam giac can: %.3f\n", S);
    system("pause");
}

void Hinh_tam_giac_vuong(){
    int a, b;
    double c, S, C;
    printf("=====Hinh tam giac vuong=====\n");
    printf("Nhap canh goc vuong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap canh goc vuong thu hai: ");
    scanf("%d", &b);
    c = sqrt(a * a + b * b);
    C = a + b + c;
    S = (a * b) / 2.0;
    printf("Canh huyen: %.3f\n", c);
    printf("Chu vi tam giac vuong: %.3f\n", C);
    printf("Dien tich tam giac vuong: %.3f\n", S);
    system("pause");
}

void Hinh_thang(){
    int a, b, c, d;
    double h, S, C;
    printf("=====Hinh thang=====\n");
    printf("Nhap day lon (a): ");
    scanf("%d", &a);
    printf("Nhap day nho (b): ");
    scanf("%d", &b);
    printf("Nhap canh ben thu nhat (c): ");
    scanf("%d", &c);
    printf("Nhap canh ben thu hai (d): ");
    scanf("%d", &d);
    printf("Nhap chieu cao (h): ");
    scanf("%lf", &h);
    C = a + b + c + d;
    S = ((a + b) * h) / 2.0;
    printf("Chu vi hinh thang: %.3f\n", C);
    printf("Dien tich hinh thang: %.3f\n", S);
    system("pause");
}

void Hinh_thang_vuong(){
    int a, b, c;
    double h, S, C;
    printf("=====Hinh thang vuong=====\n");
    printf("Nhap day lon (a): ");
    scanf("%d", &a);
    printf("Nhap day nho (b): ");
    scanf("%d", &b);
    printf("Nhap chieu cao (h): ");
    scanf("%lf", &h);
    c = sqrt((a - b) * (a - b) + h * h);
    C = a + b + h + c;
    S = ((a + b) * h) / 2.0;
    printf("Canh ben xiên: %.3f\n", c);
    printf("Chu vi hinh thang vuong: %.3f\n", C);
    printf("Dien tich hinh thang vuong: %.3f\n", S);
    system("pause");
}

void Hinh_thang_can(){
    int a, b, c;
    double h, S, C;
    printf("=====Hinh thang can=====\n");
    printf("Nhap day lon (a): ");
    scanf("%d", &a);
    printf("Nhap day nho (b): ");
    scanf("%d", &b);
    printf("Nhap canh ben (c): ");
    scanf("%d", &c);
    h = sqrt(c * c - ((a - b) * (a - b)) / 4.0);
    C = a + b + 2 * c;
    S = ((a + b) * h) / 2.0;
    printf("Chieu cao hinh thang can: %.3f\n", h);
    printf("Chu vi hinh thang can: %.3f\n", C);
    printf("Dien tich hinh thang can: %.3f\n", S);
    system("pause");
}

void Hinh_thoi(){
    int a;
    double d1, d2, S, C;
    printf("=====Hinh thoi=====\n");
    printf("Nhap do dai canh: ");
    scanf("%d", &a);
    printf("Nhap duong cheo thu nhat: ");
    scanf("%lf", &d1);
    printf("Nhap duong cheo thu hai: ");
    scanf("%lf", &d2);
    C = 4 * a;
    S = (d1 * d2) / 2.0;
    printf("Chu vi hinh thoi: %.3f\n", C);
    printf("Dien tich hinh thoi: %.3f\n", S);
    system("pause");
}

void Hinh_binh_hanh(){
    int a, b;
    double h, S, C;
    printf("=====Hinh binh hanh=====\n");
    printf("Nhap canh day (a): ");
    scanf("%d", &a);
    printf("Nhap canh ben (b): ");
    scanf("%d", &b);
    printf("Nhap chieu cao (h): ");
    scanf("%lf", &h);
    C = 2 * (a + b);
    S = a * h;
    printf("Chu vi hinh binh hanh: %.3f\n", C);
    printf("Dien tich hinh binh hanh: %.3f\n", S);
    system("pause");
}

void Hinh_ngu_giac_deu(){
    int a;
    double C, S;
    printf("=====Hinh ngu giac deu=====\n");
    printf("Nhap do dai canh: ");
    scanf("%d", &a);
    C = 5 * a;
    S = (a * a * sqrt(25 + 10 * sqrt(5))) / 4.0;
    printf("Chu vi hinh ngu giac deu: %.3f\n", C);
    printf("Dien tich hinh ngu giac deu: %.3f\n", S);
    system("pause");
}

void Hinh_luc_giac_deu(){
    int a;
    double C, S;
    printf("=====Hinh luc giac deu=====\n");
    printf("Nhap do dai canh: ");
    scanf("%d", &a);
    C = 6 * a;
    S = (3 * sqrt(3) * a * a) / 2.0;
    printf("Chu vi hinh luc giac deu: %.3f\n", C);
    printf("Dien tich hinh luc giac deu: %.3f\n", S);
    system("pause");
}

void Hinh_cau(){
    int r;
    double S, V;
    printf("=====Hinh cau=====\n");
    printf("Nhap ban kinh: ");
    scanf("%d", &r);
    S = 4 * pi * r * r;
    V = (4.0 / 3.0) * pi * r * r * r;
    printf("Dien tich be mat hinh cau: %.3f\n", S);
    printf("The tich hinh cau: %.3f\n", V);
    system("pause");
}

void Hinh_tru(){
    int r, h;
    double S_day, S_xq, S_tp, V;
    printf("=====Hinh tru=====\n");
    printf("Nhap ban kinh day: ");
    scanf("%d", &r);
    printf("Nhap chieu cao: ");
    scanf("%d", &h);
    S_day = pi * r * r;
    S_xq = 2 * pi * r * h;
    S_tp = 2 * S_day + S_xq;
    V = S_day * h;
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh tru: %.3f\n", V);
    system("pause");
}

void Hinh_non(){
    int r, h;
    double l, S_day, S_xq, S_tp, V;
    printf("=====Hinh non=====\n");
    printf("Nhap ban kinh day: ");
    scanf("%d", &r);
    printf("Nhap chieu cao: ");
    scanf("%d", &h);
    l = sqrt(r * r + h * h);
    S_day = pi * r * r;
    S_xq = pi * r * l;
    S_tp = S_day + S_xq;
    V = (1.0 / 3.0) * S_day * h;
    printf("Duong sinh: %.3f\n", l);
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh non: %.3f\n", V);
    system("pause");
}

void Hinh_hop_chu_nhat(){
    int a, b, c;
    double S_xq, S_tp, V, d;
    printf("=====Hinh hop chu nhat=====\n");
    printf("Nhap chieu dai (a): ");
    scanf("%d", &a);
    printf("Nhap chieu rong (b): ");
    scanf("%d", &b);
    printf("Nhap chieu cao (c): ");
    scanf("%d", &c);
    S_xq = 2 * (a + b) * c;
    S_tp = 2 * (a * b + b * c + c * a);
    V = a * b * c;
    d = sqrt(a * a + b * b + c * c);
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh hop chu nhat: %.3f\n", V);
    printf("Duong cheo: %.3f\n", d);
    system("pause");
}

void Hinh_lap_phuong(){
    int a;
    double S_xq, S_tp, V, d;
    printf("=====Hinh lap phuong=====\n");
    printf("Nhap do dai canh: ");
    scanf("%d", &a);
    S_xq = 4 * a * a;
    S_tp = 6 * a * a;
    V = a * a * a;
    d = a * sqrt(3);
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh lap phuong: %.3f\n", V);
    printf("Duong cheo: %.3f\n", d);
    system("pause");
}

void Hinh_non_cut(){
    int r1, r2, h;
    double l, S_xq, S_tp, V;
    printf("=====Hinh non cut=====\n");
    printf("Nhap ban kinh day lon: ");
    scanf("%d", &r1);
    printf("Nhap ban kinh day nho: ");
    scanf("%d", &r2);
    printf("Nhap chieu cao: ");
    scanf("%d", &h);
    l = sqrt(h * h + (r1 - r2) * (r1 - r2));
    S_xq = pi * (r1 + r2) * l;
    S_tp = pi * (r1 * r1 + r2 * r2) + S_xq;
    V = (1.0 / 3.0) * pi * h * (r1 * r1 + r1 * r2 + r2 * r2);
    printf("Duong sinh: %.3f\n", l);
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh non cut: %.3f\n", V);
    system("pause");
}

void Hinh_lang_tru(){
    int a, h;
    double S_day, S_xq, S_tp, V;
    printf("=====Hinh lang tru tam giac deu=====\n");
    printf("Nhap canh day tam giac: ");
    scanf("%d", &a);
    printf("Nhap chieu cao lang tru: ");
    scanf("%d", &h);
    S_day = (a * a * sqrt(3)) / 4.0;
    S_xq = 3 * a * h;
    S_tp = 2 * S_day + S_xq;
    V = S_day * h;
    printf("Dien tich xung quanh: %.3f\n", S_xq);
    printf("Dien tich toan phan: %.3f\n", S_tp);
    printf("The tich hinh lang tru: %.3f\n", V);
    system("pause");
}

void Hinh_chop(){
    int a, h;
    double S_day, V;
    printf("=====Hinh chop tu giac deu=====\n");
    printf("Nhap canh day: ");
    scanf("%d", &a);
    printf("Nhap chieu cao: ");
    scanf("%d", &h);
    S_day = a * a;
    V = (1.0 / 3.0) * S_day * h;
    printf("Dien tich day: %.3f\n", S_day);
    printf("The tich hinh chop: %.3f\n", V);
    system("pause");
}

void Phuong_trinh_duong_thang(){
    double a, b;
    printf("=====Phuong trinh duong thang: y = ax + b=====\n");
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Phuong trinh duong thang: y = %.3fx + %.3f\n", a, b);
    if (a == 0) {
        printf("Day la duong thang song song voi truc Ox\n");
    } else {
        printf("Giao diem voi truc Ox: x = %.3f\n", -b / a);
        printf("Giao diem voi truc Oy: y = %.3f\n", b);
    }
    system("pause");
}

void Phuong_trinh_bac_hai(){
    double a, b, c, delta, x1, x2;
    printf("=====Phuong trinh bac hai: ax^2 + bx + c = 0=====\n");
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);
    
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            printf("Phuong trinh co nghiem: x = %.3f\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.3f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.3f\n", x1);
            printf("x2 = %.3f\n", x2);
        }
    }
    system("pause");
}

void Phuong_trinh_bac_ba(){
    double a, b, c, d;
    printf("=====Phuong trinh bac ba: ax^3 + bx^2 + cx + d = 0=====\n");
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);
    printf("Nhap he so d: ");
    scanf("%lf", &d);
    
    if (a == 0) {
        printf("Day khong phai phuong trinh bac ba!\n");
    } else {
        printf("Phuong trinh: %.3fx^3 + %.3fx^2 + %.3fx + %.3f = 0\n", a, b, c, d);
        printf("Giai phuong trinh bac ba can su dung cong thuc Cardano phuc tap.\n");
    }
    system("pause");
}

int main(){
    int choice;
    do{
        system("cls");
        Menu();
        printf("> ");
        scanf("%d", &choice);
        switch(choice){
            case 1: Hinh_chu_nhat(); break;
            case 2: Hinh_vuong(); break;
            case 3: Hinh_tron(); break;
            case 4: Hinh_tam_giac(); break;
            case 5: Hinh_tam_giac_deu(); break;
            case 6: Hinh_tam_giac_can(); break;
            case 7: Hinh_tam_giac_vuong(); break;
            case 8: Hinh_thang(); break;
            case 9: Hinh_thang_vuong(); break;
            case 10: Hinh_thang_can(); break;
            case 11: Hinh_thoi(); break;
            case 12: Hinh_binh_hanh(); break;
            case 13: Hinh_ngu_giac_deu(); break;
            case 14: Hinh_luc_giac_deu(); break;
            case 15: Hinh_cau(); break;
            case 16: Hinh_tru(); break;
            case 17: Hinh_non(); break;
            case 18: Hinh_hop_chu_nhat(); break;
            case 19: Hinh_lap_phuong(); break;
            case 20: Hinh_non_cut(); break;
            case 21: Hinh_lang_tru(); break;
            case 22: Hinh_chop(); break;
            case 23: Phuong_trinh_duong_thang(); break;
            case 24: Phuong_trinh_bac_hai(); break;
            case 25: Phuong_trinh_bac_ba(); break;
            case 0: 
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                system("pause");
        }
    }while(choice != 0);
    
    return 0;
}
