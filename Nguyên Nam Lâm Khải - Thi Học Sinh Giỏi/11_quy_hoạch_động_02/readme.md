Cho dãy a, tìm dãy con chứa tất cả là số chính phương liên tiêp dài nhất. Nếu không có dãy con nào thì in ra -1.

Ví dụ:
7
1 3 4 9 1 9 3
Kết quả là: 4 9 1 9

Ví dụ:
5
5 2 3 10 5
Kết quả là -1

bool isSquareNumber(n) {
    int x = sqrt(n);
    return x * x == n;
}

dp[k]: độ dài của dãy con chứa tất cả số chính phương liên tiếp dài nhất kết thúc tại vị trí k

dp[1]: độ dài của dãy con chứa tất cả số chính phương liên tiếp dài nhất kết thúc tại vị trí 1

a[1]
 
7 
a:  1 3 4 9 1 9 10
dp: 1 0 1 2 3 4 0
dp[1] = 1 nếu a[1] là scp, dp[1] = 0, nếu a[1] không là scp
dp[i] = dp[i - 1] + 1 Nếu a[i] là số chính phương
dp[i] = 0, Nếu a[i] không phải là scp



Cho dãy a, tìm dãy con chứa tất cả số chẵn và tăng dần dài nhất.
Nếu không có dãy con nào thì in ra -1.

Ví dụ:
9
1 2 4 0 6 10 12 9 5
Kết quả là: 
0 6 10 12

Ví dụ:
5
1 3 1 3 11
Kết quả là -1

dp[k]: độ dài của dãy con chứa tất cả số chẵn và tăng dần dài nhất
kết thúc tại k


9
a:  1 2 4 0 6 10 12 9 5

dp: 0 1 2 1 2 3  4  0 0

- dp[i] = 0
- dp[i] = dp[i - 1] + 1
- dp[i] = 1

Nếu a[i] chẵn và a[i] > a[i - 1]:
    dp[i] = dp[i - 1] + 1

else Nếu a[i] chẵn {
    dp[i] = 1;
}
else nếu a[i] lẻ:
    dp[i] = 0;



if (a[i] % 2 == 0) {
    if (a[i - 1] < a[i]) {
        dp[i] = dp[i - 1] + 1;
    } else{
        dp[i] = 1;
    }
} else {
    dp[i] = 0;
}


Nếu a[i] lẻ {
    dp[i] = 0;
} else{
    if (a[i] > a[i - 1]) {
        dp[i] = dp[i - 1] + 1;
    } else {
        dp[i] = 1;
    }
}

Cho dãy a. Tìm dãy con liên tiếp có tổng lớn nhất

7
1 -3 2 -1 5 -8 3

Kết quả là: 2 -1 5

5
-1 -3 -5 10 -2
Kết quả là: 10

dp[k]: Tổng của dãy con có tổng lớn nhất
Kết thúc tại k.


7
a:  1 -3 2 -1 5 -8 3
dp: 1 -2 2  1 6 -2 3

dp[i] = dp[i - 1] + a[i];
dp[i] = a[i]

dp[1] = a[1];
So sánh dp[i - 1] > 0
    dp[i] = dp[i - 1] + a[i];
else
    dp[i] = a[i];

7
a:  1 -3 2 -1 5 -8 3
dp: 1 -2 2  1 6 -2 3

max (tổng của dãy) = 6
csc = 5