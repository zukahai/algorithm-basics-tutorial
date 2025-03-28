m = 10^9 + 7

(a + b) % m = (a % m + b % m) % m

(a - b) % m = (a % m - b % m) % m

(a * b) % m = (a % m * b % m) % m

(a / b) % m = (a % m * b^-1 % m) % m

= (a % m * b^(m-2) % m) % m

a^b % m = (a % m)^b % m

a^2k = (a^2)^k
a^2k+1 = a * (a^2)^k