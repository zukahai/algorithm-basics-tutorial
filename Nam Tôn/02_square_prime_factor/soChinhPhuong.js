// Số chính là số có thể biểu diễn dưới dạng bình phương của một số nguyên
// Ví dụ 4, 9, 16, 100,..

// Kiểm tra xem N có phải là số chính phương không.

soChinhPhuong = (n) => {
    for (let i = 1; i * i <= n; i++)
        if (i * i == n)
            return true;
    return false;
}

soChinhPhuong2 = (n) => {
    let a = Math.sqrt(n);
    return a == Math.floor(a)
}

console.log(soChinhPhuong2(100000000000000000000));

// 4, 9, 25
// 10, 11