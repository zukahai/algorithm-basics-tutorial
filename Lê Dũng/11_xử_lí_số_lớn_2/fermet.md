# Fermet nhỏ

Nếu **m** là số nguyên tố và **a** không chia hết cho **m** thì:

a<sup>m-1</sup> % m = 1 % m

Nhân cả 2 về với a<sup>-1</sup> % m ta được:

a<sup>m-2</sup> % m = a<sup>-1</sup> % m

-------------------------------

((a * b) / c) % m

= (a * b * c<sup>-1</sup>) % m

= ((a % m) * (b % m) * (c<sup>-1</sup> % m)) % m

= ((a % m) * (b % m) * (c<sup>m-2</sup> % m)) % m
