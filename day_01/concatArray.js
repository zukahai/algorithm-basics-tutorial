let a = [1, 2, 3];
const b = [7, 8, 9, 10];

let c = new Array(a.length + b.length);

for (let i = 0; i < a.length; i++)
    c[i] = a[i];

for (let i = 0; i < b.length; i++)
    c[a.length + i] = b[i]
// c[3] = b[0]
// c[4] = b[1]
// c[5] = b[2]
// c[6] = b[3]
// 0, 1, 2,... a.leng-1, 
console.log(c);