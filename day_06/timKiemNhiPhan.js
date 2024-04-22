let a = [1, 2, 4, 7, 9, 10, 20]; // O(logN)
let x = 2;

// Tìm kiếm ví trị của x trong mảng A
timKiemNhiPhan = (a, x) => {
    let left = 0;
    let right = a.length - 1;
    while(left <= right) {
        let midIndex = Math.floor((left + right) / 2);
        let mid = a[midIndex];
        if (mid == x)
            return midIndex;
        else if (mid > x) {
            right = midIndex - 1;
        } else {
            left = midIndex + 1;
        }
    }
    return -1;
}

console.log(timKiemNhiPhan(a, x));
