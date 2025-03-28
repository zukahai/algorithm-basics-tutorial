const propt = require('prompt-sync')();

var n = parseInt(propt('Nhập N: '));

array = []

for (let i = 0; i < n; i++) {
    let temp = parseInt(propt(`a[${i}]: `, i));
    array.push(temp);
}

chia10 = (a, n) => {
    let flag = false; // false: k có, true: có
    for (let i = 0; i < n; i++)
        if (a[i] % 10 == 0)
            flag = true;
    return flag;
}

// Kiểm tra mảng a có phải là mảng chứa tất cả số > 0?
duong = (a, n) => {
    for (let i = 0; i < n; i++) {
        if (a[i] <= 0)
            return false;
    }
    return true;
}

// Kiểm tra 1 dãy a có phải chứa tất cả các số nằm trong khoảng 0 đến 10 không?

duong = (a, n) => {
    for (let i = 0; i < n; i++) {
        if (a[i] < 0 || a[i] > 10)
            return false;
    }
    return true;
}
