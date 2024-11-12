Tính tổng các số nguyên tố 
trong khoảng a đến b

Đầu và có t là số test (t <= 10^6)
t dòng tiếp theo, mỗi dòng là 2 số a va b
(1 <= a <= b <= 10^7)

Ví dụ:
Đầu vào
3
1 5
7 10
1 1

Kết quả là:
10
7
0


Cho một dãy số a gồm n phần tử và một số nguyên dương k.
Hãy chọn k phần tử từ dãy a sao cho ước chung lớn nhất của chúng là lớn nhất có thể.

Input:

- Dòng đầu tiên chứa 2 số nguyên n và k (1 ≤ k ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ 2 chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

Output:

- In ra ước chung lớn nhất lớn nhất có thể.

Ví dụ:

| Input | Output |
|:-------|:--------|
| 5 3<br> 6 2 3 4 6 | 3 |

Giải thích: Cách tốt nhất là chọn 3 số 6, 3, 6. Ước chung lớn nhất của chúng là 3.

-------------------------------------------------

5 3
6 2 3 4 6
Kết quả
3

Đếm xem trong dãy,
có bao nhiêu số nhận số x làm ước
(Có bao nhiêu bội số của x trong dãy)

x = 1, 5
x = 2, 4
x = 3, 3
x = 4, 1
x = 5, 0
x = 6, 2




5 3
6 2 3 4 6
Kết quả
3

Đếm xem trong dãy,
có bao nhiêu số nhận số x làm ước
(Có bao nhiêu bội số của x trong dãy)

x = 1, 5
x = 2, 4
x = 3, 3
x = 4, 1
x = 5, 0
x = 6, 2

5 3
6 2 3 4 6
mp[1] = 0
mp[2] = 1
mp[3] = 1
mp[4] = 1
mp[5] = 0
mp[6] = 2

x = 1, bội của x là: 1, 2, 3, 4, 5, 6
mp[1] + mp[2] + mp[3] + mp[4] + mp[5] + mp[6]
0 + 1 + 1 + 1 + 0 + 2 = 5
x = 2, bội của x là: 2, 4, 6
mp[2] + mp[4] + mp[6]
1 + 1 + 2 = 4
x = 3, bội của x là: 3, 6
x = 4, bội của x là: 4
x = 5, bội của x là: 5
x = 6, bội của x là: 6
