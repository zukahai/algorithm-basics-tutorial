# Khoảng cách giữa hai điểm trong không gian 2 chiều

Khoảng cách giữa hai điểm trong không gian 2 chiều có thể được tính bằng công thức khoảng cách Euclid. Giả sử ta có hai điểm A(x1, y1) và B(x2, y2), thì khoảng cách d giữa hai điểm này được tính theo công thức sau:

d = √((x2 - x1)² + (y2 - y1)²)  

Cho toạ độ của 2 điểm A và B. Hãy trả về khoảng cách giữa hai điểm này.

Kết quả trả về sẽ được làm tròn đến 2 chữ số thập phân.

**Đầu vào:**

- Dòng đầu tiên chứa 4 số nguyên x1, y1, x2, y2 (-1000 ≤ x1, y1, x2, y2 ≤ 1000) là toạ độ của hai điểm A và B.

**Đầu ra:**

- In ra khoảng cách giữa hai điểm A và B, làm tròn đến 2 chữ số thập phân.

**Ví dụ 1:** 

|input|output|
|:---|:---|
|0 0 3 4|5.00|

**Ví dụ 2:**

|input|output|
|:---|:---| 
|1 2 3 4|2.83|


---

**Nếu làm sai hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)

# Đường thẳng đi qua 2 điểm 

Cho toạ độ của 2 điểm A và B trong mặt phẳng Oxy. Hãy tìm phương trình đường thẳng đi qua hai điểm A và B.

Phương trình đường thẳng đi qua hai điểm A(x1, y1) và B(x2, y2) có thể được biểu diễn dưới dạng:

ax + by + c = 0

Trong đó: ước chung lớn nhất của a, b, c là 1 và a ≥ 0. Nếu a = 0 thì b ≥ 0.

**Đầu vào:**

- Dòng đầu tiên chứa 4 số nguyên x1, y1, x2, y2 (-1000 ≤ x1, y1, x2, y2 ≤ 1000) là toạ độ của hai điểm A và B. Hai điểm A và B không trùng nhau.

**Đầu ra:**

- In ra phương trình đường thẳng đi qua hai điểm A và B dưới dạng ax + by + c = 0. In ra các hệ số a, b, c liên tiếp nhau, cách nhau một dấu cách.

**Ví dụ 1:**

|Đầu vào|Đầu ra|
|:---|:---|
|0 2 1 3|1 -1 -2|

Giải thích: Phương trình đường thẳng đi qua hai điểm A(0, 2) và B(1, 3) là x - y + 2 = 0.

**Ví dụ 2:**

|Đầu vào|Đầu ra|
|:---|:---|
|-1 6 1 3|3 2 -9|

---

**Nếu làm sai hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)

# Kiểm tra 3 điểm thẳng hàng

Cho toạ độ của 3 điểm A, B và C trong mặt phẳng Oxy. Hãy kiểm tra xem ba điểm A, B và C có thẳng hàng hay không.

Nếu ba điểm thẳng hàng, in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa 2 số nguyên x1, y1 (-1000 ≤ x1, y1 ≤ 1000) là toạ độ của điểm A.
- Dòng thứ hai chứa 2 số nguyên x2, y2 (-1000 ≤ x2, y2 ≤ 1000) là toạ độ của điểm B.
- Dòng thứ ba chứa 2 số nguyên x3, y3 (-1000 ≤ x3, y3 ≤ 1000) là toạ độ của điểm C. Ba điểm A, B và C không trùng nhau.

**Đầu ra:**

- In ra "YES" nếu ba điểm A, B và C thẳng hàng, ngược lại in ra "NO".

**Ví dụ 1:**

|Đầu vào|Đầu ra|
|:---|:---|
|0 0<br>1 1<br>2 2|YES|

**Ví dụ 2:**

|Đầu vào|Đầu ra|
|:---|:---|
|0 0<br>1 2<br>2 2|NO|

---

**Nếu làm sai hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)

# Kiểm tra N điểm thẳng hàng

Cho toạ độ của N điểm trong mặt phẳng Oxy. Hãy kiểm tra xem N điểm có thẳng hàng hay không.

Nếu N điểm thẳng hàng, in ra "YES", ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên N (2 ≤ N ≤ 10<sup>5</sup>) là số lượng điểm.
- N dòng tiếp theo, mỗi dòng chứa 2 số nguyên xi, yi (-10<sup>9</sup> ≤ xi, yi ≤ 10<sup>9</sup>) là toạ độ của điểm thứ i. Các điểm không trùng nhau.

**Đầu ra:**

- In ra "YES" nếu N điểm thẳng hàng, ngược lại in ra "NO".

**Ví dụ 1:**

|Đầu vào|Đầu ra|
|:---|:---|
|4<br>0 0<br>1 1<br>2 2<br>-1 -1|YES|

**Ví dụ 2:**

|Đầu vào|Đầu ra|
|:---|:---|
|4<br>0 0<br>1 2<br>2 2<br>-1 -1|NO|

---

**Nếu làm sai hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)

# Hình chữ nhật diện tích nhỏ nhất

Cho tạo độ 2 điểm A và B trong mặt phẳng Oxy. Hãy tìm diện tích hình chữ nhật nhỏ nhất có thể bao quanh hai điểm A và B (2 điểm không nằm trên cạnh của hình chữ nhật), với các cạnh song song với các trục toạ độ.

**Đầu vào:**

- Dòng đầu tiên chứa 4 số nguyên x1, y1, x2, y2 (-1000 ≤ x1, y1, x2, y2 ≤ 1000) là toạ độ của hai điểm A và B.

**Đầu ra:**

- In ra diện tích hình chữ nhật nhỏ nhất có thể bao quanh hai điểm A và B.

**Ví dụ:**

|Đầu vào|Đầu ra|
|:---|:---|
|-1 -1 2 3|20|

Giải thích: Hình chữ nhật nhỏ nhất có thể bao quanh hai điểm A(-1, -1) và B(2, 3) có chiều dài 6 và chiều rộng 5, nên diện tích là 6 * 5 = 20

---

**Nếu làm sai hãy liên hệ:**
- Zalo Phan Đức Hải: [0961463407](https://zalo.me/0961463407)