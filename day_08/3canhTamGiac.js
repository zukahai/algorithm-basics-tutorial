/* Cho truớc 2 số nguyên dương a và b.
Đêm xem có bao nhiêu giá trị c.
Sao cho a, b, c có thể là độ dài của 3 cạnh trong 1 tam giác

Ví dụ a = 3, b = 4 thì kết quả là: 5
Các số c thoả mãn là 2, 3, 4, 5, 6
*/
// b - a + 1 đến a + b - 1, với a <= b

isTamGiac = (a, b, c) => {
    if (a < 0 || b < 0 || c < 0)
        return false;
    if (a + b > c && a + c > b && b + c > a)
        return true;
    return false;
}

count3CanhTamGiac = (a, b) => {
    let count = 0;
    for (let c = 0; c <= 1000000; c++)
        if (isTamGiac(a, b, c))
            count++;
    return count;
}

console.log(count3CanhTamGiac(3, 4));
