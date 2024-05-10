// 1 1 2 3 5 8 13 ...
// Tính số fibonaci thứ N
// a[N] chính là fibonaci thứ N
// a[N] = a[N - 1] + a[N - 2]

let fibonaci = (n) => {
    let a = new Array(n + 1);
    a[1] = a[2] = 1;
    for (let i = 3; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];
    return a[n];
}

console.log(fibonaci(7));