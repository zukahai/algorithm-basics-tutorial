# Số lớn nhất trên các đoạn con liên tiếp

Cho một dãy số nguyên dương **a** gồm **n** phần tử nguyên dương. Hãy tìm số lớn nhất trên các đoạn con liên tiếp của dãy **a**.

**Đầu vào**:
- Dòng đầu tiên là số nguyên dương **n** (1 ≤ n ≤ 10<sup>5</sup>).
- Dòng thứ hai là gồm **n** số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).
- Dòng thứ ba là số nguyên dương **t** (1 ≤ t ≤ 10<sup>5</sup>).
- **t** dòng tiếp theo là các cặp số nguyên dương **l** và **r** (1 ≤ l ≤ r ≤ n).

**Đầu ra**:
- Với mỗi cặp số nguyên dương **l** và **r** trong t dòng đầu vào, in ra số lớn nhất trên đoạn con liên tiếp từ **l** đến **r** của dãy **a**.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|6<br>1 9 1 2 4 7<br>4<br>1 3<br>2 5<br>3 6<br>1 6|9<br>9<br>7<br>9|

**Giải thích**:
- Với đoạn con từ 1 đến 3, các số là 1, 9, 1 nên số lớn nhất là 9.
- Với đoạn con từ 2 đến 5, các số là 9, 1, 2, 4 nên số lớn nhất là 9.
- Với đoạn con từ 3 đến 6, các số là 1, 2, 4, 7 nên số lớn nhất là 7.
- Với đoạn con từ 1 đến 6, các số là 1, 9, 1, 2, 4, 7 nên số lớn nhất là 9.

**Ràng buộc**:
- 50% số test có n, t ≤ 10<sup>3</sup>.
- 50% số test có n, t ≤ 10<sup>5</sup>.

---

**Nếu làm sai hãy liên hệ zalo nếu bạn là học viên:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)

# Số lớn nhất trên các đoạn con liên tiếp và có cập nhật

Cho một dãy số nguyên dương **a** gồm **n** phần tử nguyên dương. 

Có các truy vấn sau:
- Truy vấn 1 gồm 3 số: 1 **index** **x** - Cập nhật giá trị tại vị trí **index** thành **x**.
- Truy vấn 2 gồm 3 số: 2 **l** **r** - Tìm số lớn nhất trên đoạn con liên tiếp từ **l** đến **r** của dãy **a**.

**Đầu vào**:
- Dòng đầu tiên là số nguyên dương **n** (1 ≤ n ≤ 10<sup>5</sup>).
- Dòng thứ hai là gồm **n** số nguyên dương **a<sub>i</sub>** (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).
- Dòng thứ ba là số nguyên dương **t** (1 ≤ t ≤ 10<sup>5</sup>).
- **t** dòng tiếp theo là các truy vấn theo định dạng đã nêu ở trên

**Đầu ra**:
- Với mỗi truy vấn loại 2, in ra số lớn nhất trên đoạn con liên tiếp từ **l** đến **r** của dãy **a**.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|6<br>1 9 1 2 4 7<br>5<br>2 1 3<br>1 2 5<br>2 2 5<br>1 5 10<br>2 3 6|9<br>5<br>10|

**Giải thích**:
- Truy vấn 2 1 3: Đoạn con từ 1 đến 3 là [1, 9, 1], số lớn nhất là 9.
- Truy vấn 1 2 5: Cập nhật giá trị tại vị trí 2 thành 5, dãy trở thành [1, 5, 1, 2, 4, 7].
- Truy vấn 2 2 5: Đoạn con từ 2 đến 5 là [5, 1, 2, 4], số lớn nhất là 5.
- Truy vấn 1 5 10: Cập nhật giá trị tại vị trí 5 thành 10, dãy trở thành [1, 5, 1, 2, 10, 7].
- Truy vấn 2 3 6: Đoạn con từ 3 đến 6 là [1, 2, 10, 7], số lớn nhất là 10.

**Ràng buộc**:
- 50% số test có n, t ≤ 10<sup>3</sup>.
- 50% số test có n, t ≤ 10<sup>5</sup>.

---
**Nếu làm sai hãy liên hệ zalo nếu bạn là học viên:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)