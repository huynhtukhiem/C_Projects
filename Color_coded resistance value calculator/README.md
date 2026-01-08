# Chương Trình Tính Giá Trị Điện Trở Theo Vòng Màu

## Video demo sản phẩm
...

## Giới thiệu
Chương trình này giúp tính giá trị điện trở dựa trên **vòng màu** theo chuẩn quốc tế. Người dùng chỉ cần chọn màu của từng vòng, chương trình sẽ hiển thị: Giá trị điện trở tương ứng.

## Bảng màu điện trở
| Màu | Giá trị | Hệ số nhân | Sai số (%) |
|-----|--------|------------|------------|
| Đen | 0      | 1          | —          |
| Nâu | 1      | 10         | ±1         |
| Đỏ  | 2      | 100        | ±2         |
| Cam | 3      | 1k         | —          |
| Vàng| 4      | 10k        | —          |
| Xanh lá | 5   | 100k       | —          |
| Xanh dương| 6 | 1M         | —          |
| Tím | 7      | 10M        | —          |
| Xám | 8      | 100M       | —          |
| Trắng | 9    | 1G         | —          |
| Vàng | —     | —          | ±5         |
| Bạc | —      | —          | ±10        |

## Công thức tính toán và logic trong chương trình

- Với điện trở 4 vòng màu: vòng 4 là vòng thể hiện sai số

``` 
Giá trị điện trở = (vòng_1 * 10 + vòng_2) + 10^vòng_3 ±  vòng_4
```

- Với điện trở 5 vòng màu: vòng 5 là vòng thể hiện sai số

``` 
Giá trị điện trở = (vòng_1 * 100 + vòng_2 * 10 + vòng_3) + 10^vòng_4 ±  vòng_5```

```

- Với cách tìm vòng màu điện trở 4 vạch khi đã biết giá trị điện trở:
```
// Gọi 3 số nguyên v1,v2,v3,R lần lượt là 3 vòng màu của điện trở và giá trị điện trở đã biết. 

    int v1,v2,v3,R;

// Chia R cho 10 cho đến khi R còn 2 chữ số, đồng thời ứng với mỗi lần chia chính là bội số của R ứng với vòng 3.

    while(R > 100){
        R /= 10;
        v3++;
    }

// Lấy chữ số hàng chục (vòng 1) của R bằng cách chia cho 10

    v1 = R / 10;

// Lấy chữ số hàng đơn vị (vòng 2) của R bằng cách chia lấy phần dư cho 10
    
    v2 = R % 10;

// Sau khi tìm được v1,v2,v3. Ứng với mỗi số là một vòng màu quy ước bằng mảng chuỗi char *mau[10] = {"Den" ,.... "Trang"};
```
- Trường hợp người dùng không nhập kí tự trong khoảng được cho hoặc nhập một kí tự khác với các kí tự được cho

=> Báo lỗi và nhập lại cho đến khi nhập đúng.

- Sau mỗi phép tính đề xuất các luồng thực hiện: 
  - Tính lại
  - Quay về menu chính
  - Thoát chương trình

