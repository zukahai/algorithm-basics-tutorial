/*
Cho ba số nguyên dương N và K, H.
Đếm xem từ 1 đến N có bao nhiều số chia hết cho K hoặc H.

Ví dụ:
Với K = 3, K = 4  và N = 10, 
kết quả countDivisibleByK(N, K, H) = 5
Giải thích:
Các số chia hết cho 3 hoặc 4 từ 1 đến 10 là 3, 4, 6, 8, 9.
- Với K = 2 và H = 3, N = 12 kết quả countDivisibleByK(N, K, H) = 7
Giải thích:
Các số chia hết cho 2 hoặc 3 từ 1 đến 10 là 2, 3, 4, 6, 8, 9, 10, 12

0 < N, K, H < 10^15
*/

bcnn = (a, b) => {
    return a * b / ucln(a, b);
}

ucln = (a, b) => {
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

let countDivisibleByKH = (N, K, H) => {
    let count = 0;
    for (let i = 1; i <= N; i++) {
        if (i % K === 0 || i % H == 0)
            count++;
    }
    return count;
}

// Những số vừa chia hết cho K và H thì tính thừa 1 lần
// Những số chia hết cho K và H là bội chung của K và H
// Những số chia hết cho bcnn(K, H) thì đều chia hết cho K và H
countDivisibleByKH2 = (N, K, H) => {
    let chiaK = Math.floor(N / K);
    let chiaH = Math.floor(N / H);
    let M = bcnn(K, H);
    let chiaKH = Math.floor(N / M);
    return chiaH + chiaK - chiaKH;
}

console.log(countDivisibleByKH2(10, 2, 3));
// 2: 5
// 3: 3


