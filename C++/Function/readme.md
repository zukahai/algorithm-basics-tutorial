# Viết hàm tính giá trị lớn thứ 3 trong dãy số

Hãy viết một hàm `thirdLargest` nhận vào một mảng số nguyên và trả về giá trị lớn thứ 3 trong mảng đó. Nếu mảng không tồn tại giá trị lớn thứ 3, hàm sẽ trả về `None`.

Ví dụ:

- Nếu `a = [1, 2, 2, 3, 3, 4, 4, 5]`, thì `thirdLargest(a)` sẽ trả về `3`.
- Nếu `b = [5, 5, 5]`, thì `thirdLargest(b)` sẽ trả về `None`.
- Nếu `c = [1, 2]`, thì `thirdLargest(c)` sẽ trả về `None`.

### Áp dụng hàm cho ví dụ sau:

Cho một dãy số 2 chiều gồm m dòng và n cột. Với mỗi dòng của dãy số, hãy tìm giá trị lớn thứ 3 và in ra kết quả. Nếu dòng đó không tồn tại giá trị lớn thứ 3, in ra `None`.

**Đầu vào:**

- Dòng đầu vào là số nguyên dương `m` (số dòng) và `n` (số cột).
- `m` dòng tiếp theo là các mảng số nguyên với độ dài `n`.

**Đầu ra:**

- Mỗi dòng sẽ in ra giá trị lớn thứ 3 của dòng tương ứng hoặc `None` nếu không có giá trị lớn thứ 3.

**Ví dụ**

| Đầu vào               | Đầu ra |
|:-----------------------|:--------|
| 3 4 <br>1 2 2 4<br>5 5 5 5<br>5 3 9 3 | 1<br>None<br>3 |
