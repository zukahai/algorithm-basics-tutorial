const propt = require('prompt-sync')();

var n = parseInt(propt('Nhập N: '));
// n = 1
let arr = [];

let c = 0;
while(n !== 0) {
    let p = n % 10;
    arr.push(p);
    n = Math.floor(n / 10);
    c++;
}

console.log("Count = ", c);
console.log(arr);

// Gộp mảng thành số
let b = arr[0];
for (let i = 1; i <= arr.length - 1; i++) {
    b = b * 10 + arr[i];
}
console.log(b);

// 12345

// Cho số tự nhiên N, tìm chữ số lớn nhất trong N
// N = 28472, chữ số lớn nhất là 8

// Max arr
let max = arr[0];
for (let i = 1; i < arr.length; i++)
    if (arr[i] > max) {
        max = arr[i];
    }
console.log(max);

// Cho 1 số N, đếm xem trong N có bao nhiêu chữ số 5
// n = 5535, kết quả là: 3


// Cho 1 số N, kiểm tra xem N có phải là số đối xứng không?
// Số đối xứng là số mà khi đảo ngược nó, thì vẫn được chính nó
// Ví dụ 1221, 5664665, 77, 484, 9,..

