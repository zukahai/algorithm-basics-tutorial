## Bài 1: Hoán vị

Cho số nguyên dương **n**. Hãy in ra tất cả các hoán vị của tập hợp {1, 2, 3, ..., **n**}. 2 hoán vị gọi là khác nhau nếu có ít nhất một vị trí mà 2 hoán vị khác nhau.

**Input**

Một số nguyên **n** (1 ≤ **n** ≤ 10).

**Output**

In ra tất cả các hoán vị của tập hợp {1, 2, 3, ..., **n**}. Mỗi hoán vị in ra **n** số nguyên cách nhau bởi dấu cách. Các hoán vị không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 3     | 1 2 3<br>1 3 2<br>2 1 3<br>2 3 1<br>3 1 2<br>3 2 1|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 4     | 1 2 3 4<br> 1 2 4 3<br> 1 3 2 4<br> 1 3 4 2<br> 1 4 2 3<br> 1 4 3 2<br> 2 1 3 4<br> 2 1 4 3<br> 2 3 1 4<br> 2 3 4 1<br> 2 4 1 3<br> 2 4 3 1<br> 3 1 2 4<br> 3 1 4 2<br> 3 2 1 4<br> 3 2 4 1<br> 3 4 1 2<br> 3 4 2 1<br> 4 1 2 3<br> 4 1 3 2<br> 4 2 1 3<br> 4 2 3 1<br> 4 3 1 2<br> 4 3 2 1|

## Bài 2: Sinh chỉnh hợp

Cho số nguyên dương **n** và **k**. Hãy in ra tất cả các chỉnh hợp **k** của tập hợp {1, 2, 3, ..., **n**}. 2 chỉnh hợp gọi là khác nhau nếu có ít nhất một vị trí mà 2 chỉnh hợp khác nhau.

**Input**

Gồm 2 số nguyên **n** và **k** (1 ≤ **k** ≤ **n** ≤ 10).

**Output**

In ra tất cả các chỉnh hợp **k** của tập hợp {1, 2, 3, ..., **n**}. Mỗi chỉnh hợp in ra **k** số nguyên cách nhau bởi dấu cách. Các chỉnh hợp không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 3 2   | 1 2<br>1 3<br>2 1<br>2 3<br>3 1<br>3 2|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 4 3   | 1 2 3<br>1 2 4<br>1 3 2<br>1 3 4<br>1 4 2<br>1 4 3<br>2 1 3<br>2 1 4<br>2 3 1<br>2 3 4<br>2 4 1<br>2 4 3<br>3 1 2<br>3 1 4<br>3 2 1<br>3 2 4<br>3 4 1<br>3 4 2<br>4 1 2<br>4 1 3<br>4 2 1<br>4 2 3<br>4 3 1<br>4 3 2|

## Bài 3: Bài toán N quân hậu

Cho số nguyên dương **n**. Hãy in ra tất cả các cách xếp **n** quân hậu trên bàn cờ **nxn** sao cho không có 2 quân hậu nào ăn được nhau. 2 cách xếp gọi là khác nhau nếu có ít nhất một vị trí mà 2 cách xếp khác nhau.

**Input**

Một số nguyên **n** (1 ≤ **n** ≤ 10).

**Output**

In ra tất cả các cách xếp **n** quân hậu trên bàn cờ **nxn** sao cho không có 2 quân hậu nào ăn được nhau. Mỗi cách xếp in ra **n** số nguyên cách nhau bởi dấu cách thể hiện vị trí của quân hậu trên mỗi hàng. Nếu không có cách xếp nào thì in ra "NO SOLUTION".

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 1     | 1|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 2     | NO SOLUTION|

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 4     | 2 4 1 3<br>3 1 4 2|

Cách 1:

![alt text](image.png)

Cách 2:

![alt text](image-1.png)