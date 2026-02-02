# Lý thuyết danh sách liên kết đơn
Danh sách liên kết đơn là cấu trúc dữ liệu tuyến tính trong đó các phần tử có cùng kiểu dữ liệu (gọi là node) không nằm liên tiếp trong bộ nhớ như mảng mà được liên kết với nhau bằng một con trỏ, ví dụ dễ hiểu: 
- Một đoàn tàu lửa gồm nhiều toa tàu ghép lại bằng các móc nối, mỗi toa chứa hành khác và đồ đạc, cuối( và đầu) toa tàu là một móc móc với toa tàu khác, nhiều toa tàu tạo thành một đoàn tàu
- Đoàn tàu  có toa đầu tiên và toa cuối cùng: toa đầu tiên là head, toa cuối không móc với toa nào khác gọi là NULL
- [toa 1] -> [toa 2] -> [toa 3] -> [NULL]
- Còn mảng giống với một kệ sách, các sách được xếp kế bên nhau, biết được vị trí (chỉ số) là lấy được sách
- Còn linked list thì để đến được toa nào đó, giả sử toa số 4 thì phải đi từ toa 1 -> toa 2 -> toa 3 -> toa 4

# Ưu điểm và nhược điểm
Ưu điểm
- Các phần tử không xếp liên tiếp nhau trong bộ nhớ mà nằm rải rác trong đó
- Không cần phải biết trước sẽ dùng bao nhiêu dữ liệu
- Thêm/ xóa phần tử nhanh O(1)
Nhược điểm
- Khá khó hiểu khi mới học: con trỏ cấp 2, trả về kiểu dữ liệu con trỏ, struct,..
- Truy cập chậm
- Tốn bộ nhớ cho con trỏ

# Khi nào dùng linked list
- Khi không biết trước dữ liệu cần dùng
- Chèn/ xóa phần tử liên tục
- Thao tác với danh sách động
