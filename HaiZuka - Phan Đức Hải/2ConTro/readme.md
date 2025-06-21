# Dãy con dài nhất có tổng không vượt quá S

Cho một dãy số nguyên dương **a** gồm **n** phần tử nguyên dương. 

Hãy tìm dãy con liên tiếp dài nhất có tổng các phần tử không vượt quá **S**.

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **n** (1 ≤ n ≤ 10<sup>6</sup>).
- Dòng thứ hai là gồm **n** số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).
- Dòng thứ ba là số nguyên dương **t** (1 ≤ t ≤ 10<sup>2<sup>).
- **t** dòng tiếp theo là các số nguyên dương **S** (1 ≤ S ≤ 10<sup>9</sup>).

**Đầu ra**:

- Với mỗi số nguyên dương **S** trong t dòng đầu vào, in ra độ dài của dãy con liên tiếp dài nhất có tổng các phần tử không vượt quá **S**. Nếu không có dãy con nào thì in ra 0.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|6<br>1 9 1 2 4 7<br>4<br>7<br>15<br>50<br>3|3<br>4<br>6<br>2|

# Xoá các ký tự trong chuỗi S để được chuỗi P

Cho một chuỗi S và một chuỗi P gồm các ký tự chữ cái và số. Hãy kiểm tra xem có thể xóa một số ký tự trong S để được chuỗi P hay không, không được thay đổi thứ tự các ký tự trong S.
Nếu có thể xóa được thì in ra "YES", ngược lại in ra "NO".

**Đầu vào**:

- Dòng đầu tiên là chuỗi S. (1 ≤ |S| ≤ 10<sup>6</sup>).
- Dòng thứ hai là chuỗi P. (1 ≤ |P| ≤ 10<sup>6</sup>).

**Đầu ra**:

- Nếu có thể xóa được thì in ra "YES", ngược lại in ra "NO".

**Ví dụ 1**:

|Đầu vào|Đầu ra|
|:---|:---|
|abcde<br>ace|YES|

**Ví dụ 2**:

|Đầu vào|Đầu ra|
|:---|:---|
|abcde<br>aec|NO|

# Trò chơi chuỗi đối xứng

Một chuỗi S được gọi là đối xứng nếu nó giống với chuỗi đảo ngược của nó. Ví dụ: "abcba" là một chuỗi đối xứng, trong khi "abcde" không phải là một chuỗi đối xứng.

Hải và Linh đang chơi một trò chơi trong siêu thị. Siêu thị có một dải ký tự có độ dài n. Hải sẽ ở đầu chuỗi và Linh sẽ ở cuối chuỗi. Hải và Linh cần phải tìm cách để hợp tác để tạo ra một chuỗi đối xứng từ dài nhất trong dải ký tự đó. 

Hải được phép đánh dấu những ký tự liên tiếp từ đầu chuỗi, trong khi Linh được phép đánh dấu những ký tự **không nhất thiết** liên tiếp từ cuối chuỗi. Số lượng ký tự mà Hải đánh dấu phải bằng số lượng ký tự mà Linh đánh dấu, cả hai không được đánh dấu cùng một ký tự. Sau khi đánh dấu, Hải sẽ tiến tới ký tự tiếp theo theo thứ tự từ trái sang phải, trong khi Linh sẽ tiến tới ký tự tiếp theo theo thứ tự từ phải sang trái. Hải và Linh sẽ dừng lại khi cả hai gặp.

Ban tổ chức sẽ ghép những ký tự đã đánh dấu theo thư tự từ trái sang phải. Hãy trả về chuỗi đối xứng dài nhất mà Hải và Linh có thể tạo ra. Nếu không có chuỗi đối xứng nào, hãy trả về -1.

**Đầu vào**:

- Một chuỗi S gồm n ký tự chữ cái và số. (1 ≤ |S| ≤ 10<sup>6</sup>).

**Đầu ra**:

- Nếu có chuỗi đối xứng nào thì in ra chuỗi đối xứng dài nhất, ngược lại in ra -1.

**Ví dụ 1**:

|Đầu vào|Đầu ra|
|:---|:---|
|abckscjsbua| abccba|

**Ví dụ 2**:

|Đầu vào|Đầu ra|
|:---|:---|
|abc| -1|

# Dãy con ngắn nhất có đủ K số chẵn

Cho một dãy số nguyên dương **a** gồm **n** phần tử nguyên dương.
Hãy tìm dãy con liên tiếp ngắn nhất có đủ **K** số chẵn. Nếu không có dãy con nào thì in ra -1.

**Đầu vào**:
- Dòng đầu tiên là số nguyên dương **n** và **K** (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ K ≤ n).
- Dòng thứ hai là gồm **n** số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra**:
- Nếu có dãy con nào thì in ra độ dài của dãy con ngắn nhất có đủ **K** số chẵn, ngược lại in ra -1.

**Ví dụ 1**:

|Đầu vào|Đầu ra|
|:---|:---|
|7 2<br>1 2 3 5 4 5 6|3|

**Ví dụ 2**:

|Đầu vào|Đầu ra|
|:---|:---|
|5 2<br>2 2 2 1 2|-1|

# Dãy con ngắn nhất có đủ K số chẵn và K số lẻ

Cho một dãy số nguyên dương **a** gồm **n** phần tử nguyên dương.
Hãy tìm dãy con liên tiếp ngắn nhất có đủ **K** số chẵn và **K** số lẻ. Nếu không có dãy con nào thì in ra -1.

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **n** và **K** (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ K ≤ n).
- Dòng thứ hai là gồm **n** số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Đầu ra**:
- Nếu có dãy con nào thì in ra độ dài của dãy con ngắn nhất có đủ **K** số chẵn và **K** số lẻ, ngược lại in ra -1.

**Ví dụ 1**:

|Đầu vào|Đầu ra|
|:---|:---|
|7 2<br>1 2 3 5 4 5 6|4|

**Ví dụ 2**:

|Đầu vào|Đầu ra|
|:---|:---|
|5 2<br>2 2 2 1 2|-1|

# Chuỗi con ngắn nhất có chứa đủ tất cả các ký tự

Cho một chuỗi S gồm các ký tự 'a' đến 'z'. Hãy tìm chuỗi con ngắn nhất có chứa đủ tất cả các ký tự từ 'a' đến 'z'. Nếu không có chuỗi con nào thì in ra -1.

**Đầu vào**:

- Một chuỗi S gồm các ký tự 'a' đến 'z'. (1 ≤ |S| ≤ 10<sup>6</sup>).

**Đầu ra**:

- Nếu có chuỗi con nào thì in ra độ dài của chuỗi con ngắn nhất có chứa đủ tất cả các ký tự từ 'a' đến 'z', ngược lại in ra -1.

**Ví dụ 1**:

|Đầu vào|Đầu ra|
|:---|:---|
|babbcdefghijklmnopqrstuvwxyzdbc|27|

Giải thích:
- Chuỗi con ngắn nhất có chứa đủ tất cả các ký tự từ 'a' đến 'z' là "abbcdefghijklmnopqrstuvwxyz".

**Ví dụ 2**:

|Đầu vào|Đầu ra|
|:---|:---|
|abc| -1|

