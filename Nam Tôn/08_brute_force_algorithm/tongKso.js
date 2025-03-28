/*
Cho một dãy số gồm N số nguyên, cho số nguyên K (K <= N).
Tìm ra dãy K phần tử liên tiếp trong dãy a
Sao cho tổng K phần tử đó là lớn nhất.

Ví dụ a = [4, 1, 5, 10, 3, 2], K = 4
Thì tổng lớn nhất của 3 số liên tiếp là 18
*/


tongKso = (a, k) => {
    let max = -10000000000;
    for (let i = 0; i <= a.length - k; i++) {
        let sum = 0;
        for (let j = i; j <= i + k -1; j++)
            sum += a[j];
        if (max < sum)
            max = sum;
    }
    return max;
}

console.log(tongKso([4, 1, 5, 10, 3, 2], 3));

// 1: i
// 2: i + 1
// 3: i + 2
//...
///k: i + k - 1;