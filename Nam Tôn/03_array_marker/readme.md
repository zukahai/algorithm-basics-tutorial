## Bài 1
Cho mảng A gồm các phần tử là các điểm số của sinh viên. Các điểm số là các số nguyên từ 0 đến 10.

Kiểm tra xem điểm số nào xuất hiện nhiều nhất trong mảng A.

Nếu có nhiều điểm số xuất hiện cùng 1 lần nhiều nhất thì in ra điểm số nhỏ nhất.

**Ví dụ:**

- Với A = [1, 9, 9, 3, 3, 9], thì kết quả là output = 9<br>
- Với A = [1, 1, 3, 3, 2, 2], thì kết quả là output = 1<br>
- Với A = [1, 1, 10, 10, 10, 1, 1, 1], thì kết quả là output = 1<br>

## Bài 2
Cho mảng A gồm các phần tử là các điểm số của sinh viên. Các điểm số là các số nguyên từ 0 đến 10.

Đưa ra danh sách điểm số chưa xuất hiện trong mảng A.

Ví dụ

- Với A = [1, 9, 9, 3, 3, 9], thì kết quả là output = [0, 2, 4, 5, 6, 7, 8, 10]<br>
- Với A = [1, 1, 3, 3, 2, 2], thì kết quả là output = [0, 4, 5, 6, 7, 8, 9, 10]<br>
- Với A = [0, 1, 2, 3, 4, 6, 7, 8, 9, 10], thì kết quả là output = [5]<br>

## Bài 3
Cho mảng A gồm M số tự nhiên, mảng B gồm N số tự nhiên. Đưa ra danh sách những số cùng xuất hiện ở cả 2 mảng.

**Ví dụ:**

- Với A = [1, 2, 3, 4, 5], B = [4, 5, 6, 7, 8], thì kết quả là output = [4, 5]<br>
- Với A = [1, 2, 3], B = [4, 5, 6], thì kết quả là output = []<br>

## Bài 4
Cho mảng **A** gồm **N** số tự nhiên. Đưa ra danh sách những số xuất hiện trong mảng **A** đúng 1 lần.

**Ví dụ:**

- Với **A = [1, 2, 3, 4, 1, 3, 5, 3]**, thì kết quả là **output = [2, 4, 5]**<br>
- Với **A = [1, 1, 2, 3, 2, 3]**, thì kết quả là **output = []**<br>
- Với **A = [1, 2, 3, 4, 5]**, thì kết quả là **output = [1, 2, 3, 4, 5]**<br>

## Bài 5
Cho mảng **A** gồm **N** số tự nhiên. Đưa ra danh sách những số xuất hiện trong mảng **A** đúng nhiều hơn 1 lần.

*Lưu ý: Mỗi số chỉ đưa ra 1 lần trong kết quả.*

**Ví dụ:**

- Với **A = [1, 2, 3, 4, 1, 3, 5, 3]**, thì kết quả là **output = [1, 3]**<br>
- Với **A = [1, 1, 2, 3, 2, 3]**, thì kết quả là **output = [1, 2, 3]**<br>
- Với **A = [1, 2, 3, 4, 5]**, thì kết quả là **output = []**<br>

## Bài 6
Nam có 2 người em rất thích những cây kẹo. Nam có 1 túi kẹo với nhiều loại kẹo khác nhau. Nam muốn chia đều số kẹo này cho 2 người em, với mỗi loại kẹo mùa, Nam muốn chia đều nó cho cả 2. Hãy giúp Nam kiểm tra xem có thể chia đều mỗi loại kẹo cho cả 2 người em hay không.

Cho mảng **A** gồm **N** số tự nhiên, biểu diễn cho **N** loại kẹo. Mỗi phần tử trong mảng **A** biểu diễn cho số lượng kẹo loại đó. *2 phần tử giống nhau, có nghĩa là cùng 1 loại kẹo.*

