# Phương pháp gán cơ

## Số chẵn trong mảng

Cho một mảng số nguyên, hãy in ra các số chẵn trong mảng đó theo thứ tự xuất hiện trong mảng. (Thứ tự nhập).

Nếu không có số chẵn nào, in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>5</sup>) - số phần tử của mảng.

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>) - các phần tử của mảng.

**Đầu ra:**

- In ra các số chẵn trong mảng theo thứ tự xuất hiện trong mảng. (Thứ tự nhập), mỗi số cách nhau một khoảng trắng. Nếu không có số chẵn nào, in ra -1.

**Ví dụ 1:**

| Input | Output |
| :--- | :--- |
| 5 <br> 1 2 8 4 5 | 2 8 4 |

**Ví dụ 2:**

| Input | Output |
| :--- | :--- |
| 3 <br> 1 3 5 | -1 |


## Tổng các số chia hết cho 5

Cho một mảng số nguyên, hãy tính tổng các số chia hết cho 5 trong mảng đó.

Nếu không có số nào chia hết cho 5, in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>5</sup>) - số phần tử của mảng.

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>) - các phần tử của mảng.

**Đầu ra:**

- In ra tổng các số chia hết cho 5 trong mảng. Nếu không có số nào chia hết cho 5, in ra -1.

**Ví dụ 1:**

| Input | Output |
| :--- | :--- |
| 5 <br> 1 2 8 4 5 | 5 |

**Ví dụ 2:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 3 7 2 | -1 |


## Kiểm tra dãy giảm dần

Cho một mảng số nguyên, hãy kiểm tra xem mảng đó có giảm dần không.

Dãy giảm dần là dãy mà mọi phần tử đều nhỏ hơn phần tử đứng trước nó.

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>5</sup>) - số phần tử của mảng.

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>) - các phần tử của mảng.

**Đầu ra:**

- In ra "YES" nếu mảng giảm dần, ngược lại in ra "NO".

**Ví dụ 1:**

| Input | Output |
| :--- | :--- |
| 5 <br> 5 4 3 2 0 | YES |

**Ví dụ 2:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 3 7 2 | NO |

## Dãy số may mắn

Dãy số được gọi là may mắn khi trong dãy chỉ gồm các số 4 hoặc số 7.

Cho một mảng số nguyên, hãy kiểm tra xem mảng đó có phải là dãy số may mắn không. Nếu đúng, in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>5</sup>) - số phần tử của mảng.

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)- các phần tử của mảng.

**Đầu ra:**

- In ra "YES" nếu mảng là dãy số may mắn, ngược lại in ra "NO".

**Ví dụ 1:**

| Input | Output |
| :--- | :--- |
| 5 <br> 4 4 7 7 4 | YES |

**Ví dụ 2:**

| Input | Output |
| :--- | :--- |
| 4 <br> 1 3 7 2 | NO |

## Chuỗi ký tự in hoa

Cho một chuỗi ký tự gồm các ký tự bất kỳ, bạn có thể xoá vô hạn các ký tự trong chuỗi đó.

Hãy tìm chuỗi in hoa dài nhất mà bạn có thể tạo ra sau khi xoá các ký tự.

Lưu ý: Chỉ được xoá các ký tự, không được thay đổi vị trí của chúng.

**Đầu vào:**

- Dòng đầu tiên chứa một chuỗi số có độ dài không vượt quá 10<sup>5</sup>.

**Đầu ra:**

- In ra chuôi in hoa dài nhất mà bạn có thể tạo ra sau khi xoá các ký tự. Nếu không thể tạo ra chuỗi in hoa nào, in ra "-1".

**Ví dụ 1:**

| Input | Output |
| :--- | :--- |
| 1bCdB | CB |

**Ví dụ 2:**

| Input | Output |
| :--- | :--- |
| 1bddk2 | -1 |