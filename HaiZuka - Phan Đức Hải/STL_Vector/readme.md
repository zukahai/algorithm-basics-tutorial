# Các hàm thường dùng trong Vector C++

## 1. Khai báo vector
```cpp
#include <vector>
using namespace std;

vector<int> a; // Khai báo vector rỗng
vector<int> a(5); // Khai báo vector có 5 phần tử, mặc định là 0
vector<int> a(5, 1); // Khai báo vector có 5 phần tử, mặc định là 1
vector<int> a = {1, 2, 3}; // Khai báo vector có 3 phần tử, lần lượt là 1, 2, 3
vector<int> a = {1, 2, 3, 4, 5}; // Khai báo vector có 5 phần tử, lần lượt là 1, 2, 3, 4, 5

## 2. Hàm size()

Hàm size() dùng để trả về kích thước của vector.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    cout << a.size(); // In ra 5
    return 0;
}
```

## 3. Hàm resize()

Hàm resize() dùng để thay đổi kích thước của vector.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.resize(10); // Thay đổi kích thước của vector thành 10
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 3 4 5 0 0 0 0 0
    }
    return 0;
}
```

```cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.resize(10, 1); // Thay đổi kích thước của vector thành 10 và gán giá trị mặc định là 1
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 3 4 5 1 1 1 1 1
    }
    return 0;
}
```

## 4. Hàm push_back()

Hàm push_back() dùng để thêm phần tử vào cuối vector. Khi thêm phần tử, kích thước của vector sẽ tự động tăng lên 1.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.push_back(6); // Thêm phần tử 6 vào cuối vector
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 3 4 5 6
    }
    return 0;
}
```

## 5. Hàm pop_back()
Hàm pop_back() dùng để xóa phần tử cuối cùng của vector. Khi xóa phần tử, kích thước của vector sẽ tự động giảm đi 1.

```cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.pop_back(); // Xóa phần tử cuối cùng của vector
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 3 4
    }
    return 0;
}
```
## 6. Hàm insert()

Hàm insert() dùng để thêm phần tử vào vị trí bất kỳ trong vector. Khi thêm phần tử, kích thước của vector sẽ tự động tăng lên 1.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.insert(a.begin() + 2, 6); // Thêm phần tử 6 vào vị trí thứ 2 của vector
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 6 3 4 5
    }
    return 0;
}
```
## 7. Hàm erase()

Hàm erase() dùng để xóa phần tử tại vị trí bất kỳ trong vector. Khi xóa phần tử, kích thước của vector sẽ tự động giảm đi 1.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.erase(a.begin() + 2); // Xóa phần tử tại vị trí thứ 2 của vector
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 4 5
    }
    return 0;
}
```

## 8. Hàm clear()

Hàm clear() dùng để xóa tất cả các phần tử trong vector. Khi xóa tất cả các phần tử, kích thước của vector sẽ trở về 0.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    a.clear(); // Xóa tất cả các phần tử trong vector
   
    cout << a.size(); // In ra 0
    return 0;
}
```
## 9. Hàm sort()
Hàm sort() dùng để sắp xếp các phần tử trong vector theo thứ tự tăng dần.

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm sort

using namespace std;

int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    sort(a.begin(), a.end()); // Sắp xếp các phần tử trong vector theo thứ tự tăng dần
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 1 2 3 4 5
    }
    return 0;
}
```

## 10. Hàm reverse()

Hàm reverse() dùng để đảo ngược thứ tự các phần tử trong vector.

```cpp

#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm reverse

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    reverse(a.begin(), a.end()); // Đảo ngược thứ tự các phần tử trong vector
   
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " "; // In ra 5 4 3 2 1
    }
    return 0;
}
```

## 11. Hàm find()

Hàm find() dùng để tìm kiếm phần tử trong vector. Nếu tìm thấy, hàm sẽ trả về vị trí của phần tử đó, nếu không tìm thấy, hàm sẽ trả về a.end().

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm find

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    iterator it = find(a.begin(), a.end(), 3); // Tìm kiếm phần tử 3 trong vector
   
    if (it != a.end()) {
        cout << "Tim thay phan tu: " << *it; // In ra Tim thay phan tu: 3
    } else {
        cout << "Khong tim thay phan tu";
    }
    return 0;
}

## 12. Hàm max_element()
Hàm max_element() dùng để tìm phần tử lớn nhất trong vector.

```cpp
#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm max_element

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    iterator it = max_element(a.begin(), a.end()); // Tìm phần tử lớn nhất trong vector
   
    cout << "Phan tu lon nhat: " << *it; // In ra Phan tu lon nhat: 5
    return 0;
}   

```

## 13. Hàm min_element()

Hàm min_element() dùng để tìm phần tử nhỏ nhất trong vector.

```cpp

#include <iostream>
#include <vector>
#include <algorithm> // Thư viện chứa hàm min_element

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    iterator it = min_element(a.begin(), a.end()); // Tìm phần tử nhỏ nhất trong vector
   
    cout << "Phan tu nho nhat: " << *it; // In ra Phan tu nho nhat: 1
    return 0;
}
```
## 14. Hàm accumulate()
Hàm accumulate() dùng để tính tổng các phần tử trong vector.

```cpp
#include <iostream>
#include <vector>
#include <numeric> // Thư viện chứa hàm accumulate

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    int sum = accumulate(a.begin(), a.end(), 0); // Tính tổng các phần tử trong vector
   
    cout << "Tong cac phan tu: " << sum; // In ra Tong cac phan tu: 15
    return 0;
}
```

## 15. Hàm count()

Hàm count() dùng để đếm số lần xuất hiện của một phần tử trong vector.

```cpp
#include <iostream>

#include <vector>
#include <algorithm> // Thư viện chứa hàm count

using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 1};
    int count = count(a.begin(), a.end(), 1); // Đếm số lần xuất hiện của phần tử 1 trong vector
   
    cout << "So lan xuat hien cua phan tu 1: " << count; // In ra So lan xuat hien cua phan tu 1: 2
    return 0;
}
```
