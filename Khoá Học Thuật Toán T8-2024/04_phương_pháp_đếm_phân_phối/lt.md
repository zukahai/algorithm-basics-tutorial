## Đếm phân phối, mảng đánh dấu

Cách tiếp cận này sử dụng một mảng đánh dấu để đếm số lần xuất hiện của mỗi phần tử trong dãy số.

**b[k]**: Số lần xuất hiện của phần tử k trong dãy số.

Ban đầu, ta khởi tạo mảng đánh dấu b với tất cả các phần tử bằng 0.

Sau đó, ta duyệt qua từng phần tử trong dãy số và tăng giá trị tương ứng trong mảng đánh dấu lên 1.

Cuối cùng, ta duyệt qua mảng đánh dấu và in ra các phần tử có số lần xuất hiện khác 0.

### Bài 1: Đếm tần suất xuất hiện của các phần tử trong dãy số

Cho một dãy số nguyên, hãy đếm số lần xuất hiện của mỗi phần tử trong dãy số đó.

**Đầu vào**:

- Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>6</sup>).

**Đầu ra**:

- In ra số lần xuất hiện của mỗi phần tử trong dãy số đó.

**Ví dụ**:

**Ví dụ 1**:

| Đầu vào | Đầu ra |
|:---|:---|
| 6 <br> 1 2 10 3 1 10 | 1 2 <br> 2 1 <br> 3 1 <br> 10 2 |

**Ví dụ 2**:

| Đầu vào | Đầu ra |
|:---|:---|
| 5 <br> 1 2 2 4 4 | 1 1 <br> 2 2 <br> 4 2 |

```cpp

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[1000000] = {0};
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (int i = 0; i < 1000000; i++) {
        if (b[i] != 0) {
            cout << i << " " << b[i] << endl;
        }
    }
    return 0;
}
```



