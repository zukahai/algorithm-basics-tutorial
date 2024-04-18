let a = [5, 2, 4, 2, 1, 0, 7]
//      [0, 2, 4, 2, 1, 5, 7]
//      [0, 2, 1, 2, 4, 5, 7]
//      [0, 1, 2, 2, 4, 5, 7]

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
console.log(a);