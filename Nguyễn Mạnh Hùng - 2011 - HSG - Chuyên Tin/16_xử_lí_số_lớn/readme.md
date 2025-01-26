	a = 1000000000000000;
	b = 2000000000000000;
	c = 3000000000000000;

378639013


Cho a, b, c
Tinh (a + b) * c
Ket qua chia lay du cho 1000000007

a = 1000000000000000;
b = 2000000000000000;
c = 3000000000000000;
996913007



Tinh N! 
(1 <= N <= 10^6)
Ket qua chia lay du cho 1000000007

Vi du:

N = 5, ket qua la: 120
N = 20, ket qua la: 146326063
N = 1000000, Ket qua la: 641102369


Cho day a, gom n so nguyen
Tinh tich cac so trong day
1 <= N <= 10^6
1 <= a[i] <= 10^18

Ket qua chia lay du cho 1e9 + 7

Vi du:
5
1 2 3 4 5
Ket qua: 120

Vi du:
5
1000000000000000 1000000000000000 2 30000000000000000 123456789123456789
Ket qua: 765751441



Tinh a^b % m
m = 1000000007

1 <= a, b <= 10^18


5^4 = 5 * 5 * 5 * 5

a^b = a * a * a * a, b lan so a

s = 1;
for (int i = 1; i <= b; i++) {
	s *= a;
	s %= m;
}


5^8 = 5 * 5 * 5 * 5 * 5 * 5 * 5 * 5

5^8 = (5 * 5) * (5 * 5) * (5 * 5) * (5 * 5)
25^4

5^7 = 5 * 5 * 5 * 5 * 5 * 5 * 5

5^7 = 5 * 5^6

5^100 = 25^50 = (25 * 25) ^ 25

long long res = 1;
while (b > 0) {
	Neu b % 2 = 0 {
		a = a * a;
		b = b / 2;
		a %= m;
	} else {
		res *= a;
		res %= m;
		b--;
	}
}

cout << res;



