/**
 * Đưa ra dãy con tăng dài nhất
 * a = [1, 0, 2, 4, 3, 4, 8, 3, -3] => [0, 2, 3, 4, 8]
 * 
 * v[i]: Chính là vị trí của số trước khi nhảy qua i // truy vết
 * 
 * b[i]: Độ dài của dài con tăng dài nhất kết thúc tại i
 * b[0] = 1, v[0] = -1
 * b[1] = 1, v[1] = -1
 * b[2] = 2, v[2] = 0
 * b[3] = 3, v[3] = 2
 * b[4] = 3, v[4] = 2
 * b[5] = 4, v[5] = 4
 * b[6] = 5, v[6] = 5
 * b[7] = 3, b[7] = 2
 * b[8] = 1, v[8] = -1
 * // Kết quả: chỉ số 6 -> push a[6]
 * // gọi v[6] = 5 -> push a[5]
 * // gọi v[5] = 4 -> push a[4]
 * // gọi v[4] = 2 -> push a[2]
 * // gọi v[2] = 0 -> push a[0]
 * // gọi v[0] = -1
 * 
 * b[7] = 3
 * v[7] = 2
 * Nối b[0]: b[0] + 1 = 2
 * Nối b[1]: b[1] + 1 = 2
 * Nối b[2]: b[2] + 1 = 3
 * 
 * b[6] = 5
 * v[6] = 5
   Nối b[0]: b[0] + 1 = 2
 * Nối b[1]: b[1] + 1 = 2
 * Nối b[2]: b[2] + 1 = 3
 * Nối b[3]: b[3] + 1 = 4
 * Nối b[4]: b[4] + 1 = 4
 * Nối b[5]: b[5] + 1 = 5
 * 
 * b[5] = 4
 * v[5] = 4
 * Nối b[0]: 1 + 1 = 2
 * Nối b[1]: 1 + 1 = 2
 * Nối b[2]: 2 + 1 = 3
 * Nối b[4]: 3 + 1 = 4
 * 
 * b[3] = 3
 * v[3] = 2
 * Nối b[0]: 1 + 1 = 2
 * Nối b[1]: 1 + 1 = 2
 * Nối b[2]: 2 + 1 = 3
 * 
 * b[4] = 3
 * v[4] = 2
 * Nối b[0]: 1 + 1 = 2
 * Nối b[1]: 1 + 1 = 2
 * Nối b[2]: 2 + 1 = 3
 * 
 * 
 * b[i] Có thể nối với tất cả b[j], j < i và a[i] > a[j]
 * b[i] = b[j] + 1
 * Tìm max của các b[j] + 1
 * 
 *
 */
const a = [1, 0, 2, 4, 3, 4, 8, 3, -3]

dayTang = (a) => {
    let b = new Array(a.length).fill(0);
    let v = new Array(a.length).fill(-1);
    b[0] = 1;
    for (let i = 1; i < a.length; i++) {
        let max = -1;
        let csMax = 0;
        for (let j = 0; j <= i - 1; j++) {
            if (a[i] > a[j]) {
                if (b[j] + 1 > max) {
                    max = b[j] + 1;
                    csMax = j;
                }
            }
        }
        if (max == -1) {
            v[i] = -1;
            b[i] = 1;
        }
        else {
            v[i] = csMax;
            b[i] = max;
        }
    }

    let max = -1;
    let csMax = 0;
    for (let i = 0; i < a.length; i++) {
        if (max < b[i]) {
            max = b[i];
            csMax = i;
        }
    }

    console.log(max, csMax);

    let ans = [];

    while (csMax != -1) {
        ans.push(a[csMax]);
        csMax = v[csMax];
    }

    let ans2 = [];
    for (let i = ans.length - 1; i >= 0; i--)
        ans2.push(ans[i]);

    return ans2;
}

//a = [1, 0, 2, 4, 3, 4, 8, 3, -3] => [0, 2, 3, 4, 8]

console.log(dayTang(a));