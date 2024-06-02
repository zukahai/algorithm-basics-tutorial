/**
 * a = [3, 1, -5, 4, -3]
 * 
 * b[i] là tổng bé nhất của dãy liên tiếp kết thúc tại i
 * 
 * b[i] = b[i - 1] + a[i], nếu b[i - 1] < 0
 * b[i] = a[i], nếu b[i - 1] > 0
 * 
 * 
 *
 */

const a = [
    [3, 4, 5], 
    [2, 3, 4], 
    [3, 5, 6], 
    [3, 4, 6], 
    [10, 3, 4]
]

for (let i = 0; i < a.length; i++)
    for (let j = 0; j < a[0].length; j++)
        console.log(a[i][j]);

// minSumArr = (a) => {
//     let b = new Array(a.length).fill(0);
//     b[0] = a[0];
//     for (let i = 1; i < a.length; i++)
//         if (b[i - 1] < 0)
//             b[i] = b[i - 1] + a[i];
//         else
//             b[i] = a[i];
//     let min = b[0];
//     let csmin = 0;
//     for (let i = 1; i < b.length; i++)
//         if (b[i] < min) {
//             min = b[i];
//             csmin = i;
//         }

//     let ans = [];
//     while (min != 0) {
//         ans.push(a[csmin]);
//         min -= a[csmin];
//         csmin--;
//     }

//     let ans2 = [];
//     for (let i = ans.length - 1; i >= 0; i--)
//         ans2.push(ans[i]);

//     return ans2;
// }

// console.log(minSumArr(a));