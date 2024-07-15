const propt = require('prompt-sync')();

var n = parseInt(propt('Nhập N: '));

array = []

for (let i = 0; i < n; i++) {
    let temp = parseInt(propt(`a[${i}]: `, i));
    array.push(temp);
}

console.log(array);


// arrray = [1, 2, 1, 3, 1, 7, 2]
soLXHNN = (array) => {
    let slxhMax = -1;
    let valueMax = 0;

    for (let i = 0; i < array.length; i++) {
        let slxh = 0;
        for (let j = 0; j < array.length; j++)
            if (array[i] == array[j]) {
                slxh ++;
            }
        if (slxhMax < slxh) {
            slxhMax = slxh;
            valueMax = array[i];
        }
    }
    return {valueMax, slxhMax}
}
// array = [1000, 3, 2, 7, 1, 1, 100]
soLXHNN2 = (array) => {
    let max = array[0];
    for (let i = 1; i < array.length; i++)
        if (array[i] > max) {
            max = array[i];
        }

    b = new Array(max + 1).fill(0);
    // b[k]: số lần xuất hiện của số K trong array
    // Kết quả mong muốn
    // b[1] = 3
    // b[2] = 1
    // b[3] = 1
    // b[4] = 0
    for (let i = 0; i < array.length; i++) {
        // xử lí array[i]
        b[array[i]] ++;
    }

    let valueMax = 0;
    let slxhMax = -1;

    for (let i = 0; i < b.length; i++)
        if (b[i] > slxhMax) {
            slxhMax = b[i];
            valueMax = i;
        }
    return {valueMax, slxhMax};
}

console.log(soLXHNN2(array));

// Cho mảng A có N số tự nhiên
// Và mảng B có M số tự nhiên
// Đưa ra các phần tử trong B không xuất hiện trong mảng A
// Ví dụ:
// A = [2, 4, 6, 8]
// B = [1, 2, 3, 4, 5, 6]
// Output = [1, 3, 5]

// Gợi ý:
// c[k] = 1, nếu K xuất trong A
// c[k] = 0, nếu K không xuất trong A
// Kiểm tra nếu c[b[i]] = 0, thì b[i] không xuất trong A

// Cách tạo mảng c
// Max trong A, Tạo C có max + 1 phần tử 0
// for: gán tất cả c[a[i]] = 1.
// for: Kiểm tra c[b[i]] == 0
