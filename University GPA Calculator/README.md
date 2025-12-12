# 📘 CHƯƠNG TRÌNH TÍNH ĐIỂM MÔN HỌC (C LANGUAGE)
## 📌 Video demo
..
## 📌 Mô tả sơ lược
- Ngày thực hiện: 5/12/2025
- Ngày hoàn thành: 12/12/2025
- Người thực hiện: Huỳnh Tử Khiêm
- Ý tưởng: Web: [https://sv.iuh.edu.vn/](https://sv.iuh.edu.vn/)
- Phần mềm thực hiện: Visual Studio Code và DevC++
- Người hỗ trợ: Bạn bè, Google, Chatgpt, Claude
- Trường đại học Công nghiệp TPHCM
   
## 📌 Giới thiệu
Đây là chương trình hoặc có thể xem là dự án về C đầu tiên tôi viết để có thể tính điểm tổng kết môn một cách nhanh – chính xác – trực quan.  
Hỗ trợ đầy đủ 3 loại học phần:
- **Lý thuyết**
-  **Thực hành**
-  **Tích hợp (Lý thuyết + Thực hành)**

## 📌 Chức năng
Nhập các loại điểm thi gồm: Thường kỳ, giữa kỳ và cuối kỳ. Sau đó chương trình sẽ tính toán điểm tổng kết môn học và quy đổi dựa trên công thức do nhà trường cung cấp gồm:
  - Học phần lý thuyết:
```
Điểm tổng kết môn = Điểm trung bình thường kỳ * 20% + Điểm thi giữa kỳ * 30% + Điểm thi cuối kỳ * 50%
```
 - Học phần thực hành:
```
Điểm tổng kết môn  = Trung bình cộng các cột thực hành
```
  - Học phần tích hợp:
```
Điểm tổng kết môn = (Điểm tổng kết môn lý thuyết * Số tín chỉ lý thuyết) + (Điểm tổng kết môn thực hành * Số tín chỉ thực hành) / Số tín chỉ
```
  - Quy ước điểm chữ và xếp loại

| Điểm hệ 10 | Điểm chữ | Xếp loại             |
|------------|----------|----------------------|
| 0.0 – 3.9  | F        | Học lại              |
| 4.0 – 4.9  | D        | Trung bình yếu       |
| 5.0 – 5.4  | D+       | Trung bình yếu       |
| 5.5 – 5.9  | C        | Trung bình           |
| 6.0 – 6.9  | C+       | Trung bình           |
| 7.0 – 7.9  | B        | Khá                  |
| 8.0 – 8.4  | B+       | Khá                  |
| 8.5 – 8.9  | A        | Giỏi                 |
| 9.0 – 10.0 | A+       | Xuất sắc             |

## 📌 Personal Notes
Sau khi hoàn thành chương trình này, tôi đã: 
- Hoàn thành dự án đầu tay một cách nghiêm túc trong mảng lập trình C
- Hiểu cách sử dụng và thao tác với `struct`, `function`, `Array`
- Biết cách debug đơn giản khi code không chạy
- Biết cách làm sinh động output bằng cách thêm màu sắc cho Console
