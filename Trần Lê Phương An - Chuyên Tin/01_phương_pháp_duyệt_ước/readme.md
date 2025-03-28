3
6 12 5

6 12 5 3 2 1 4


6 12 5 3 2 1 

--------------
1
20

20 10 5 4 2 1

Nếu A là bội của B,
Thì các ước của B, cũng là ước của A

--------------------------------------------------

3
6 12 5

set: 6 12 5 1 2 3 4
queue: 6 12 5

current
6: 1 2 3 6
12: 1 2 3 4 6 12
5: 1 5

---------------------------------------------
Cho số N (1 <= n <= 10^9)
In ra danh sách ước của N:
Ví dụ: N = 6, kết quả là: 1 2 3 6

for (int i = 1; i <= n; i++) {
    if (N % i == 0) {
        cout << i << " ";
    }
}

1 giây: C++ có thể thực hiện được 10^8 phép tính

long long N;
cin >> N;

set<long long> s;

for (long long i = 1; i * i <= N; i++) {
    if (N % i == 0) {
        s.insert(i);
        s.insert(N / i);
    }
}



