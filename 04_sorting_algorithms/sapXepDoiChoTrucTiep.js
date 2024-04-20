/**
 * Mỗi lượt sẽ so sánh phần tử a[i] với tất cả phần tử còn lại, nếu sai vị trí thì hoán vị
 */

let a = [-1, 2, 7, 4, 4, 3];

sortDoiChoTrucTiep = (a) => {
    for (let i = 0; i < a.length - 1; i++) {
        for (let j = i + 1; j < a.length; j++)
            if (a[i] > a[j]) {
                let temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
    return a;
}

console.log(sortDoiChoTrucTiep(a));



