/**
 * Cho một dãy số nguyên a
 * Tìm độ dài của dãy con tăng liên tiếp dài nhất
 * Ví dụ: a = [0, 5, 1, 3, 4, 5, 2, 3, 9]
 * 
 * b[k]: độ dài của dài con tăng liên tiếp dài nhất, kết thúc tại k
 * b[k] = b[k - 1] + 1 nếu a[k] > a[k - 1]
 * b[k] = 1 nếu ngược lại
 * 
 * b[0] = 1
 * b[1] = 2 // b[0] + 1
 * b[2] = 1
 * b[3] = 2
 * b[4] = 3
 * b[5] = 4
 * b[6] = 1
 * b[7] = 2
 * b[8] = 3
 */

qhd = (a) => {
    let b = new Array(a.length);
    b[0] = 1;
    for (let i = 1; i < b.length; i++)
        if (a[i] > a[i - 1])
            b[i] = b[i - 1] + 1;
        else
            b[i] = 1;
    console.log(b);
    let max = b[0];
    let indexMax = 0;
    for (let i = 1; i < b.length; i++)
        if (max < b[i]) {
            max = b[i];
            indexMax = i;
        }
    let ans = [];
    for (let i = indexMax - max + 1; i <= indexMax; i++)
        ans.push(a[i]);
    return ans;
}

console.log(qhd([0, 5, 1, 3, 4, 5, 10, 3, 9]));

// vecCan = (a) => {
//     let max = 0;
//     for (let i = 0; i < a.length; i++) {
//         let count = 1;
//         for (let j = i; j < a.length - 1; j++)
//             if (a[j] < a[j + 1])
//                 count++;
//             else
//                 break;
//         if (max < count)
//             max = count;
//     }
//     return max;    
// }

// console.log(vecCan([0, 5, 1, 3, 4, 5, 10, 3, 9]));