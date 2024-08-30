## Bài 1: Điểm danh hộ

Trường VKU là trường học nổi tiếng miền Trung Tây Nguyên. Với kỹ thuật điểm danh thông minh, trường VKU đã giảm thiểu được thời gian điểm danh.

Trường VKU có n học sinh. Mỗi học sinh sẽ mang một giá trị là mã sinh viên từ 1 đến n.

Có một số sinh viên không đi học và đã nhờ bạn điểm danh hộ. Những sinh viên điểm danh hộ cho bạn sẽ bị lưu mã sinh viên thêm một lần nữa. Nhưng sinh viên này sẽ bị kỉ luật.

Hãy in ra màn hình các sinh viên không đi học và những sinh viên bị kỉ luật.

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n (1 ≤ n ≤ 10<sup>6</sup>) là số học sinh trong lớp

- Dòng thứ hai chứa m số nguyên a1, a2, ..., an (1 ≤ ai ≤ n) - mã sinh viên của học sinh

**Đầu ra**

- Dòng đầu tiên in ra danh sách các sinh viên không đi học
- Dòng thứ hai in ra danh sách các sinh viên bị kỉ luật

Nếu không có sinh viên nào nghỉ học thì in ra -1

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 3 | 5 <br> 3 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 3 2 2| 4 5 <br> 1 2 |

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | -1 |

## Bài 2: Quay thưởng

<!-- Tạo thẻ p để hiện image 100% width -->

<p align="center">
  <img src="./b2.jfif" alt="Điểm thưởng" width="100%">

## Bài 3: Số fibonacci thứ n

Dãy Fibonacci là dãy vô hạn các số tự nhiên bắt đầu bằng hai số 1, từ số thứ ba trở đi, mỗi số trong dãy là tổng của hai số liền trước nó. Công thức tổng quát của dãy Fibonacci như sau:

F(1) = 1
F(2) = 1
F(n) = F(n-1) + F(n-2) với n > 2

Hãy viết chương trình tìm số Fibonacci thứ n, kết quả trả về theo modulo 10<sup>9</sup> + 7

**Đầu vào**

Một số nguyên n (1 ≤ n ≤ 10<sup>18</sup>)

**Đầu ra**

Số Fibonacci thứ n theo modulo 10<sup>9</sup> + 7

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 3 | 2 |

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 | 5 |

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
|100 | 687995182 |

**Ví dụ 4:**

| Input | Output |
|:-------|:--------|
|1000000000000000000 | 209783453 |

Gợi ý: Ngoài công thức f[k - 1] + f[k - 2] = f[k] thì ta còn có công thức:

- f[k] * (f[k - 1] + f[k + 1]) = f[2 * k]
- f[k] * f[k] + f[k + 1] * f[k + 1] = f[2 * k + 1]


```

fibo(n):
  if mp.find(n) != mp.end():
    return mp[n]
  k = n / 2
  if (n % 2 == 0):
    mp[n] = (fibo(k) * ((fibo(k - 1) + fibo(k + 1)) % MOD)) % MOD
  else:
    mp[n] = ((fibo(k) * fibo(k)) % MOD + (fibo(k + 1) * fibo(k + 1)) % MOD) % MOD
  return mp[n]

```

## Bài 4: Ước số chung lớn nhất

Cho dãy **a** gồm n số nguyên dương. Cho số nguyên dương k. Bạn được phép chọn đúng **k** phần tử từ dãy **a**. Hãy tìm cách chọn sao cho ước số chung lớn nhất của **k** phần tử đã chọn này là lớn nhất.

**Đầu vào**

- Dòng đầu tiên chứa 2 số nguyên n, k (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ k ≤ n)
- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>6</sup>)

**Đầu ra**

- In ra ước số chung lớn nhất của **k** phần tử đã chọn

**Ví dụ**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 3 2 <br> 2 10 5 | 5 |

**Giải thích:** Có nhiều cách chọn như (2, 10), (2, 5), (5, 10) nhưng chỉ có cách chọn (5, 10) cho ra ước số chung lớn nhất là 5

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 3 <br> 8 3 4 5 6 | 2 |

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5 1 <br> 8 3 4 5 6 | 8 |


```
6 3
8 3 4 5 6 9

Tìm x lớn nhất, có ít nhất K số trong dãy a chia hết cho x

x = 1
s = b[1] + b[2] + b[3] +...+b[9]

x = 2
s = b[2] + b[4] + b[6] + b[8]

x = 3
s = b[3] + b[6] + b[9]

-------------------

7 3
2 2 3 4 6 9 3
b[0] = 0
b[1] = 0
b[2] = 2
b[3] = 2
b[4] = 1
b[5] = 0
b[6] = 1
b[7] = 0
b[8] = 0
b[9] = 1

x = 1
s = b[1] + b[2] + b[3] + b[4] + b[5] + b[6] + b[7] + b[8] + b[9] = 7 > 3

x = 2
s = b[2] + b[4] + b[6] + b[8] = 4 > 3

x = 3
s = b[3] + b[6] + b[9] = 4 > 3

x = 4
s = b[4] + b[8] = 1 < 3

x = 5
s = b[5] = 0 < 3

x = 6
s = b[6] = 1 < 3

x = 7
s = b[7] = 0 < 3

x = 8
s = b[8] = 0 < 3

max / 1 + max / 2 + max / 3 + ... + max / max = O(maxlogmax)

```
Thuật toán
```
x: max -> 1:
  s = 0
  k: 1 -> max / x
    s += b[k * x]
    if s >= k:
      return k


```

## Bài 5: Thời điểm 

Một khu du lịch nổi tiếng có nhiều điểm tham quan. Để xác định được thời điểm mà khu du lịch đó đông nhất, người ta đã ghi lại thời điểm vào và ra của mỗi khách du lịch. Hãy xác định thời điểm mà khu du lịch đó đông nhất. Đưa ra số lượng khách du lịch đông nhất và thời điểm đó.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>) - số lượng khách du lịch

- Mỗi dòng trong n dòng tiếp theo chứa 2 số nguyên a, b (1 ≤ a, b ≤ 10<sup>6</sup>) - thời điểm vào và ra của khách du lịch

**Đầu ra**

- Dòng đầu tiên in ra số lượng khách du lịch đông nhất

- Dòng thứ hai in ra thời điểm đông nhất

**Ví dụ**

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 4 <br> 2 3 <br> 3 4 <br> 4 5 <br> 5 6 | 3|

**Giải thích:** Có 3 khách du lịch đang tham quan vào thời điểm 3

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 <br> 3 4 <br> 5 6 <br> 7 8 <br> 9 10 | 1 |

