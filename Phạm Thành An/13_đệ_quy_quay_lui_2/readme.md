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