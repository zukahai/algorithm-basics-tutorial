/* Cho dãy số a, Tìm độ dài dãy con có chỉ số (vị trí) chẵn liên tiếp tăng dần dài nhất
 a = [3, 2, 10, 2, 3, 5, 6, 3, 8, 2, 10, 2, 1], 3, 10, 3, 6, 8, 10, 1
 Kết quả là 4, [3, 6, 8, 10]

Nếu i lẻ:
    b[i] = 0;
Nếu i chẵn:
    Nếu a[i] > a[i - 2]:
        b[i] = b[i - 2] + 1;
    Ngược lại:
        b[i] = 1;
*/
const a = [3, 2, 10, 2, 3, 5, 6, 3, 8, 2, 10, 2, 1];
dayTang = (a) => {
    b = new Array(a.length).fill(0);
    b[0] = 1;
    for (let i = 2; i < a.length; i++)
        if (i % 2 == 1)
            b[i] = 0;
        else {
            if (a[i] > a[i - 2])
                b[i] = b[i - 2] + 1;
            else
                b[i] = 1;
        }
    console.log(b);

}
dayTang(a)

