const propt = require('prompt-sync')();

var s = propt('Nhập S: ');

// Chữ thường a đến z từ 97 đến 122
// b[k] = 1, nếu ký tự k xuất hiện trong s.
// b = [1, 1, 0, 1, 0, 0, 0, 0, 0]
// s = "abda"

chuCXH = (s) => {
    b = new Array(123).fill(0);
    for (let i = 0; i < s.length; i++) {
        let viTri = s[i].charCodeAt(0);
        b[viTri] = 1;
    }
    let c = [];
    for (let i = 97; i <= 122; i++)
        if (b[i] == 0)
            c.push(String.fromCharCode(i));
    return c;
}

console.log(chuCXH(s));