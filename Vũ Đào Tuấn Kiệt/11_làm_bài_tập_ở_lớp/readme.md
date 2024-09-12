Bộ 3 cạnh tam giác cân {a, a, b}
b: nằm trong khoảng 1 đến 2a - 1

a, b thì cạnh còn lại nằm trong khoảng |a - b| + 1 -> a + b - 1

```cpp
7
1 2 2 2 3 3 4

mp[1] = 1
mp[2] = 3
mp[3] = 2
mp[4] = 1

b = [1, 2, 3, 4]
t = [1, 4, 6, 7]

Xét cạnh bằng 1: Số lần xuất hiện < 2
Xét cạnh bằng 2: Số lần xuất hiện >= 2
Đếm xem có bao nhiêu số từ 1 đến 2 * 2 - 1
6 - 3 = 3
Xét cạnh bằng 3: Số lần xuất hiện >= 2
7 - 2

mp[k]: Số lần xuất hiện của k
Tạo mảng b: Lưu tất cả key của mp
Tạo mảng t[k]: Tổng từ mp[1] đến mp[a[k]]

Duyệt trong map mp:
    Nếu second >= 2:
        maxB = 2 * first - 1
        index = BS(b, maxB)
        temp = t[index]
        Nếu b[index] >= first:
            temp -= mp[first]
        res += temp * (second * (second - 1) / 2)

    Nếu second >= 3:
        res += second * (second - 1) * (second - 2) / 6

return res
        

n * (n - 1) * (n - 2) / 6
```