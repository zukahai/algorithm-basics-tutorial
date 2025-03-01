# Tổng số lượng ước số

Cho một số nguyên dương n. Tìm số có nhiều ước số nhất trong các số từ 1 đến n.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một dòng chứa số nguyên n (1 ≤ n ≤ 10<sup>7</sup>).

**Kết quả**: Đưa ra 2 số nguyên cách nhau bởi dấu cách: số có nhiều ước số nhất và số ước số của nó. Nếu có nhiều số có cùng số ước số nhiều nhất thì đưa ra số lớn nhất.

**Ví dụ**:

| Input | Output |
|-------|--------|
| 11     | 10 3      |

---

**Subtask**:

- 50% số test có n ≤ 10<sup>4</sup>.
- 50% số test còn lại có n ≤ 10<sup>7</sup>.

# Số hoàn hảo từ 1 đến N

Một số nguyên dương X được gọi là số hoàn hảo nếu tổng các ước số của X lớn hơn hoặc bằng 2*X. 

Ví dụ: 6 là số hoàn hảo vì 1 + 2 + 3 = 6 >= 2*6.
Ví dụ: 5 không phải là số hoàn hảo vì 1 + 5 < 2*5.

Cho số nguyên dương n. Hãy in ra số lượng các số hoàn hảo từ 1 đến n.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một dòng chứa số nguyên n (1 ≤ n ≤ 10<sup>7</sup>).

**Kết quả**: Đưa ra các số lượng số hoàn hảo từ 1 đến n.

**Ví dụ**:

| Input | Output |
|-------|--------|
| 20     | 4    |

4 số hoàn hảo từ 1 đến 20 là 6 12 18 20 

---

**Subtask**:

- 50% số test có n ≤ 10<sup>4</sup>.
- 50% số test còn lại có n ≤ 10<sup>7</sup>.

# Cách chọn K số trong dãy để ước chung lớn nhất là lớn nhất

Cho một dãy số nguyên dương a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>. Hãy tìm cách chọn ra **k** số từ dãy số đã cho sao cho ước chung lớn nhất của **k** số đó là lớn nhất.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:
- Dòng đầu tiên chứa 2 số nguyên n và k (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ k ≤ n)
- Dòng thứ 2 chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>7</sup>)

**Kết quả**: Đưa ra thiết bị xuất chuẩn một số nguyên - ước chung lớn nhất của **k** số được chọn.

**Ví dụ**:

| Input | Output |
|-------|--------|
| 5 3   <br> 5 9 6 10 3 | 3   |

Chọn 3 số 9 6 3 thì ước chung lớn nhất là 3, đây là cách chọn 3 số để 3 số đó có ước chung lớn nhất của các số đó là lớn nhất.

---

**Subtask**:

- 50% số test có n ≤ 10<sup>2</sup>.
- 50% số test còn lại có n ≤ 10<sup>6</sup>.