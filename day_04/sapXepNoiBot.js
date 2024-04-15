/**
 * So sánh tất cả các cặp số liền kề với nhau, nếu sai ví trị thì hoán vị
 */

let a = [5, 2, 7, 4, 4, -3];

sapXepNoiBot = (a) => {
    for (let i = a.length - 1; i >= 1; i--)
        for (let j = 0; j < i; j++)
            if (a[j] > a[j + 1]) {
                let temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    return a;
}

console.log(sapXepNoiBot(a));