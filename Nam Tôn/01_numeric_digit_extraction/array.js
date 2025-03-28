const propt = require('prompt-sync')();

var n = parseInt(propt('Nhập N: '));

array = []

for (let i = 0; i < n; i++) {
    let temp = parseInt(propt(`a[${i}]: `, i));
    array.push(temp);
}

console.log(array);