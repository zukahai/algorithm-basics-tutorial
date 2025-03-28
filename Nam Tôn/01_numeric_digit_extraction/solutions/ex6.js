const propt = require('prompt-sync')();

var n = parseInt(propt('Nhập N: '));
var x = parseInt(propt('Nhập X: '));

// Viết hàm kiểm tra xem X có xuất hiện trong K hay không?
// K = 12, x = 1

xuatHien = (k, x) => {
    while (k !== 0) {
        var p = k % 10;
        if (p == x)
            return true;
        k = Math.floor(k / 10);
    }
    return false;
}

let count = 0;
for (let i = 1; i <= n; i++)
    if (xuatHien(i, x) == true) {
        console.log(i);
        count++;
    }

console.log(count);
