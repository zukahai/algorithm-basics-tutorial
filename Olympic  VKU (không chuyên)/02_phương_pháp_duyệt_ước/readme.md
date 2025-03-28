# Buổi 1: Phương pháp xử lí ước số

## Cách duyệt qua tất cả các ước số của một số nguyên dương 

### Cách 1: Duyệt qua tất cả các số từ 1 đến n

```cpp
for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
        // i là ước số của n
    }
}
```

**Đánh giá độ phức tạp của cách 1: O(n)**

### Cách 2: Duyệt qua tất cả các số từ 1 đến sqrt(n)

Nhập thấy rằng các ước số của `n` luôn đi theo cặp, nếu `x` là ước số của `n` thì `n/x` cũng là ước số của `n`. Vì vậy chúng ta chỉ cần duyệt qua các số từ 1 đến căn bậc 2 của `n` là đủ.

**Đánh giá độ phức tạp của cách 2: O(sqrt(n))**

```cpp

for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
        // i là ước số của n
        // n / i cũng là ước số của n
    }
}
```

Ở cách 2 chúng ta chỉ cần duyệt qua các số từ 1 đến căn bậc 2 của n, vì nếu n có một ước số i thì n/i cũng là ước số của n. Lưu ý nếu n là số chính phương thì nên kiểm tra xem i có bằng n/i không, hoặc cứ làm bình thường xong xử lí trường hợp nếu n là số chính phương sau.

### Ví dụ: Đếm số ước số của một số nguyên dương n

```cpp
#include <bits/stdc++.h>

using namespace std;


int main() {
    long long n;
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            dem += 2; // i và n/i đều là ước số của n
        }
    }
    
    double k = sqrt(n);
    if (k == (int)k) { // nếu n là số chính phương thì giảm đi 1
        dem--;
    }

    cout << dem;
}

```

## Kiểm tra một số có phải là số chính phương không

Một số nguyên dương n là số chính phương nếu và chỉ nếu căn bậc 2 của n là một số nguyên.

```cpp
bool isPerfectSquare(long long n) {
    double k = sqrt(n);
    return k == (int)k; // kiểm tra xem k có bằng với phần nguyên của k không
}
```

## Vector trong C++

Vector trong C++ là một kiểu dữ liệu dùng để lưu trữ một dãy các phần tử. Vector có thể thay đổi kích thước của mình trong quá trình chạy chương trình.

### Khai báo vector

```cpp
vector<int> v; // khai báo một vector chứa các số nguyên
vector<int> v(5); // khai báo một vector chứa 5 số nguyên, các phần tử có giá trị mặc định là 0
vector<int> v(5, 1); // khai báo một vector chứa 5 số nguyên, các phần tử có giá trị mặc định là 1

```

### Thêm một phần tử vào vector

```cpp
vector<int> v;
v.push_back(1); // thêm số 1 vào cuối vector
v.push_back(2); // thêm số 2 vào cuối vector
```

### Truy cập phần tử trong vector

```cpp
cout << v[0] << endl; // in ra phần tử đầu tiên của vector
cout << v[1] << endl; // in ra phần tử thứ 2 của vector
```

### Xoá phần tử cuối cùng của vector

```cpp
v.pop_back(); // xoá phần tử cuối cùng của vector
```

### Duyệt qua tất cả các phần tử của vector

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

## Áp dụng vector vào bài toán tìm ước số

Liệt kê tất cả các ước số của một số nguyên dương n. (n <= 10<sup>14</sup>)

```cpp

#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(long long n) {
    double k = sqrt(n);
    return k == (int)k;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> res;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { // i là ước số của n, n/i cũng là ước số của n
            res.push_back(i);
            res.push_back(n / i);
        }
    }

    if (isPerfectSquare(n)) { // nếu n là số chính phương thìres sẽ có 2 lần i = sqrt(n)
        res.pop_back(); // xoá phần tử cuối cùng của res
    }

    sort(res.begin(), res.end()); // sắp xếp tăng dần các ước số
    
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}

```


