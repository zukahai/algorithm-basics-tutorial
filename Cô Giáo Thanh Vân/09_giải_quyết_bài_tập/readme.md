123456789101112131415...

Những số có 1 chữ số: 1 -> 9: 9 số, 9 ký tự
Những số có 2 chữ số: 10 -> 99: 90 số, 180 ký tự tiếp
Những số có 3 chữ số: 100 -> 999: 900 số, 2700 ký tự 
Những số có 4 chữ số: 1000 -> 9999: 9000 số, 36000 ký tự
Những số có 5 chữ số: 10000 -> 99999: 90000 số, 450000 ký tự
Những số có 6 chữ số: 100000 -> 999999: 900000 số, 5400000 ký tự

200
200 - 9 = 191
191 - 180 = 11

t2 = 11, so = 3

9 * 10 ** (so - 1) * so


In ra ra ký tự thứ T trong danh sách có `so` chữ 

t=10  so=4  k=3
100010011002
1002
t so

k = ceil(T/so)

Rơi vào số 10**(so-1) + k - 1
t -= (k - 1) * so

t = 16
t -= 9,  t = 7

t = 7, so = 2



## Tìm số dễ

Viết các số có `so` chữ số liên tiếp.
Tìm ký tự thứ `t` và cho biết nó đang rơi vào số nào

**Input**:

- `t`: thứ tự ký tự cần tìm
- `so`: số chữ số của các số cần 

**Output**:

- Dòng đầu tiên: Ký tự thứ `t` trong dãy số
- Dòng thứ hai: Số x là số mà ký tự `t` đang rơi vào

Ví dụ:

Với t = 5, so = 3

100101102
101

k = ceil(5/3) = 2

x = 10**(so - 1) + k - 1 = 101

tx = t - (k - 1) * so = 2

100000100001