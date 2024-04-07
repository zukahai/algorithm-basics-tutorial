// n = 10 output = [1, 2, 5, 10]
// N = 20 output = [1, 2, 4, 5, 10, 20]
// N = 9 output = [1, 3, 9]
// Nếu i là ước của N thì N / i cũng là ước của N
uoc = (n) => {
    let array = [];
    for (let i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            array.push(i);
            if (i !== n / i)
                array.push(Math.floor(n / i));
        }
    }
    return array;
}

// console.log(uoc(10));

// Đếm số ước của N. Ví dụ N = 10, thì output = 4.
demUoc = (n) => {
    let count = 0;
    for (let i = 1; i * i <= n; i++)
        if (n % i == 0)
            count += 2; // i và n / i
    let a = Math.sqrt(n);
    if (a == Math.floor(a))
        count--;
    return count;
}

console.log(demUoc(7));
// 10: 1, 10, 2, 5
// 9: 1, 9, 3, 3