# Nối vòng tay lớn

Trong một buổi vui chơi, một nhóm bạn trẻ đã cùng nhau chơi một trò chơi rất thú vị. Trò chơi này có tên là "Nối vòng tay lớn". Trò chơi được tổ chức như sau: có **N** bạn trẻ đứng thành một vòng tròn, các bạn được đánh số từ **1** đến **N**. Số 2 sẽ đứng cạnh số 1 và 3, số 3 đứng cạnh số 2 và 4, số 4 đứng cạnh số 3 và 5, ... số N đứng cạnh số N-1 và 1.

Người quản trò sẽ lần lượt loại các bạn ra khỏi vòng tròn theo thứ tự như sau: bạn thứ nhất sẽ bị loại đầu tiên, cứ loại một người thì giữ lại một người, rồi lại loại một người, cứ như vậy cho đến khi chỉ còn lại một bạn duy nhất. Bạn này sẽ là người chiến thắng.

Cho biết số lượng bạn trẻ **N**. Hãy xác định xem bạn nào sẽ là người chiến thắng.

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **N** (1 ≤ N ≤ 10<sup>18</sup>)

**Đầu ra**:

- Một số nguyên dương là số thứ tự của bạn trẻ còn lại cuối cùng.

|Đầu vào|Đầu ra|
|:---|:---|
|5|2|

Những bạn trẻ được đánh số từ 1 đến 5 sẽ bị loại theo thứ tự: 1, 3, 5, 4. Cuối cùng chỉ còn lại bạn trẻ số 2.|

# Nối vòng tay lớn (Tiếp theo)

Trong một buổi vui chơi, một nhóm bạn trẻ đã cùng nhau chơi một trò chơi rất thú vị. Trò chơi này có tên là "Nối vòng tay lớn". Trò chơi được tổ chức như sau: có **N** bạn trẻ đứng thành một vòng tròn, các bạn được đánh số từ **1** đến **N**. Số 2 sẽ đứng cạnh số 1 và 3, số 3 đứng cạnh số 2 và 4, số 4 đứng cạnh số 3 và 5, ... số N đứng cạnh số N-1 và 1.

Người quản trò sẽ lần lượt loại các bạn ra khỏi vòng tròn theo thứ tự như sau: bạn thứ **K** sẽ bị loại đầu tiên, cứ loại một người thì giữ lại một người, rồi lại loại một người, cứ như vậy cho đến khi chỉ còn lại một bạn duy nhất. Bạn này sẽ là người chiến thắng.

Cho biết số lượng bạn trẻ **N**. Hãy xác định xem bạn nào sẽ là người chiến thắng.

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **N** và số nguyên dương **K** (1 ≤ K ≤ N ≤ 10<sup>18</sup>)

**Đầu ra**:

- Một số nguyên dương là số thứ tự của bạn trẻ còn lại cuối cùng.

|Đầu vào|Đầu ra|
|:---|:---|
|5 3|4|

Những bạn trẻ được đánh số từ 1 đến 5 sẽ bị loại theo thứ tự: 3, 5, 2, 1. Cuối cùng chỉ còn lại bạn trẻ số 4.|

# Ma trận xoắn ốc

Có một ma trận có kích thước **M** x **N** được điền các số nguyên dương từ 1 đến **M** x **N** theo thứ tự như sau:

Ví dụ **M = 4, N = 5**:

![alt text](image.png)

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **M** và số nguyên dương **N** (1 ≤ M, N ≤ 10<sup>3</sup>)

**Đầu ra**:

- Một ma trận có kích thước **M** x **N** được điền các số nguyên dương từ 1 đến **M** x **N** theo thứ tự như trên.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|4 5|1 2 3 4 5<br>14 15 16 17 6<br>13 20 19 18 7<br>12 11 10 9 8|

# Số chính phương nhỏ nhất chia hết các số trong dãy

Cho một dãy số nguyên dương, hay tìm một số chính phương nhỏ nhất chia hết cho tất cả các số trong dãy. Kết quả có thể rất lớn, hãy chỉ ra kết quả modulo 10<sup>9</sup> + 7.

**Đầu vào**:

- Dòng đầu tiên là số nguyên dương **N** (1 ≤ N ≤ 10<sup>5</sup>)
- Dòng thứ hai là **N** số nguyên dương **A<sub>i</sub>** (1 ≤ A<sub>i</sub> ≤ 10<sup>9</sup>)

**Đầu ra**:

- Một số nguyên dương là số chính phương nhỏ nhất chia hết cho tất cả các số trong dãy, modulo 10<sup>9</sup> + 7.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|4<br> 5 4 12 10|900|

# Bộ 3 số Pythagoras

Cho một số nguyên dương **N**, hãy đếm bộ 3 số a, b, c sap cho

- 1 ≤ a < b < c ≤ N
- a<sup>2</sup> + b<sup>2</sup> = c<sup>2</sup>

**Đầu vào**:

Một số nguyên dương **N** (1 ≤ N ≤ 10<sup>8</sup>)

**Đầu ra**:

Một số nguyên dương là số lượng bộ 3 số thỏa mãn điều kiện trên.

**Ví dụ 1:**

|Đầu vào|Đầu ra|
|:---|:---|
|10|2|

Giải thích: Các bộ 3 số Pythagoras thỏa mãn điều kiện là (3, 4, 5) và (6, 8, 10).

**Ví dụ 2:**

|Đầu vào|Đầu ra|
|:---|:---|
|13|3|

Giải thích: Các bộ 3 số Pythagoras thỏa mãn điều kiện là (3, 4, 5), (6, 8, 10) và (5, 12, 13).

**Giới hạn:**

- 20% số điểm tương ứng: 1 ≤ N ≤ 10<sup>2</sup>
- 30% số điểm tương ứng: 1 ≤ N ≤ 10<sup>4</sup>
- 50% số điểm tương ứng: 1 ≤ N ≤ 10<sup>8</sup>

---

**Nếu bạn cần hỗ trợ, hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)
