/**
 * Mỗi lượt sẽ chèn các phần tử vào đúng vị trí trong mảng đã sắp xếp.
 * Có sẵn 1 mảng đã sắp xếp, sau đó lần lượt chèn các phần tử vào, sao cho sau khi chèn mảng vẫn là mảng tăng dần
 * 
 */

let a = [4, 1, 5, 2, 4, 3];

// b = [1, 2, 3, 5, 0]
sapXepChen = (a) => {
    let b = [];
    for (let i = 0; i < a.length; i++) {
        // Tìm vị trí chèn
        let indexChen = 0;
        for (let j = b.length - 1; j >= 0; j--) {
            if (a[i] >= b[j]) {
                indexChen = j + 1;
                break;
            }
        }

        b.push(0);
        for (let j = b.length - 1; j >= indexChen + 1; j--) {
            b[j] = b[j - 1];
        }
        b[indexChen] = a[i];
    }
    return b;
}

console.log(sapXepChen(a));

