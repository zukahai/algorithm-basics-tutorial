Cho dãy a gồm n phần tử, mỗi phần tử là một số nguyên. Tìm số có nhiều ước số chính phương nhất trong dãy a. Nếu có nhiều số thỏa mãn thì chọn số nhỏ nhất.
(1 ≤ n ≤ 10^6, 1 ≤ a[i] ≤ 10^6)

Ví dụ:
6
5 8 10 36 15 40
Kết quả: 36

b[x]: số lượng ước số chính phương của x

Tìm số lớn nhất trong b[a[i]]









--------------------------------------------------
Cho dãy a gồm n phần tử, mỗi phần tử là một số nguyên. Bạn có thể thay đổi đúng một phần tử của dãy a thành một số nguyên bất kỳ. Hãy tìm cách thay đổi sao cho ước chung lớn nhất của tất cả các phần tử trong dãy a là lớn nhất có thể.
(1 ≤ n ≤ 10^6, 1 ≤ a[i] ≤ 10^6)

Ví dụ 1:

5
10 7 10 15 20
Kết quả: 5
Có thể thay đổi số 7 thành 5 để ước chung lớn nhất của dãy a là 5.

Ví dụ 2:

5
1 2 3 4 5
Kết quả: 1

Ví dụ 2:

5
10 15 80 100 20

Ví dụ 2:

5
10 10 80 100 20
Kết quả: 10

Tại sao không phải là 50

Tìm số x lớn nhất, có n - 1 số chia hết cho x

b[x]: số lượng số chia hết cho x trong dãy a

b[x] = dem[x] + dem[2*x] + dem[3*x] + ...

int maxArr = a[1];
for (int i = 2; i <= n; i++)
    maxArr = max(maxArr, a[i]);

for (int i = 1; i <= n; i++)
    dem[a[i]]++;

for (int i = 1; i <= maxArr; i++) {
    for (int j = i; j <= maxArr; j += i) {
        b[i] += dem[j];
    }
}

for (int i = maxArr; i >= 1; i--) {
    if (b[i] >= n - 1) {
        cout << i;
        return 0;
    }
}

-----------------------------------------------

Cho dãy a gồm n phần tử, mỗi phần tử là một số nguyên. Bạn có thể thay đổi đúng 2 phần tử của dãy a thành số nguyên bất kỳ. Hãy tìm cách thay đổi sao cho ước chung lớn nhất của tất cả các phần tử trong dãy a là một số nguyên tố lớn nhất có thể. Nếu không thể thay đổi để ước chung lớn nhất là số nguyên tố thì in ra -1.

(1 ≤ n ≤ 10^6, 1 ≤ a[i] ≤ 10^6)

Ví dụ 1:

5
10 14 50 21 28
Kết quả: 7

Ví dụ 2:

5
2 5 10 4 9
Kết quả: 2

Ví dụ 3:

5
1 2 3 4 5
Kết quả: -1

Ví dụ 4:
5
10 10 10 10 10
Kết quả: 5

Ví dụ 5:
5
7 7 7 14 14
Kết quả: 7

--------------------------------------------

Cho dãy a gồm n phần tử, mỗi phần tử là một số nguyên. Bạn có thể thay đổi đúng 2 phần tử của dãy a thành số nguyên bất kỳ. Hãy tìm cách thay đổi sao cho ước chung lớn nhất của tất cả các phần tử trong dãy a là một số nguyên tố hoặc là một số chính phương. Tìm số nguyên tố hoặc số chính phương lớn nhất có thể. 

(1 ≤ n ≤ 10^6, 1 ≤ a[i] ≤ 10^7)

Ví dụ 1:
4
3 6 4 20
Kết quả: 4

Ví dụ 2:
5
10 14 50 21 28
Kết quả: 7

Ví dụ 3:
5
1 2 3 4 5
Kết quả: 1
