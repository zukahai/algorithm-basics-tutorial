# Tràn số trong C++

Trong C++, khi thực hiện phép tính trên các số nguyên, nếu kết quả vượt quá giới hạn của kiểu dữ liệu đó, thì kết quả sẽ bị tràn số. Ví dụ, nếu bạn thực hiện phép cộng hai số nguyên `int` mà kết quả vượt quá giới hạn của kiểu `int`, thì kết quả sẽ bị tràn số.

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 2000000000;
    int b = 2000000000;
    int c = a + b;
    cout << c << endl; // Sai kết quả
    return 0;
}
```

Trong ví dụ trên, biến `c` sẽ chứa giá trị sai thay vì `4000000000` như bạn mong đợi. Điều này xảy ra vì giá trị `2000000000 + 2000000000` vượt quá giới hạn của kiểu `int`.

Để tránh tràn số, bạn có thể sử dụng kiểu dữ liệu `long long` thay vì `int`. Kiểu dữ liệu `long long` có giới hạn lớn hơn so với kiểu `int`, nên bạn có thể thực hiện các phép tính lớn mà không lo bị tràn số.

Về bản chất, máy tính sẽ tính toán kết quả của phép tính trên kiểu dữ liệu lớn nhất của các toán hạng. Ví dụ, nếu bạn thực hiện phép cộng hai số nguyên `int` mà kết quả vượt quá giới hạn của kiểu `int`, thì máy tính sẽ tính toán kết quả trên kiểu `long long` và sau đó gán kết quả cho biến kiểu `int`.

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a = 2000000000;
    int b = 2000000000;
    long long c = a + b;
    cout << c << endl; // Đúng kết quả
    return 0;
}
```

Hoặc bạn có thể sử dụng ép kiểu các toán hạng, để ép kiểu kết quả về kiểu dữ liệu mong muốn.

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 2000000000;
    int b = 2000000000;
    long long c = (long long)a + b;
    cout << c << endl; // Đúng kết quả
    return 0;
}
```

# Chia lấy dư trong C++

Cộng thức:

- `(a + b) % m = ((a % m) + (b % m)) % m`
- `(a - b) % m = ((a % m) - (b % m) + m) % m`
- `(a * b) % m = ((a % m) * (b % m)) % m`

Nếu phép toán chỉ có phép +, -, * thì ta có thể chia lấy dư sau mỗi phép toán để tránh tràn số.

Ví dụ tính n! % m:

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % m;
    }
    cout << result << endl;
    return 0;
}
```

