# Cấu trúc map trong C++

Cấu trúc `map` trong C++ là một cấu trúc dữ liệu dùng để lưu trữ các cặp key-value. Mỗi key chỉ xuất hiện một lần trong map, và mỗi key tương ứng với một value.

## Khai báo map

Để sử dụng cấu trúc map trong C++, chúng ta cần bao gồm thư viện `map`:

```cpp
#include <map>
```

Khai báo một map:

```cpp
map<long long>, int> m;
```

Trong đó, `long long` là kiểu dữ liệu của key, `int` là kiểu dữ liệu của value.

## Thêm phần tử vào map

Để thêm một phần tử vào map, chúng ta sử dụng như mảng

```cpp
m[key] = value;
```

## Duyệt qua các phần tử trong map

Để duyệt qua các phần tử trong map, chúng ta sử dụng vòng lặp `for`:

```cpp

for (auto x: m) {
    cout << x.first << " " << x.second << endl;
}
```

Trong đó, `x.first` là key, `x.second` là value.

## Ví dụ

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    map<long long, int> m;
    m[1] = 2;
    m[2] = 3;
    m[3] = 1;

    for (auto x: m) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}
```