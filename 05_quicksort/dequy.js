// Đệ quy là một kỹ thuật lập trình mà trong đó một hàm gọi chính nó.

// Tính tổng từ 1 đến N

// tinhTong = (n) => {
//     if (n == 1)
//         return 1;
//     return tinhTong(n - 1) + n;
// }

// tinhTong(n): Tổng từ 1 đến N

// tinhTong(5) = tinhTong(4) + 5;
//             = tinhTong(3) + 4 + 5
//             = tinhTong(2) + 3 + 4 + 5

// 1 1 2 3 5 8 13

// fibonaci(n): số fibanaci thứ n

// fibonaci = (n) => {
//     if (n == 1 || n == 2)
//         return 1;
//     return fibonaci(n - 1) + fibonaci(n - 2);
// }

// console.log(fibonaci(7));


// n! = 1*2*3*...*n
// giaiThua(n): Tính giai thừa N
// 5! = 4! * 5
// n! = (n - 1)! * n

// 3! / 3 = 2!
// 2! / 2 = 1!
// 1! / 1 = 0!

giaiThua = (n) => {
    if (n == 0)
        return 1;
    return giaiThua(n - 1) * n;
}

console.log(giaiThua(4));