**Ví dụ:**
- Với **A = [1, 1, 2, 2, 3]**, thì kết quả là **output = False**<br>
Loại kẹo 1 có 2 viên, loại kẹo 2 có 2 viên, loại kẹo 3 có 1 viên. Không thể chia đều mỗi loại kẹo 3 cho cả 2 người em.<br>
- Với **A = [1, 2, 2, 1, 1, 1]**, thì kết quả là **output = True**<br>
Loại kẹo 1 có 4 viên, loại kẹo 2 có 2 viên. Có thể chia đều mỗi loại kẹo cho cả 2 người em.<br>

## Bài 7
Cho một mảng **A** gồm các phần tử là các số nguyên dương và một số nguyên dương **K**. Hãy kiểm tra xem có tồn tại **2** phần tử trong mảng **A** mà tổng của chúng bằng **K** hay không.

**Ví dụ:**

- Với **A = [1, 2, 3, 4, 5], K = 8**, thì kết quả là **output = True**<br>
- Với **A = [1, 2, 3, 4, 5], K = 10**, thì kết quả là **output = False**<br>

**Gợi ý cách làm:**
- Tạo mảng b, với ý nghĩa b[h] là số lần xuất hiện của phần tử h trong mảng A.
- Cách kiểm tra xem có tồn tại 2 phần tử trong mảng A mà tổng của chúng bằng K là kiểm tra xem có tồn tại 2 phần tử h, k - h trong mảng A sao cho b[h] > 0 và b[k - h] > 0. **Ví dụ:** A = [1, 2, 3, 4, 5], K = 8, ta cần kiểm tra xem có tồn tại 2 phần tử h, 8 - h trong mảng A sao cho b[h] > 0 và b[k - h] > 0. Thay h bằng từng phần tử trong mảng A.
- Chú ý: Trong trường hợp K = 2 * h, ta cần kiểm tra xem có tồn tại ít nhất 2 phần tử h trong mảng A sao cho b[h] = 2.

## Bài 8
Cho một mảng **A** gồm các phần tử là các số nguyên dương và một số nguyên dương **K**. Hãy kiểm tra xem có tồn tại **2** phần tử trong mảng **A** mà **tích** của chúng bằng **K** hay không.

**Ví dụ:**

- Với **A = [1, 2, 3, 4, 5], K = 10**, thì kết quả là **output = True**<br>
- Với **A = [1, 2, 3, 4, 5], K = 20**, thì kết quả là **output = true**<br>
- Với **A = [1, 2, 3, 4, 5], K = 7**, thì kết quả là **output = False**<br>

## Bài 9
Cho 2 số nguyên dương **A** và **B**. Hãy kiểm tra xem **A** và **B** có được tạo thành từ cùng một tập hợp các chữ số hay không.

**Ví dụ:**

- Với **A = 1223, B = 3211**, thì kết quả là **output = True**<br>
Cả 2 số đều được tạo thành từ tập hợp các chữ số {1, 2, 3}.<br>
- Với **A = 124, B = 1144**, thì kết quả là **output = False**<br>
**A** được tạo thành từ tập hợp các chữ số {1, 2, 4} còn **B** được tạo thành từ tập hợp các chữ số {1, 4}.<br>

## Bài 10
Nam là sếp của 1 văn phòng. Nhân viên có Nam được đánh số thứ tự từ 1 đến N. Trong một lần, Nam gửi thông báo qua emmail đến tất cả nhân viên của mình thì phát hiện ra chỉ có N - 1 nhân viên nhận được email. Hãy giúp Nam xác định nhân viên nào không nhận được email.

Cho mảng **A** gồm **N - 1** số tự nhiên, biểu diễn cho **N - 1** nhân viên nhận được email. Mỗi phần tử trong mảng **A** biểu diễn cho số thứ tự của nhân viên đó.

**Ví dụ:**

- Với **N = 4**, **A = [1, 2, 4]**, thì kết quả là **output = 3**<br>
- Với **N = 5**, **A = [1, 2, 3, 5]**, thì kết quả là **output = 4**<br>
- Với **N = 3**, **A = [1, 2]**, thì kết quả là **output = 3**<br>
- Với **N = 6**, **A = [6, 2, 3, 4, 5]**, thì kết quả là **output = 1**<br>
