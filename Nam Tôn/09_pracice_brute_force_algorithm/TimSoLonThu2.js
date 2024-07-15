// [5, 6, 3, 6, 8, 6, 8, 10]
// [5, 6, 3, 6, 6]
// Tìm max
// Tìm giá trị lớn nhất những khác max

giaTriLonThu2 = (a) => {
    let max = a[0];
    for (let i = 1; i < a.length; i++)
        if (max < a[i])
            max = a[i];
    let max2 = -10000;
    for (let i = 0; i < a.length; i++)
        if (a[i] != max && a[i] > max2)
            max2 = a[i];
    return max2;
}

console.log(giaTriLonThu2([5, 6, 3, 6, 8, 60, 80, 10]));