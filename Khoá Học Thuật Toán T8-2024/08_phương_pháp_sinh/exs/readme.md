# Bài haizuka_a801

Hãy tìm số lớn nhất chia hết cho k mà nhỏ hơn hoặc bằng n

Hãy tìm số lớn nhất chia hết cho k mà không vượt quá n

h lớn nhất có thể
h % k == 0
h <= n

h = k * x

k * x <= n
x <= n / k

# Bài haizuka_a802

Cho N và K

- Tìm H nhỏ nhất
- H % K == 0
- H >= N

H = K * x
K * x >= N
x >= N / K

N = 10, k = 3

x >= 10 / 3 (3.333)

Nếu N % K == 0 thì x = N / K
Nếu N % K != 0 thì x = N / K + 1

x = ceil((double)N / K)

## Bài tập vận dụng

**Làm đến 20h45**

Nhập vào 2 số N và K, Tính tổng các số chia hết cho K từ trong khoảng từ 1 đến N

Kết quả có thể rất lớn nên cần in ra số dư của kết quả khi chia cho 10<sup>9</sup> + 7

**Đầu vào**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>18</sup>)
- Dòng thứ hai chứa số nguyên K (1 ≤ K ≤ 10<sup>18</sup>)

**Đầu ra**

- Một số nguyên là tổng các số chia hết cho K từ 1 đến N, sau khi chia cho 10<sup>9</sup> + 7

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 10 3 | 18 |

**Giải thích**

Các số chia hết cho 3 từ 1 đến 10 là 3, 6, 9

```
S = k + 2k + 3k + ... + k*x
S = k * (1 + 2 + 3 + ... + x)
S = k * x * (x + 1) / 2

a = x
b = x + 1

S = k * a * b * 2

Nếu a chẵn
    a /= 2
Ngược lại
    b /= 2

S = k * a * b
S % m = (((k % m) * (a % m)) % m * (b % m)) % m

k*x <= n
x <= n / k
```

# Bài haizuka_a803

Cho N.

- Tìm H lớn nhất
- H <= N
- H là số chính phương

H = x * x

x * x <= N
x <= sqrt(N)
x = (long long)(sqrt(N))

N = 9
x <= sqrt(9) = 3

N = 10

x <= sqrt(10) = 3.162

# Bài haizuka_a804

- H là số chính phương
- H nhỏ nhất
- H >= N

H = x * x

x * x >= N
x >= sqrt(N)

x = ceil(sqrt(N))



# Bài tâp vận dụng

**Làm đến 21h45**

Nhập vào số nguyên N, Tính tổng các số chính phương nhỏ hơn hoặc bằng N

Kết quả có thể rất lớn nên cần in ra số dư của kết quả khi chia cho 10<sup>9</sup> + 7

**Đầu vào**

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10<sup>18</sup>)

**Đầu ra**

- Một số nguyên là tổng các số chính phương nhỏ hơn hoặc bằng N, sau khi chia cho 10<sup>9</sup> + 7

**Ví dụ**

| Input | Output |
|:-------|:--------|
| 10 | 14 |

**Giải thích**

Các số chính phương nhỏ hơn hoặc bằng 10 là 1, 4, 9

```
S = 1*1 + 2*2 + 3*3 + ... + x*x

x*x <= N

x <= sqrt(N)

x = (long long)(sqrt(N))

S = x * (x + 1) * (2 * x + 1) / 6

a = x
b = x + 1
c = 2 * x + 1

S = a * b * c / 6

Nếu a chẵn
    a /= 2
Ngược lại Nếu b chẵn
    b /= 2
Ngược lại
    c /= 2

Nếu a chia hết cho 3
    a /= 3
Ngược lại Nếu b chia hết cho 3
    b /= 3
Ngược lại
    c /= 3

S = a * b * c

```


