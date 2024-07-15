// let a = [3, 2, 4, 5, 10, 4]

/*
    Cho một dãy a, tìm giá trị lớn nhất của a[i] % a[j]
    Ví dụ: a = [3, 2, 4, 5, 10, 4] => 5
    Ví dụ: a = [1, 2, 3, 4, 5, 6] => 5
    Ví dụ: a = [2, 3, 4, 2, 4, 4] => 3
*/

mod = (a) => {
    let max = 0;
    for (let i = 0; i < a.length; i++)
        for (let j = 0; j < a.length; j++)
            if (a[i] % a[j] > max)
                max = a[i] % a[j];
    return max;
}

console.log(mod([5, 6, 3, 6, 8, 6, 8]));
// 3 5 6 6 6 8 8 8