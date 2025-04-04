# Xoá ít chữ số nhất để tạo số chia hết cho 3

Cho một số tự nhiên **n**. Hãy xóa ít chữ số nhất để số còn lại chia hết cho 3. (Không được sắp xếp lại các chữ số, không được xoá hết các chữ số).

Nếu không thể xóa được chữ số nào để số còn lại chia hết cho 3 thì in ra -1.

**Đầu vào:**

- Số tự nhiên **n** (0 ≤ n ≤ 10<sup>100000</sup>).

**Đầu ra:**

- Số chữ số ít nhất cần xóa để số còn lại chia hết cho 3.
- Nếu không thể xóa được chữ số nào để số còn lại chia hết cho 3 thì in ra -1.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 127 | 27|

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 25282 | 582|

**Ví dụ 3:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 22 | -1 |

# Từ dài nhất trong chuỗi

Cho một chuỗi **s** gồm các ký tự. Mỗi từ trong chuỗi được phân cách bởi một khoảng trắng (Không có 2 khoảng trắng liên tiếp). Hãy tìm từ dài nhất trong chuỗi. Nếu có nhiều từ dài nhất, hãy in ra từ đầu tiên.

**Đầu vào:**

- Chuỗi **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Từ dài nhất trong chuỗi. 
- Nếu có nhiều từ dài nhất, hãy in ra từ đầu tiên.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| Xin chao cac ban | chao|

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| HaiZuka Academy | HaiZuka|

# Số lớn nhất xuất hiện trong chuỗi

Cho một chuỗi **s** gồm các ký tự chữ số và chữ cái. Hãy tìm số lớn nhất xuất hiện trong chuỗi. Nếu không có số nào thì in ra -1.

**Đầu vào:**

- Chuỗi **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Số lớn nhất xuất hiện trong chuỗi.
- Nếu không có số nào thì in ra -1.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 123abc456k | 456|


**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| a0027abc46n | 46|


**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| abc | -1|

# Tính toán biểu thức cộng

Cho một biểu thức cộng gồm các số nguyên dương và dấu cộng. Hãy tính giá trị của biểu thức. Biết không có 2 dấu cộng liên tiếp và không có dấu cộng ở đầu hoặc cuối biểu thức, không có 6 chữ số liên tiếp nào trong biểu thức.

**Đầu vào:**

- Biểu thức **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Giá trị của biểu thức.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 1+2+3+4+5 | 15|

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 11+2+30+100 | 143|



# Tính toán biểu thức cộng trừ

Cho một biểu thức cộng trừ gồm các số nguyên dương và dấu cộng, dấu trừ. Hãy tính giá trị của biểu thức. Biết không có 2 toán tử (cộng trừ) liên tiếp và không có toán tử ở đầu hoặc cuối biểu thức, không có 6 chữ số liên tiếp nào trong biểu thức.

**Đầu vào:**

- Biểu thức **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Giá trị của biểu thức.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 1+2-3+4-5 | -1|

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 100-50 | 50|

# Mã hoá chuỗi

Mỗi chuỗi **s** gồm các ký tự chữ cái in hoa từ A đến Z. 
Một cách mã hoá chuỗi thường dùng là thay thế những ký tự giống nhau liên tiếp bằng số lượng ký tự đó và ký tự đó.

Ví dụ:
- Chuỗi "AAABBBCC" sẽ được mã hoá thành "3A3B2C".
- Chuỗi "AABBBCC" sẽ được mã hoá thành "2A3B2C".
- Chuỗi "ABBBBB" sẽ được mã hoá thành "1A5B".
- Chuỗi "A" sẽ được mã hoá thành "1A".

Cho một chuỗi **s** đã được mã hoá. Hãy mã hoá lại chuỗi đó theo cách mã hoá trên.

**Đầu vào:**

- Chuỗi **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Chuỗi đã được mã hoá lại.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| AAABBBCC | 3A3B2C|

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| AAAAAAAA | 8A|

# Giải mã chuỗi

Mỗi chuỗi **s** gồm các ký tự chữ cái in hoa từ A đến Z.

Một cách mã hoá chuỗi thường dùng là thay thế những ký tự giống nhau liên tiếp bằng số lượng ký tự đó và ký tự đó.

Ví dụ:

- Chuỗi "AAABBBCC" sẽ được mã hoá thành "3A3B2C".
- Chuỗi "AABBBCC" sẽ được mã hoá thành "2A3B2C".
- Chuỗi "ABBBBB" sẽ được mã hoá thành "1A5B".
- Chuỗi "A" sẽ được mã hoá thành "1A".
- Chuỗi "AABBBCC" sẽ được mã hoá thành "2A3B2C".
- Chuỗi "AAABBBCC" sẽ được mã hoá thành "3A3B2C".

Cho một chuỗi **s** đã được mã hoá. Hãy giải mã chuỗi đó theo cách mã hoá trên. Biết rằng chuỗi đã được mã hoá chỉ chứa các ký tự chữ cái in hoa từ A đến Z và các chữ số từ 1 đến 9. Không có 6 chữ số liên tiếp nào trong chuỗi.

**Đầu vào:**

- Chuỗi **s** (1 ≤ |s| ≤ 10<sup>6</sup>).

**Đầu ra:**

- Chuỗi đã được giải mã.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
| :--- | :--- |
| 3A3B2C | AAABBBCC|

**Ví dụ 2:**

| Đầu vào | Đầu ra |
| :--- | :--- |
|10A2B3C | AAAAAAAAAABBBCC|