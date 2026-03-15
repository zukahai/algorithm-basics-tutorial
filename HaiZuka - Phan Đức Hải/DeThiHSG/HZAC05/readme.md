# Địa chỉ email

Thư điện tử là một phương tiện giao tiếp quan trọng trong thế giới kỹ thuật số ngày nay. Nó cho phép người dùng gửi và nhận thông tin một cách nhanh chóng và hiệu quả. 

Trên hệ thống HaiZuka Academy, thư điện tử sẽ được tạo tự động khi bạn đăng ký tài khoản. Địa chỉ email này sẽ phụ thuộc vào họ và tên của bạn theo định dạng sau:

- Tạo ra chuỗi s bao gồm các chữ cái đầu tiên trong các từ trong họ và tên, trừ từ cuối cùng.
- Tạo chuỗi p bằng cách nối chuỗi s và từ cuối cùng trong họ và tên.
- Sau đó kết hợp chuỗi p với tên miền của hệ thống `@haizuka.vn`.
- Email sẽ là chuỗi viết thường.

Ví dụ bạn tên là "Phan Duc Hai", địa chỉ email của bạn sẽ là `pdhai@haizuka.vn`.

Ví dụ bạn tên là "Phan Thi My Linh", địa chỉ email của bạn sẽ là `ptmlinh@haizuka.vn`.

Cho họ và tên của một người, hãy tạo địa chỉ email của bạn theo định dạng trên.

**Đầu vào:**

- Một dòng chứa họ và tên của người dùng. Họ và tên sẽ bao gồm các chữ cái viết hoa và viết thường, có thể có dấu cách giữa các từ.

**Đầu ra:**

- Một dòng chứa địa chỉ email theo định dạng đã mô tả.

**Ví dụ 1:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|Phan Duc Hai|pdhai@haizuka.vn|

**Ví dụ 2:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|Phan Thi My Linh|ptmlinh@haizuka.vn|


# Số chẵn nhỏ nhất chưa xuất hiện trong dãy

# Khu rừng tình yêu

Trong một khu rừng xa xôi, có rất nhiều loài động vật sống chung với nhau. Mỗi loài động vật sẽ có một mã số định danh duy nhất (Giữa 2 loài sẽ không có mã số trùng nhau). 2 động vật sẽ được coi là yêu nhau nếu chúng có cùng loài.

Có n động vật trong khu rừng, mỗi động vật có một mã số định danh duy nhất. Bạn cần xác định xem có thể ghép đôi tất cả các động vật trong khu rừng hay không. Một cặp đôi được coi là ghép đôi thành công nếu chúng có cùng mã số định danh. In ra "YES" nếu có thể ghép đôi tất cả các động vật, ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên dương n (1 ≤ n ≤ 10<sup>6</sup>) - số lượng động vật trong khu rừng.
- Dòng thứ hai chứa n số nguyên dương a<sub>i</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>6</sup>) - mã số định danh của từng động vật.

**Đầu ra:**

- In ra "YES" nếu có thể ghép đôi tất cả các động vật, ngược lại in ra "NO".

**Ví dụ 1:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|8<br>1 2 1 2 3 3 1 1|YES|

*Giải thích:* Có 4 cặp động vật: (1, 1), (2, 2), (3, 3), (1, 1). Tất cả đều có thể ghép đôi.

**Ví dụ 2:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|5<br>1 1 2 2 5|NO|

# Số chuỗi Minh Kỳ

Minh Kỳ là một người có trí tưởng tượng rất cao, anh rất thích ghép những chuỗi ký tự lại với nhau để tạo thành tên của anh ấy "MinhKy". Anh muốn biết từ một chuỗi kỳ tự bất kỳ thì có thể ghép được bao nhiêu chuỗi "MinhKy".

**Đầu vào:**

- Một chuỗi ký tự s (1 ≤ |s| ≤ 10<sup>6</sup>) - chuỗi ký tự bất kỳ.

**Đầu ra:**

- Số lượng chuỗi "MinhKy" có thể được tạo ra từ chuỗi ký tự s.

**Ví dụ 1:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|MinhabcKyy|1|

**Giải thích:** Từ chuỗi "MinhabcKyy", ta có thể tạo ra 1 chuỗi "MinhKy" bằng cách lấy các ký tự: M, i, n, h, K, y.

**Ví dụ 2:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|MMinhyKynnyxaKKhi|2|

**Giải thích:** Từ chuỗi "MMinhyKynnyxaKKhi", ta có thể tạo ra tối đa 2 chuỗi "MinhKy" bằng cách lấy các ký tự: M, i, n, h, K, y.

# Tổng nhỏ nhất của 2 ước số lớn hơn K

Trong một bài toán, cho một số nguyên dương n lớn hơn 1, và một số nguyên dương k.

Hãy tìm 2 số a và b thoã mãn:
- a và b là 2 ước số khác nhau của n
- a + b lớn hơn hoặc bằng k
- Tổng a + b là nhỏ nhất trong các cặp a, b thoã mãn

**Đầu vào:**

- Số nguyên dương n và k (2 ≤ k ≤ n ≤ 10<sup>14</sup>) - số nguyên dương cần xét.

**Đầu ra:**

- In ra tổng của 2 số a và b thoả mãn.

**Ví dụ 1:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|10 5|6|

**Giải thích:** Các ước số của 10 là 1, 2, 5, 10. Ta có cặp (1, 5) thoả mãn.

**Ví dụ 2:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|12 10|10|

**Giải thích:** Các ước số của 12 là 1, 2, 3, 4, 6, 12. Ta có cặp (4, 6) thoả mãn.

