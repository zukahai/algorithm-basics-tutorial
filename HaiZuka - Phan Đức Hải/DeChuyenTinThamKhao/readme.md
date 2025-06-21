# Đề thi tham khảo chuyên tin Hà Tĩnh

**Đề thi tham khảo do [Phan Đức Hải]() biên soạn.**

||Tên bài| File chương trình|File dữ liệu|File kết quả|Số điểm|
|:---|:---|:---|:---|:---|
|1|[Số ưu thích](#bài-1-các-số-ưu-thích)|NUMBER.*|NUMBER.INP|NUMBER.OUT|3|
|2|[Phép chia](#bài-2-phép-chia)|DIV.*|DIV.INP|DIV.OUT| 3|
|3|[Dãy con nguyên tố](#bài-3-dãy-con-nguyên-tố)|PRIME.*|PRIME.INP|PRIME.OUT| 2|
|4|[Số đối xứng](#bài-4-số-đối-xứng)|PALINDROME.*|PALINDROME.INP|PALINDROME.OUT| 2|

# Bài 1. Các số ưu thích

Bạn Linh rất ưu thích nhưng số chẵn, trong khi Hải là ưu thích nhưng số chính phương. Để hoà hợp thì Hải muốn tính xem từ 1 đến N có bao nhiều số mà cả Linh và Hải đều thích. Biết rằng số chẵn là số chia hết cho 2, và số chính phương là số có căn bậc hai nguyên.

**Đầu vào:**

- Dòng đầu tiên là số nguyên dương T - số lượng bộ test. (1 ≤ T ≤ 10<sub>5</sub>)
- Mỗi bộ test gồm một số nguyên dương N. (1 ≤ N ≤ 10<sub>9</sub>)

**Đầu ra:**

- Với mỗi bộ test, in ra số lượng số mà cả Linh và Hải đều thích.

**Ví dụ:**

|NUMBER.INP|NUMBER.OUT|
|:---|:---|
|2<br> |10<br>20|1<br>2|

- Từ 1 đến 10 chỉ có 1 số là 4.
- Từ 1 đến 20 có 2 số là 4 và 16.

**Giới hạn:**

- 50% test có T = 1 và N ≤ 10<sub>6</sub>.
- 30% test còn lại có T = 10<sub>3</sub> và N ≤ 10<sub>9</sub>.
- 20% test còn lại có T = 10<sub>5</sub> và N ≤ 10<sub>9</sub>.

# Bài 2. Phép chia

Trong giờ học toán, cố giáo đang giới thiệu cho học sinh về phép chia. Hải nhận ra được rằng nếu một số nguyên dương A chia hết cho một số nguyên dương B thì A chia B sẽ là một số nguyên C. Sẽ có nhiều trường hợp số C lại có thể chia hết cho B. Hải đưa phát hiện thú vị này cho cô giáo, cố giáo khen Hải thông minh và giao cho Hải một bài toán như sau:

Cho một số nguyên dương N, Hãy tìm số B lớn hơn 1 sao cho N có thể chia hết cho B nhiều lần nhất có thể. Ví dụ số 40 sẽ có thể chia hết cho số 2 là 3 lần (40 → 20 → 10 → 5), nhưng sẽ không chia hết cho số 3. Số B mà Hải tìm được là 2. Nếu có nhiều số B thoã mãn thì in ra số B lớn nhất.

**Đầu vào:**

- Một số nguyên dương N (2 ≤ N ≤ 10<sub>14</sub>)

**Đầu ra:**

- Số nguyên dương B lớn nhất thoã mãn điều kiện.

**Ví dụ:**

|DIV.INP|DIV.OUT|
|:---|:---|
|200|2 |

Số 200 có thể chia hết cho 2 là 3 lần (200 → 100 → 50 → 25), nhưng không chia hết cho số 3.

Số 200 cũng chia hết cho 5 là 2 lần (200 → 40 → 8) ít hơn cách chia cho 2.

# Giới hạn:

- 50% test có N ≤ 10<sup>3</sup>.
- 50% test còn lại có N ≤ 10<sup>14</sup>.

# Bài 3. Dãy con nguyên tố

Số nguyên tố là số tự nhiên lớn hơn 1 và chỉ chia hết cho 1 và chính nó. Ví dụ: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, ...

Cho một dãy số nguyên dương A có N phần tử, một dãy con của A là một dãy số liên tiếp trong A. Ví dụ: với A = [1, 2, 3, 4, 5] thì các dãy con là [1], [2], [3], [4], [5], [1, 2], [2, 3], [3, 4], [4, 5], [1, 2, 3], [2, 3, 4], [3, 4, 5], [1, 2, 3, 4], [2, 3, 4, 5], [1, 2, 3, 4, 5].

Bạn được phép xoá tối đa 1 phần tử trong A. Hãy tìm các để tạo ra dãy con dài nhất mà tất cả các phần tử đều là số nguyên tố.

**Đầu vào:**

- Dòng đầu tiên là số nguyên dương N (1 ≤ N ≤ 10<sup>6</sup>).

- Dòng thứ hai là N số nguyên dương A<sub>i</sub> (1 ≤ A<sub>i</sub> ≤ 10<sup>6</sup>).

**Đầu ra:**

- Số nguyên dương là độ dài của dãy con dài nhất thoã mãn điều kiện.

**Ví dụ 1:**

|PRIME.INP|PRIME.OUT|
|:---|:---|
|5<br>1 2 3 4 5|3|

Có thể xoá số 4, dãy anh sẽ là [1, 2, 3, 5] và dãy con dài nhất là [2, 3, 5] có độ dài là 3.

**Ví dụ 2:**

|PRIME.INP|PRIME.OUT|
|:---|:---|
|5<br>2 3 5 7 11|5|

Dãy con dài nhất là chính dãy A, không cần xoá phần tử nào.

# Giới hạn:

- 50% test có N ≤ 10<sup>3</sup>.
- 50% test còn lại có N ≤ 10<sup>6</sup>.

# Bài 4. Số đối xứng

Số đối xứng là số mà đọc xuôi hay ngược đều giống nhau. Ví dụ: 121, 12321, 1234321, 1221,...

Chi phí để biến đổi một số Z thành một số đối xứng là tổng các chữ số của Z là một số tự nhiên x nhỏ nhất sao cho Z + x là một số đối xứng. Ví dụ: với Z = 123 thì chi phí là 8 (123 + 8 = 13).

Cho một số một dãy số nguyên dương A có N phần tử, hãy tìm độ dài **l** nhỏ nhất sao cho tồn tại một dãy con liên tiếp trong A có độ dài l mà tổng các chi phí để biến đổi các số trong dãy lớn hơn hoặc bằng K.

**Đầu vào:**

- Dòng đầu tiên là số nguyên dương N và K (1 ≤ N ≤ 10<sup>6</sup>), (1 ≤ K ≤ 10<sup>16</sup>).
- Dòng thứ hai là N số nguyên dương A<sub>i</sub> (1 ≤ A<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra:**
- Số nguyên dương là độ dài l nhỏ nhất, nếu không có thì in ra -1.

**Ví dụ:**

|PALINDROME.INP|PALINDROME.OUT|
|:---|:---|
|5 15<br>91 123 451 997 45 |2|

Chi phí để biến đổi các số trong dãy là: 8 (91 + 8 = 99), 8 (123 + 8 = 131), 3 (451 + 3 = 454), 2 (997 + 2 = 999), 10 (45 + 10 = 55). 

Dãy chi phí là [8, 8, 3, 2, 10].

Độ dài l nhỏ nhất là 2 với dãy con [91, 123] có tổng chi phí là 16 >= 15.

# Giới hạn:

- 20% test có N ≤ 10<sup>3</sup>. a[i] ≤ 10<sup>2</sup>.
- 30% test có N ≤ 10<sup>6</sup>. a[i] ≤ 10<sup>2</sup>.
- 50% test còn lại có N ≤ 10<sup>6</sup>.