/**
 * a = [1, -2, 3, -1, 2]
 * b = [1, -1, 3, 2, 4]
 * 
 * b[i] là tổng lớn nhất của dãy liên tiếp kết thúc tại i
 * 
 * b[0] = a[0]
 * 
 * b[i] = b[i - 1] + a[i]
 * b[i] = a[i]
 */

const a = [1, -3, 4, 2, -3, 7, -9, 8]

maxSumArr = (a) => {
    let b = new Array(a.length).fill(0);
    b[0] = a[0];
    for (let i = 1; i < a.length; i++)
        if (b[i - 1] > 0)
            b[i] = b[i - 1] + a[i];
        else
            b[i] = a[i];
    let max = b[0];
    let csMax = 0;
    for (let i = 1; i < b.length; i++)
        if (b[i] > max) {
            max = b[i];
            csMax = i;
        }

    let ans = [];
    while (max != 0) {
        ans.push(a[csMax]);
        max -= a[csMax];
        csMax--;
    }

    let ans2 = [];
    for (let i = ans.length - 1; i >= 0; i--)
        ans2.push(ans[i]);

    return ans2;
}

console.log(maxSumArr(a));

