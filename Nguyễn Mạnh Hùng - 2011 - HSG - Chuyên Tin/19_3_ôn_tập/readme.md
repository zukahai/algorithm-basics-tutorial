Cho 1 dãy số a gồm n số nguyên.
Đếm số lượng số nguyên tố trong dãy a

(1 ≤ n ≤ 10^6, -10^9 ≤ a[i] ≤ 10^7)

Ví dụ:

5
-10 2 7 4 11

Kết quả là: 3

---------------------------------
Cho 1 dãy số a gồm n số nguyên đã sắp xếp tăng dần.
Và một số nguyên x.
Tìm vị trí của phần tử đầu tiên và cuối cùng trong dãy a mà có giá trị bằng x.

(1 ≤ n ≤ 10^6, -10^9 ≤ a[i], x ≤ 10^7)

Dữ liệu:
- Dòng đầu tiên chứa 2 số nguyên n
- Dòng thứ 2 chứa n số nguyên a[1], a[2], ..., a[n]
- Dòng thứ 3 chứa số nguyên t (1 ≤ t ≤ 10^5)
- t dòng tiếp theo chứa t số nguyên x

Kết quả:
- In ra t dòng, mỗi dòng chứa 2 số nguyên là vị trí đầu tiên và cuối cùng của x trong dãy a. Nếu không có x trong dãy a thì in ra -1 -1
Ví dụ:

7
1 1 2 2 2 8
3
2
1
10

Kết quả là:
3 5
1 2
-1 -1


int l = giới hạn trái, r = giới hạn phải;
while (l <= r) {
    int mid = (l + r) / 2;
    if (a[mid] == x) {
        //
    } 
    else if (a[mid] < x) {
        //
    } 
    else {
        //
    }
}


---------------------------------

Cho 1 dãy số a gồm n số nguyên dương tăng dần.
Và một số nguyên x.

Tìm số cặp phần tử a[i] * a[j] >= x với i < j

(1 ≤ n ≤ 10^6, 1 ≤ a[i], x ≤ 10^7)

Ví dụ:

5 12
1 2 3 4 5

Kết quả là: 8
Có các căp (1, 2), (1, 3), (1, 4), (1, 5), (2, 3), (2, 4), (2, 5), (3, 4)