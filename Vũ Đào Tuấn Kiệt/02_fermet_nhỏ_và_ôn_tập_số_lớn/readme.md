# Định lý fermer nhỏ

## Định lý

Nếu **m** là số nguyên tố và số nguyên **a** không chia hết cho **m** thì ta có:

**a<sup>m-1</sup> % m = 1 % m**

Nhân 2 vế với **a<sup>-1</sup> % m** ta được:

**a<sup>m-2</sup> % m = a<sup>-1</sup> % m**

## Công thức tổng quát:

a<sup>-1</sup> % m = a<sup>m-2</sup> % m

(1/a) % m = a<sup>m-2</sup> % m


## Ví dụ

((a * b) / c) % m = (a * b * (1/c)) % m

= (a * b * c<sup>-1</sup>) % 

= (a % m) * (b % m) * (c<sup>-1</sup> % m) % m

= (a % m) * (b % m) * (c<sup>m-2</sup> % m) % m


### Tổng 1 đến n

(n * (n + 1) / 2) % m 
= (n % m) * ((n + 1) % m) * (2<sup>-1</sup> % m) % m

= (n % m) * ((n + 1) % m) * (2<sup>m-2</sup> % m) % m
