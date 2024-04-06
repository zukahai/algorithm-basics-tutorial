const propt = require('prompt-sync')();

var s = propt('Nhập chuỗi: ');

console.log(s);

let sum = 0;
for (let i = 0 ; i < s.length; i++) {
    if (s[i] >= '0' && s[i] <= '9') {
        sum += (s[i] - '0');
    }
}

console.log(sum);