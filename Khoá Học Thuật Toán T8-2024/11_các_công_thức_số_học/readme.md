# Các công thức toán sử dụng nhiều trong lập trình

## Công thức tổng luỹ thừa từ 1 đến n

### Tổng từ 1 đến n

$$S_n = 1 + 2 + 3 + ... + n = \frac{n(n+1)}{2}$$

### Tổng bình phương từ 1 đến n

$$S_n = 1^2 + 2^2 + 3^2 + ... + n^2 = \frac{n(n+1)(2n+1)}{6}$$

### Tổng lập phương từ 1 đến n

$$S_n = 1^3 + 2^3 + 3^3 + ... + n^3 = \left(\frac{n(n+1)}{2}\right)^2$$

### Tổng luỹ thừa bậc 4 từ 1 đến n

$$S_n = 1^4 + 2^4 + 3^4 + ... + n^4 = \frac{n(n+1)(2n+1)(3n^2+3n-1)}{30}$$

### Tổng luỹ thừa bậc 5 từ 1 đến n

$$S_n = 1^5 + 2^5 + 3^5 + ... + n^5 = \frac{n^2(n+1)^2(2n^2+2n-1)}{12}$$

### Tổng luỹ thừa bậc 6 từ 1 đến n

$$S_n = 1^6 + 2^6 + 3^6 + ... + n^6 = \frac{n(n+1)(2n+1)(3n^2+3n-1)(3n^3+6n^2-3n-1)}{42}$$

### Tổng luỹ thừa bậc 7 từ 1 đến n

$$S_n = 1^7 + 2^7 + 3^7 + ... + n^7 = \frac{n^2(n+1)^2(2n^2+2n-1)(3n^4+6n^3-3n^2-n)}{24}$$

### Tổng luỹ thừa bậc 8 từ 1 đến n

$$S_n = 1^8 + 2^8 + 3^8 + ... + n^8 = \frac{n(n+1)(2n+1)(3n^2+3n-1)(4n^4+8n^3+2n^2-2n-1)}{90}$$

### Tổng luỹ thừa bậc 9 từ 1 đến n

$$S_n = 1^9 + 2^9 + 3^9 + ... + n^9 = \frac{n^2(n+1)^2(2n^2+2n-1)(3n^4+6n^3-3n^2-n)(4n^5+10n^4+4n^3-n^2-2n-1)}{20}$$

### Tổng luỹ thừa bậc 10 từ 1 đến n

$$S_n = 1^{10} + 2^{10} + 3^{10} + ... + n^{10} = \frac{n(n+1)(2n+1)(3n^2+3n-1)(4n^4+8n^3+2n^2-2n-1)(5n^5+15n^4+5n^3-n^2-3n-1)}{66}$$

## Công thức luỹ thừa từ a đến b

Với f(n): là tổng luỹ thừa từ 1 đến n thì:

$$f(b) - f(a-1) = a^k + (a+1)^k + ... + b^k$$

Ví dụ: Tính tổng bình phương từ 5 đến 10

$$f(10) - f(4) = 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2$$

Code C++

```cpp

#include <iostream>

using namespace std;

long long f(long long n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    long long a = 5, b = 10;
    cout << f(b) - f(a - 1) << endl;
}

```

## Công thức tổng cấp số cộng

$$S_n = a + (a + d) + (a + 2d) + ... + (a + (n-1)d) = \frac{n(2a + (n-1)d)}{2}$$

Với:

- $S_n$: tổng cần tính
- $a$: phần tử đầu tiên
- $d$: công sai

## Công thức tổng cấp số nhân

$$S_n = a + ar + ar^2 + ... + ar^{n-1} = \frac{a(1 - r^n)}{1 - r}$$

Với:

- $S_n$: tổng cần tính
- $a$: phần tử đầu tiên
- $r$: công bội


