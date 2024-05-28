/**
 * Cho một dãy a gồm các số nguyên.
 * Một con thỏ xuất phát từ a[0]
 * Mỗi bước con thỏ sẽ nhảy 1, 2 hoặc 3 bước
 * Nhảy qua ô nào thì con thỏ sẽ nhận được từng đấy điểm
 * Tìm cách nhảy tốt nhất để con thỏ được nhiều điểm nhất.
 * 
 * a = [2, 4, 3, -2, -6, 7]
 * b = [2, 6, 9,  7,  3, 14]
 * 
 * b[i]: Tổng số điểm lớn nhất mà thỏ có được khi nhảy tới vị trí i
 * 
 * b[0] = a[0]
 * b[1] = a[0] + a[1]
 * i >= 2
 * b[i] = max (b[i - 1], b[i - 2]) + a[i]
 */
const a = [2, 4, 3, -2, -6, 7]
conTho = (a) => {
    let b = new Array(a.length).fill(0);
    b[0] = a[0];
    b[1] = a[0] + a[1];
    for (let i = 2; i < a.length; i++)
        if (b[i - 1] > b[i - 2])
            b[i] = b[i - 1] + a[i];
        else
            b[i] = b[i - 2] + a[i];
    console.log(b);
}

conTho(a)