/* Cho 1 mảng gồm N số nguyên,
 Tìm và đưa ra 2 phần tử có tích lớn nhất trong mảng.

 Ví dụ: a = [3, 2, 4, 2, 6], thì 2 số có tích lớn nhất là 4 và 6
 Đưa ra tích là 18

 Ví dụ a = [5, -5, 0, 2, -4, -40]

*/
let a = [5, -5, 0, 2, -4, -30, 1000];

tichLonNhat = (a) => {
    let max = -1000000000000;
    for (let i = 0; i < a.length - 1; i++)
        for (let j = i + 1; j < a.length; j++)
            if (a[i] * a[j] > max)
                max = a[i] * a[j];
    return max;
}

quickSort = (left, right) => {
    // Tìm phẩn tử chính giữa
    let indexMid = Math.floor((left + right) / 2);
    let mid = a[indexMid];

    let l = left;
    let r = right;

    while (l < r) {
        // Tìm a[l] sai vị trí
        while (a[l] < mid)
            l++;
        // Tìm a[r] sai vị trí
        while(a[r] > mid)
            r--;
        
        // Hoán vị a[l], a[r]
        let temp = a[l];
        a[l] = a[r];
        a[r] = temp;

        l++;
        r--;
    }

    if (l < right) // Kiểm tra xem khoảng [l, right] có nhiều hơn 1 phần tử không
        quickSort(l, right);
    if (r > left) // Kiểm tra xem khoảng [left, r] có nhiều hơn 1 phần tử không
        quickSort(left, r);
}

quickSort(0, a.length - 1);

if (a[0] * a[1] > a[a.length - 2] * a[a.length - 1])
    console.log(a[0] * a[1]);
else
    console.log(a[a.length - 2] * a[a.length - 1]);