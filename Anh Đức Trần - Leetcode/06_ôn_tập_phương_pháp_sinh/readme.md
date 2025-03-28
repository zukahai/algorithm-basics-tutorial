# Bài 1: Số siêu nguyên tố

Số siêu nguyên tố là số nguyên dương mà nó là số nguyên tố và khi xóa từng chữ số bên phải của nó ra thì các số mới này vẫn là số nguyên tố.<br>
Ví dụ số 2333 là số siêu nguyên tố vì nó là số nguyên tố và khi xóa từng chữ số bên phải ra ta được các số 233, 23, 2 đều là số nguyên tố.

Cho một số nguyên dương N (1 <= N <= 10^18). Nhiệm vụ của bạn là hãy in ra các số siêu nguyên tố không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**INPUT**

Dong đầu chứa số nguyên dương N (1 <= N <= 10^18).

**OUTPUT**

In ra các số siêu nguyên tố không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 100   | 2 3 5 7 23 29 31 37 53 59 71 73 79 |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 1000  | 2 3 5 7 23 29 31 37 53 59 71 73 79 233 239 293 311 313 317 373 379 593 599 719 733 739 797 |

**Ví dụ 3**

| Input | Output |
|-------|--------|
| 100000 | 2 3 5 7 23 29 31 37 53 59 71 73 79 233 239 293 311 313 317 373 379 593 599 719 733 739 797 2333 2339 2393 3119 3137 3733 3739 3793 5939 7193 7331 7333 7393 23333 23339 23399 23993 31193 31379 37337 37339 37397 59393 59399 71933 73331 73939|

x: là số snt, thì nếu như x * 10 + k (0 <= k <= 9) là số nguyên tố thì x * 10 + k là số siêu nguyên tố

2 3 5 7 23 29 31 37 53 59 73 79 233 239

# Bài 2: Số tăng dần đều

Cho số nguyên dương N (1 <= N <= 10^18). Nhiệm vụ của bạn là hãy in ra các số tăng dần đều không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

Số tăng dần đều là số mà các chữ số của nó tạo thành một dãy tăng dần từ trái sang phải. Ví dụ số 123, 234, 468, 258 159, 13579,... là số tăng dần đều.

**INPUT**

Dòng đầu chứa số nguyên dương N (1 <= N <= 10^18).

**OUTPUT**

In ra các số tăng dần đều không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 100   | 1 2 3 4 5 6 7 8 9 12 13 14 15 16 17 18 19 23 24 25 26 27 28 29 34 35 36 37 38 39 45 46 47 48 49 56 57 58 59 67 68 69 78 79 89 |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 250  | 1 2 3 4 5 6 7 8 9 12 13 14 15 16 17 18 19 23 24 25 26 27 28 29 34 35 36 37 38 39 45 46 47 48 49 56 57 58 59 67 68 69 78 79 89 123 135 147 159 234 246|


# Bài 3: Số đối xứng

Cho số nguyên dương N (1 <= N <= 10^14). Nhiệm vụ của bạn là hãy in ra các số đối xứng không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

Số đối xứng là số mà khi đọc từ trái sang phải hoặc từ phải sang trái đều giống nhau. Ví dụ số 121, 12321, 1331, 456654, 1234321,... là số đối xứng.

**INPUT**

Dòng đầu chứa số nguyên dương N (1 <= N <= 10^14).

**OUTPUT**

In ra các số đối xứng không vượt quá N. Các số tăng dần và cách nhau bởi dấu cách.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|-------|--------|
| 100   | 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 99 |

**Ví dụ 2**

| Input | Output |
|-------|--------|
| 2000| 1 2 3 4 5 6 7 8 9 11 22 33 44 55 66 77 88 99 101 111 121 131 141 151 161 171 181 191 202 212 222 232 242 252 262 272 282 292 303 313 323 333 343 353 363 373 383 393 404 414 424 434 444 454 464 474 484 494 505 515 525 535 545 555 565 575 585 595 606 616 626 636 646 656 666 676 686 696 707 717 727 737 747 757 767 777 787 797 808 818 828 838 848 858 868 878 888 898 909 919 929 939 949 959 969 979 989 999 1001 1111 1221 1331 1441 1551 1661 1771 1881 1991|



1, 2, ..., 10
1, 11, 2, 22, ... 101, 1001

123
concat(123, reverse(12)) = 12321

long long reverse(long long n);
reverse(123) = 321
concat(123, 3219) = 1233219

index = 123

concat(index, reverse(index)) = 123321
concat(index, reverse(index / 10)) = 12321
