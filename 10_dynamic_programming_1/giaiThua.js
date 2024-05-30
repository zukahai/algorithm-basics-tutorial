// Tính N!

// a[k] sẽ là lưu giá trị của k!
// a[k] = k * a[k - 1]    <=>     n! = n * (n - 1)!

giaiThua = (n) => {
    let a = new Array(n + 1);

    a[0] = 1; // 0! = 1
    for (let i = 1; i <= n; i++)
        a[i] = i * a[i - 1];
    return a[n];
}

console.log(giaiThua(5));