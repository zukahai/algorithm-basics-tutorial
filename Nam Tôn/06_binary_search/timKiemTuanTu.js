let a = [1, 3, 2, 4, 2];
let x = 1;

// Tìm kiếm ví trị của x trong mảng A
timKiemTuanTu = (a, x) => {
    for (let i = 0; i < a.length; i++) {
        if (a[i] == x)
            return i;
    }
    return -1;
}

console.log(timKiemTuanTu(a, x));
