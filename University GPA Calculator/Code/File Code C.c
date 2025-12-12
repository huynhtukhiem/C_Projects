#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct Subject{
    char name[20]; // subject name
    char type; // Loại môn học: Lí thuyết, thực hành, tích hợp
    int credits; // course credits
    float midterm; // Điểm giữa kì
    float final; // Điểm cuối kì
    int theory_credits; // Số tín chỉ lí thuyết của môn tích hợp
    int practice_credits; // Số tín chỉ thực hành của môn tích hợp
    float score; // Điểm trung bình tổng kết môn
}Subject;

void setColor(int color){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Banner(){
    setColor(11);
    printf("=============================================\n");
    printf("         CHUONG TRINH TINH DIEM MON HOC       \n");
    printf("=============================================\n");
    setColor(15);
}

// Hàm đổi điểm chữ
void Change(float a){
    if(a < 4){
        printf("Hoc lai");
    }
    else if(a <= 4.9){
        printf("D\nXep loai: Trung binh yeu");
    }
    else if(a <= 5.4){
        printf("D+\nXep loai: Trung binh yeu");
    }
    else if(a <= 5.9){
        printf("C\nXep loai: Trung binh");
    }
    else if(a <= 6.9){
        printf("C+\nXep loai: Trung binh");
    }
    else if(a <= 7.9){
        printf("B\nXep loai: Kha");
    }
    else if(a <= 8.4){
        printf("B+\nXep loai: Kha");
    }
    else if(a <= 8.9){
        printf("A\nXep loai: Gioi");
    }
    else{
        printf("A+\nXep loai: Xuat sac");
    }
}

// Hàm in kết quả đẹp
void printResult(char *name, int n, float a[],
                 float midterm, float final, float score10)
{
    float score4 = (score10 / 10) * 4;

    system("cls");
    setColor(11);
    printf("=============================================\n");
    printf("               KET QUA MON HOC               \n");
    printf("=============================================\n\n");
    setColor(15);
    // Tên môn
    setColor(14);
    printf("Mon: %s\n", name);
    setColor(15);
    printf("---------------------------------------------\n");
    for(int i = 0; i < n; i++){
        printf("Cot %-2d: %.3f\n", i+1, a[i]);
    }
    if(midterm >= 0)  printf("Diem giua ky: %.3f\n", midterm);
    if(final   >= 0)  printf("Diem cuoi ky: %.3f\n", final);
    printf("---------------------------------------------\n");
    setColor(10);
    printf("Diem tong ket he 10: %.3f\n", score10);
    printf("Diem tong ket he 4 : %.3f\n", score4);
    setColor(15);
    printf("Diem chu: ");
    Change(score10);
    printf("\n=============================================\n");
}

float Average_regular_score(int n, float a[]){
    float sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum / n;
}

float Average_theory(float a, float b, float c){
    return a*0.2 + b*0.3 + c*0.5;
}

float Average_intergate(float a[], int b, float c[], int d, float e, float f){
    float sum1 = 0;
    for(int i = 0; i < b; i++) sum1 += a[i];
    float score1 = (sum1/b)*0.2 + e*0.3 + f*0.5;

    float sum2 = 0;
    for(int i = 0; i < d; i++) sum2 += c[i];
    float score2 = sum2 / d;

    return (score1*b + score2*d) / (b+d);
}

int main(){
    Subject s;
    Banner();

    printf("Nhap ten mon hoc: ");
    fflush(stdin);
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Nhap loai hoc phan:\n");
    printf("l: Ly thuyet\n");
    printf("t: Thuc hanh\n");
    printf("T: Tich hop\n");
    printf("> ");
    scanf(" %c", &s.type);

    //          LÝ THUYẾT
    if(s.type == 'l'){
        system("cls");
        printf("Tinh diem mon ly thuyet\n");
        printf("Nhap so tin chi: ");
        scanf("%d", &s.credits);

        float regular[s.credits];
        for(int i = 0; i < s.credits; i++){
            printf("Nhap diem thuong ky cot %d: ", i+1);
            scanf("%f", &regular[i]);
        }

        printf("Nhap diem giua ky: ");
        scanf("%f", &s.midterm);
        printf("Nhap diem cuoi ky: ");
        scanf("%f", &s.final);

        s.score = Average_theory(
            Average_regular_score(s.credits, regular),
            s.midterm, s.final
        );

        printResult(s.name, s.credits, regular, s.midterm, s.final, s.score);
    }

    //          THỰC HÀNH
    else if(s.type == 't'){
        system("cls");
        printf("Tinh diem mon thuc hanh\n");
        printf("Nhap so tin chi: ");
        scanf("%d", &s.credits);

        float regular[s.credits];
        for(int i = 0; i < s.credits; i++){
            printf("Nhap diem thuc hanh cot %d: ", i+1);
            scanf("%f", &regular[i]);
        }
        s.midterm = -1; // Thực hành không thi giữa kì và cuối kì
        s.final   = -1; // gán bằng -1 để sử dụng hàm printResult thuận tiện
        s.score   = Average_regular_score(s.credits, regular);

        printResult(s.name, s.credits, regular, -1, -1, s.score);
    }

    //          TÍCH HỢP
    else if(s.type == 'T'){
        system("cls");
        printf("Tinh diem mon tich hop\n");
        printf("Nhap so tin chi: ");
        scanf("%d", &s.credits);

        printf("Nhap so cot diem ly thuyet: ");
        scanf("%d", &s.theory_credits);
        printf("Nhap so cot diem thuc hanh: ");
        scanf("%d", &s.practice_credits);

        float regular_theory[s.theory_credits];
        float regular_practice[s.practice_credits];

        for(int i = 0; i < s.theory_credits; i++){
            printf("Nhap diem ly thuyet cot %d: ", i+1);
            scanf("%f", &regular_theory[i]);
        }
        for(int i = 0; i < s.practice_credits; i++){
            printf("Nhap diem thuc hanh cot %d: ", i+1);
            scanf("%f", &regular_practice[i]);
        }

        printf("Nhap diem giua ky: ");
        scanf("%f", &s.midterm);
        printf("Nhap diem cuoi ky: ");
        scanf("%f", &s.final);

        s.score = Average_intergate(
            regular_theory, s.theory_credits,
            regular_practice, s.practice_credits,
            s.midterm, s.final
        );

        // Gộp 2 mảng lại để in cho đẹp
        int total = s.theory_credits + s.practice_credits;
        float all[total];
        int idx = 0;
        for(int i = 0; i < s.theory_credits; i++) all[idx++] = regular_theory[i];
        for(int i = 0; i < s.practice_credits; i++) all[idx++] = regular_practice[i];

        printResult(s.name, total, all, s.midterm, s.final, s.score);
    }
    return 0;
}
