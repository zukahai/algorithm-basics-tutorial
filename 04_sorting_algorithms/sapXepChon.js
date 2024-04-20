/**
 * O(n^2)
 * Mỗi lượt sẽ chọn phân tử nhỏ nhất và đổi chỗ nó về đúng vị trí
 */

let a = [-3, 2, 7, 4, 4, -5];

sapXepChon = (a) => {
    for (let i = 0; i < a.length - 1; i++) {
        let indexMin = i;
        for (let j = i + 1; j < a.length; j++) {
            if (a[indexMin] > a[j]) {
                indexMin = j;
            }
        }
        //Đổi chỗ a[i] và a[indexMin]
        let temp = a[i];
        a[i] = a[indexMin];
        a[indexMin] = temp;
    }
    return a;
}

console.log(sapXepChon(a));

