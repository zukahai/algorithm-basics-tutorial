s1: aabbb
s2: aba

map <char, int> mp1, mp2;


for (int i = 0; i < s1.size(); i++) {
	mp1[s1[i]]++;
}

for (int i = 0; i < s2.size(); i++) {
	mp2[s2[i]]++;
}

tong = 0;

for (int ch = 'a'; ch <= 'z'; ch++)
	tong += min(mp1[ch], mp2[ch]);
cout << tong;


c - b = b = a

n = 10
a b c
8 bộ 3 liên tiếp
6 bộ cách 2
4 bộ cách 3
2 bộ cách 4

N = 5
3 bộ cách 1
1 bộ cách 2

1 2 3
2 3 4
3 4 5
1 3 5




-----------------------------------------------
Cho các số từ 1 đến n.
Đếm xem có bao nhiêu bộ số (a, b, c)
a < b < c
Mà a, b, c là 3 cạnh của một tam giác

1 <= n <= 10^4

Ví dụ n = 5

Thì có 3 bộ
2 3 4
2 4 5
3 4 5


