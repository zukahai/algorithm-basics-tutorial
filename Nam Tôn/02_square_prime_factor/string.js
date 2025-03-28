const propt = require('prompt-sync')();

var s = propt('Nhập chuỗi: ');
s = s.split('');

// // console.log(s);

// // let sum = 0;
// // for (let i = 0; i < s.length; i++)
// //     if (s[i] >= '0' && s[i] <= '9')
// //         sum += (s[i] - '0'); // '9' !== 9
// //     // '('    ==  'o'

// // console.log(sum);
// //ASCII

// //s = 123hg4

// // hai2A -> HAI2A
for (let i = 0; i < s.length; i++)
    if (s[i] >= 'a' && s[i] <= 'z') {
        let charCode = s[i].charCodeAt(0);
        charCode -= 32;
        s[i] = String.fromCharCode(charCode);
    }
s = s.join('');
console.log(s);

