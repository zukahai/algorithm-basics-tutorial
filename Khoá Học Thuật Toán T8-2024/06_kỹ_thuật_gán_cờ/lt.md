# Kỹ thuật gán cơ (flag technique)

Kỹ thuật gán cờ (flag technique) là một kỹ thuật giúp chúng ta giải quyết một số bài toán mà trong quá trình xử lý chúng ta cần phải đánh dấu một số điều kiện nào đó. Thường áp dụng cho những bài kiểm tra một tập hợp có thoả mãn điều kiện nào đó không.

Ví dụ;

- Kiểm tra một dãy số có phải toàn số chẵn không?
    - Tất cả các số trong dãy số đều phải là số chẵn.
    - Chỉ cần tìm thấy một số lẻ thì kết luận dãy số không phải toàn số chẵn.
    - Điều kiện: **flag = 1** nếu tìm thấy một số lẻ.

- Kiểm tra một dãy số có phải toàn số dương không?
    - Tất cả các số trong dãy số đều phải là số dương.
    - Chỉ cần tìm thấy một số âm thì kết luận dãy số không phải toàn số dương.
    - Điều kiện: **flag = 1** nếu tìm thấy một số âm.

- Kiểm tra một dãy số có phải toàn số nguyên tố không?
    - Tất cả các số trong dãy số đều phải là số nguyên tố.
    - Chỉ cần tìm thấy một số không phải số nguyên tố thì kết luận dãy số không phải toàn số nguyên tố.
    - Điều kiện: **flag = 1** nếu tìm thấy một số không phải số nguyên tố.

- Kiểm tra một dãy số có phải toàn số giống nhau không?
    - Tất cả các số trong dãy số đều phải giống nhau.
    - Chỉ cần tìm thấy một số khác với số đầu tiên thì kết luận dãy số không phải toàn số giống nhau.
    - Điều kiện: **flag = 1** nếu tìm thấy một số khác với số đầu tiên.
