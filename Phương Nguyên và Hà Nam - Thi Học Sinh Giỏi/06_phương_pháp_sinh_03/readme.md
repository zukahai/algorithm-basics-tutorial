# Phương pháp sinh

Áp dụng cho những bài toán có cấu trúc, có thể sinh ra tất cả các trường hợp có thể xảy ra. Ví dụ: sinh ra các số chia hết cho 3, số chính phương, số chẵn, số lẻ, số đối xứng, số siêu đối xứng, số siêu nguyên tố,...

- Quy trình giải bài tập theo dạng phương pháp sinh
    + Tìm công thức sinh: f(x)
    + Thay vào bất phương trình
    + Tìm x
    + Thay vào f(x) để tìm kết quả

- Tìm số
    + Tìm số nhỏ nhất lớn hơn hoặc bằng N (không bé hơn N):    x >= N
    + Tìm số nhỏ nhất lớn hơn N:    x > N
    + Tìm số lớn nhất nhỏ hơn hoặc bằng N (không lớn hơn N, không vượt quá N):   x <= N
    + Tìm số lớn nhất nhỏ hơn N:   x < N

- In ra danh sách số:
    + In ra danh sách từ 1 đến N
    + In ra danh sách từ A đến B

- Đếm số lượng:
    + Đếm số lượng từ 1 đến N
    + Đếm số lượng từ A đến B

- Công thức sinh ( thay x bất kỳ vào thì được số đó, mọi số đều được biểu diễn theo công thức đó)
    + Số chia hết cho K, f(x) = K * x
    + Số chính phương, f(x) = x * x
    + Số chẵn, f(x) = 2 * x
    + Số lẻ, f(x) = 2 * x + 1
    + Số chẵn chia hết cho K: 
        + f(x) = 2 * k * x, nếu K lẻ
        + f(x) = k * x, nếu K chẵn
    + Số chia a dư b, f(x) = a * x + b

Tìm số chính phương trong đoạn [L, R]

L <= x * x <= R

x * x >= L
x1 = ceil(sqrt(L))

x * x <= R
x <= sqrt(R)
x2 = (long long)(sqrt(R))

cout << x2 - x1 + 1 << endl;

cin >> L >> R;
x1 = ceil(sqrt(L));
x2 = (long long)(sqrt(R));
cout << x2 - x1 + 1 << endl;


## Danh sách số chẵn chia hết cho K trong đoạn [A, B]

A = 10, B = 35, K = 3
12, 18, 24, 30

A = 10, B = 35, K = 4
12, 16, 20, 24, 28, 32

2 * k * x nếu K lẻ
k * x nếu K chẵn

A <= f(x) <= B

A <= k * x <= B

k * x >= A
x1 = ceil(1.0 * A / k)

k * x <= B
x2 = B / k


A <= 2 * k * x <= B

## Đếm số lượng số chia a dư b trong đoạn [L, R]

(1 <= b < a <= 10^18, 1 <= L <= R <= 10^18)

Ví dụ:
a = 3, b = 1, L = 10, R = 20
Kết quả là: 4

Giải thích:
10 13 16 19

50 49 10 20

(10 - 49) / 50

## Đếm số chia hết cho a hoặc b trong đoạn [L, R]

(1 <= a, b <= 10^18, 1 <= L <= R <= 10^18)

Ví dụ:

a = 4, b = 6, L = 10, R = 30

Kết quả là: 7

Giải thích:
Có 7 số
12 16 18 20 24 28 30

- Đếm trong [L, R] có bao nhiêu số chia hết cho a
- Đếm trong [L, R] có bao nhiêu số chia hết cho b

12 16 20 24 28
12 18 24 30