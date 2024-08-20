## Bài 1: Cửa hàng bút

Một cửa hàng bán bút. Cứ mua 5 câu bút sẽ được tặng 2 cậy bút.<br>
Bạn cần mua đủ `n` cây bút. Hỏi bạn cần phải mua ít nhất bao nhiêu cây bút để có được đủ `n` cây bút.

**Input**<br>

Một số nguyên `n` (1 ≤ n ≤ 10^17).

**Output**<br>

Số nguyên là số cây bút ít nhất bạn cần phải mua.

**Ví dụ**

**Ví dụ 1**<br>

| Input | Output |
|-------|--------|
| 8     | 6      |

*Giải thích:*<br>

Mua 5 cây bút sẽ được tặng 2 cây bút. Mua thêm 1 cây bút nữa sẽ có 8 cây bút.

**Ví dụ 2**<br>

| Input | Output |
|-------|--------|
| 14    | 10      |

**Ví dụ 3**<br>

| Input | Output |
|-------|--------|
| 6    | 5     |

x: i
y: a[i]
x tăng, thì y cũng tăng hoặc giảm

x: số bút đã mua
y: tổng số bút

Mua x cây bút, tìm y?

y = x + (x // 5) * 2

x = 18
y = 18 + (18 // 5) * 2
= 18 + 3 * 2 
= 18 + 6 = 24

30 cây bút [22]

[1, 30] -> 15
-> 15 + 3 * 2 = 21
[16, 30] -> 23
-> 23 + 4 * 2 = 31
[16, 22] -> 19
-> 19 + 3 * 2 = 25
[20, 22] -> 21
-> 21 + 4 * 2 = 
[22, 22] -> 22
-> 22 + 4 * 2 = 
[22, 21]

## Bài 2: Nhà hát

Bạn là chủ của một nhà hát, với suy nghĩ sáng tạo, độc lạ, bạn muốn thiết kế nhà hát của mình theo một cách đặc biệt. Nhà hát của bạn có dạng hình tam giác, với hàng ghế ngồi như sau:

```
*
**
***
****
*****
...
```

Hàng thứ nhất có 1 ghế ngồi, hàng thứ 2 có 2 ghế ngồi, hàng thứ 3 có 3 ghế ngồi, ..., hàng thứ n có n ghế ngồi.

Bạn muốn biết được rằng, để đảm bảo ghế ngồi cho `n` người, bạn cần phải có ít nhất bao nhiêu hàng ghế.

**Input**

Một số nguyên `n` (1 ≤ n ≤ 10^9).

**Output**

Số nguyên m - số hàng ghế ít nhất cần có.

**Ví dụ**

| Input | Output |
|-------|--------|
| 5     | 3      |

**Giải thích**

Cần ít nhất 3 hàng ghế để đảm bảo có đủ ghế ngồi cho 5 người:

```
*
**
***
```

3 Hàng ghế này có 1 + 2 + 3 = 6 ghế ngồi, nhiều hơn 5 ghế ngồi cần thiết.


Số hàng ghế: x
Tổng số ghế: y

y = x * (x + 1) // 2
kq = 6

input N = 20

[1, 20] -> 10
-> 10 * 11 // 2 = 55
[1, 9] -> 5
-> 5 * 6 // 2 = 15
[6, 9] -> 7
-> 7 * 8 // 2 = 28
[6, 6] -> 6
-> 6 * 7 // 2 = 21
[7, 6]

input N = 55
kq = 10

[1, 55] -> 28
-> 28 * 29 // 2 = 406
[1, 27] -> 14
-> 14 * 15 // 2 = 105
[1, 13] -> 7
-> 7 * 8 // 2 = 28
[8, 13] -> 10
-> 10 * 11 // 2 = 55
[8, 9] -> 9
-> 9 * 10 // 2 = 45
[10, 9]

## Bài 3: Trả tiền công

Hải đi làm thuê cho một công ty. Mỗi ngày, anh được trả 1 đồng tiền vàng. Ông chủ công ty rất yêu thích anh ta nên cứ 3 ngày sẽ tặng anh 1 đồng tiền vàng. <br>

Hải cần đủ `n` đồng tiền vàng để mua một món quà cho người yêu. Hỏi Hải cần phải làm việc ít nhất bao nhiêu ngày để có đủ `n` đồng tiền vàng.

**Input**

Một số nguyên `n` (1 ≤ n ≤ 10^18).

**Output**

Số nguyên m - số ngày ít nhất cần làm việc.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 5     | 4      |

**Giải thích**

Hải cần phải làm ít nhất 4 ngày để có đủ 5 đồng tiền vàng

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 10    | 8      |

## Bài 4: Nhà hát 2

Nhà hát của bạn có dạng hình dạng đặc biệt, với hàng ghế ngồi như sau, hàng thứ nhất có a ghế ngồi, hàng thứ 2 có a + 1 ghế ngồi, hàng thứ 3 có a + 2 ghế ngồi, ..., hàng thứ n có a + n - 1 ghế ngồi.

Bạn muốn biết được rằng, để đảm bảo ghế ngồi cho `n` người, bạn cần phải có ít nhất bao nhiêu hàng ghế.

**Input**

Hai số nguyên `n` và `a` (1 ≤ n, a ≤ 10^9).

**Output**

Số nguyên m - số hàng ghế ít nhất cần có.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 5  2 | 2      |

**Giải thích**

Cần ít nhất 2 hàng ghế để đảm bảo có đủ ghế ngồi cho 5 người:

```
**
***
```

2 Hàng ghế này có 2 + 3 = 5 ghế ngồi, nhiều hơn hoặc bằng 5 ghế ngồi cần thiết.

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 10  3 | 3      |

**Giải thích**

Cần ít nhất 3 hàng ghế để đảm bảo có đủ ghế ngồi cho 10 người:

```
***
****
*****
```

3 Hàng ghế này có 3 + 4 + 5 = 12 ghế ngồi, nhiều hơn hoặc bằng 10 ghế ngồi cần thiết.

a: số ghế hàng đầu tiên

x: số hàng ghế
y: tổng số ghế

y = a + (a + 1) + (a + 2) + ... + (a + x - 1)
y = (a + x - 1) * (a + x) // 2 - a * (a - 1) // 2 

a = 3, x = 3


--------------------------

Tổng a tới b: [1, b] - [1, a - 1]
b * (b + 1) // 2 - a * (a - 1) // 2
(a + x - 1) * (a + x) // 2 - a * (a - 1) // 2

## Bài 5: Con ốc sên

Một con ốc sên bắt đầu từ đáy giếng, mỗi ngày nó sẽ bò lên 1 đoạn nhất định. Ban ngày nó bò được 3 mét, ban đêm nó ngủ và tụt xuống 1 mét. Cho trước chiều cao của giếng `h` mét, hỏi sau bao nhiêu ngày thì ốc sên sẽ bò ra khỏi giếng.

**Input**

Một số nguyên `h` (1 ≤ h ≤ 10^18).

**Output**

Số nguyên m - số ngày cần thiết.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 5     | 2      |

**Giải thích**

Ngày 1: ốc sên bò lên 3 mét, sau đó tụt xuống 1 mét, còn 2 mét. Còn 3 mét nữa để bò ra khỏi giếng.

Ngày 2: ốc sên bò lên 3 mét, ra khỏi giếng.

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 10    | 5      |

**Giải thích**

Ngày 1: ốc sên bò lên 3 mét, sau đó tụt xuống 1 mét, còn 2 mét. Còn 8 mét nữa để bò ra khỏi giếng.

Ngày 2: ốc sên bò lên 3 mét, sau đó tụt xuống 1 mét, tổng cộng bò được 4 mét, còn 6 mét nữa để bò ra khỏi giếng.

Ngày 3: ốc sên bò lên 3 mét, sau đó tụt xuống 1 mét, tổng cộng bò được 6 mét, còn 4 mét nữa để bò ra khỏi giếng.

Ngày 4: ốc sên bò lên 3 mét, sau đó tụt xuống 1 mét, tổng cộng bò được 8 mét, Còn 2 mét nữa để bò ra khỏi giếng.

Ngày 5: ốc sên bò lên 3 mét, ra khỏi giếng.
