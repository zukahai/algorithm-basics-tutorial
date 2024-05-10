/*
Cho hai số nguyên dương N và K.
Đếm xem từ 1 đến N có bao nhiều số chia hết cho K.

Ví dụ:
Với K = 3 và N = 10, kết quả countDivisibleByK(N, K) = 3
Giải thích: Các số chia hết cho 3 từ 1 đến 10 là 3, 6, 9.
- Với K = 5 và N = 10, kết quả countDivisibleByK(N, K) = 2
Giải thích: Các số chia hết cho 5 từ 1 đến 10 là 5, 10.

0 < N, K < 10^15
*/

countDivisibleByK = (N, K) => {
    let count = 0;
    for (let i = 1; i <= N; i++) {
        if (i % K === 0)
            count++;
    }
    return count;
}

countDivisibleByK2 = (N, K) => {
    // K*1, K*2, K*3,..., K*M
    // K*M = N, => M = N/K
    return Math.floor(N / K);
}

console.log(countDivisibleByK2(10000000000000, 5));
// 5 10 15 20 25 ,..., 50
// 5 * 1
// 5 * 2
// 5 * 3
//...
// 5 * 10
// 5 * M = hoặc gần bằng 1000
// M = 1000 / 5 = 200