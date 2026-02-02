# Lý thuyết mảng 1 chiều
Mảng 1 chiều là một cấu trúc dữ liệu tuyến tính, lưu trữ nhiều dữ liệu có giá trị cùng một kiểu dữ liệu với nhau được truy cập bằng chỉ số của chúng, ví dụ:
- mảng các số nguyên: [1,2,3,4]
- mảng các số thập phân: [1.2, 3.4, 5.6]
- mảng các chuỗi ký tự ["abc", "xyz"]
Các phần tử trong mảng có chỉ số của riêng chúng bắt đầu từ số 0 đến n - 1, với n là số phần tử của mảng, ví dụ
- a[1,2,3,4,5] thì vị trí của phần tử '1' là 0, '2' là 1 ,..... '5' là 4
- tương tự với các loại kiểu dữ liệu khác

# Đặc điểm của mảng
hi kháo báo mảng, các phần tử trong mảng được lưu ở stack tại các địa chỉ kế nhau n byte với n là số byte của 1 phần tử, ví dụ
- int a[5] = [1,2,3,4,5];
- thì các phần tử sẽ được lưu ở những ô nhớ trong stack cách nhau 4 byte, vì kiểu dữ liệu int có 4 byte, giả sử là 100,104,108,112,116

# Ưu và nhược điểm của mảng 1 chiều
Ưu điểm
- Đơn giản, dễ hiểu, dễ code, truy cập nhanh với độ phức tạp O(1)

Nhược điểm
- Kích thước cố định, ta chỉ dùng mảng khi ta biết rằng bài toán sẽ dùng tối đa bao nhiêu dữ liệu, nếu ta không biết ta buộc phải khai báo dư dữ liệu => lãng phí tài nguyên
- Việc thay đổi kích thước mảng (Thêm phần tử, xóa phần tử) khá tốn thời gian cho bài toán O(n)

# Khi nào dùng mảng 1 chiều
- Các bài toán mà ta biết trước sẽ dùng bao nhiêu dữ liệu -> ước chừng
- Cần sự truy cập nhanh
- Dự án nhỏ vừa
