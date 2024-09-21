# Chữ số cuối cùng

Cho 2 số tự nhiên **a** và **b**. In ra chữ số cuối cùng của a * b

**Đầu vào**:

- Một dòng chứa 2 số tự nhiên **a** (a ≤ **a**, **b** ≤ 10<sup>100</sup>)

**Đầu ra**:

- In ra chữ số cuối cùng của a * b

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 12 3 | 6 |

**Giải thích**:

12 * 3 = 36, chữ số cuối cùng là 6

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 34 65 | 0 |

**Giải thích**:

34 * 65 = 2210, chữ số cuối cùng là 0

**Bài giải**

- Đầu vào khá lớn nên ta cần sử dụng kiểu dữ liệu `string` để lưu số, 2 số ở cạnh nhau cách nhau bởi dấu cách nên ta sẽ đọc bằng hàm `cin` và lưu vào 2 biến `a` và `b` kiểu `string`

- Ta sẽ lấy chữ số cuối cùng của `a` và `b` bằng cách lấy phần tử cuối cùng của chuỗi `a` và `b` là `a.back()` và `b.back()` hoặc `a[a.size() - 1]` và `b[b.size() - 1]`

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    cout << (a.back() - '0') * (b.back() - '0') % 10;
    return 0;
}
```




# Danh sách ước chung

Cho 2 số tự nhiên **a** và **b**. In ra danh sách ước chung của **a** và **b** theo thứ tự tăng dần.

*Ước chung của 2 số tự nhiên **a** và **b** là số tự nhiên mà cả 2 số đều chia hết cho nó.*

**Đầu vào**:

- Một dòng chứa 2 số tự nhiên **a** và **b** (1 ≤ **a**, **b** ≤ 10<sup>14</sup>)

**Đầu ra**:

- In ra danh sách ước chung của **a** và **b** theo thứ tự tăng dần, mỗi ước cách nhau bởi dấu cách

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 12 3 | 1 3 |

**Giải thích**:

Ước chung của 12 và 3 là 1 và 3

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 8 12 | 1 2 4 |

**Bài giải**

- Có thể liệt kê ra danh sách các ước của a, nếu ước của a là ước của b thì in ra
- Ví dụ a = 12, b = 8, ước của 12 là 1, 2, 3, 4, 6, 12, ta thấy trong danh đó 8 chia hết cho 1, 2, 4 nên in ra 1 2 4

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    vector<long long> res;
    for (long long i = 1; i * i <= a; i++) {
        if (a % i == 0) {
            res.push_back(i);
            if (a / i != i) {
                res.push_back(a / i);
            }
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); i++) {
        if (b % res[i] == 0) {
            cout << res[i] << " ";
        }
    }
    return 0;
}
```

# Số chẵn xuất hiện nhiều nhất

Cho dãy số tự nhiên gồm **n** số. Hãy tìm số chẵn xuất hiện nhiều nhất trong dãy số đó. Nếu có nhiều số chẵn xuất hiện nhiều nhất thì in ra số nhỏ nhất. Nếu không có số chẵn nào thì in ra -1.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>5</sup>)

- Dòng thứ 2 chứa **n** số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

**Đầu ra**:

- In ra số chẵn xuất hiện nhiều nhất trong dãy số đó. Nếu không có số chẵn nào thì in ra -1.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 2 3 4 | 2 |

**Giải thích**:

Số chẵn xuất hiện nhiều nhất là 2

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 3 5 7 9 | -1 |

**Bài giải**

- Dùng unordered_map để đếm số lần xuất hiện của các số chẵn trong dãy số, nhắc lại unordered_map là một cấu trúc dữ liệu giống như map nhưng không sắp xếp các phần tử theo thứ tự tăng dần của key.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            mp[a[i]]++;
        }
    }

    int res = -1;
    int maxCount = 0;
    for (auto it : mp) {
        if (it.second > maxCount) {
            maxCount = it.second;
            res = it.first;
        }
    }
    cout << res;
    return 0;
}
```

# Phẩn tử gấp đôi

Cho dãy số tự nhiên gồm **n** số. Đếm xem có bao nhiêu cặp chỉ số khác nhau (i, j) sao cho a<sub>i</sub> = 2 * a<sub>j</sub>.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>5</sup>)

- Dòng thứ 2 chứa **n** số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>)

**Đầu ra**:

- In ra số cặp chỉ số khác nhau (i, j) sao cho a<sub>i</sub> = 2 * a<sub>j</sub>

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 2 |

**Giải thích**:

Có 2 cặp chỉ số khác nhau (i, j) sao cho a<sub>i</sub> = 2 * a<sub>j</sub> là (1, 0), (3, 1)

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 6 | 3 |

**Giải thích**:

Có 3 cặp chỉ số khác nhau (i, j) sao cho a<sub>i</sub> = 2 * a<sub>j</sub> là (1, 0), (3, 1), (4, 2)

**Bài giải**

- Dùng unordered_map để đếm số lần xuất hiện của các số trong dãy số, sau đó duyệt qua từng key trong map, nếu key * 2 có trong map thì cộng vào kết quả, ví dụ số 2 xuất hiện 2 lần, số 4 xuất hiện 3 lần thì có thêm 2 * 3 = 6 cặp chỉ số. Chú ý trường hợp key = 0 thì cần xử lý riêng vì 0 * 2 = 0

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    long long res = 0;

    for (auto it : mp) {
        if (it.first == 0) {
            res += 1ll * it.second * (it.second - 1);
        } else if (mp.find(it.first * 2) != mp.end()) {
            res += 1ll * it.second * mp[it.first * 2];
        }
    }
    cout << res;
    return 0;
}
```

# Số phân nửa

**Số phân nửa** là số mà tất cả các chữ số của nó đều khác 0, giữa 2 chữ số liên tiếp sẽ có 1 chữ số gấp đôi chữ số kia.

Ví dụ: 121, 212, 12484, 121248,... là các số phân nửa.

Cho trước một số nguyên dương **n**. Hãy in ra các số phân nửa bé hơn hoặc bằng **n** theo thứ tự tăng dần.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>12</sup>)

**Đầu ra**:

- In ra các số phân nửa bé hơn hoặc bằng **n** theo thứ tự tăng dần, mỗi số cách nhau bởi dấu cách

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 15 | 1 2 3 4 5 6 7 8 9 12 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 100 | 1 2 3 4 5 6 7 8 9 12 21 24 36 42 48 63 84 |

**Bài giải**

- Dùng phương pháp sinh số, ban đầu tạo ra res = {1, 2, 3, 4, 5, 6, 7, 8, 9} là các số phân nửa có 1 chữ số, sau đó duyệt qua từng số trong res, nếu số cuối cùng của số đang xét là số chẵn thì thêm `số * 10 + số cuối cùng / 2` vào res, nếu số cuối cùng của số đang xét bé hơn 5 thì thêm `số * 10 + số cuối cùng * 2` vào res

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> res = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    while (res.back() <= n) {
        long long t = res[index];
        if (t % 10 % 2 == 0) {
            res.push_back(t * 10 + t % 10 / 2);
        }
        if (t % 10 < 5) {
            res.push_back(t * 10 + t % 10 * 2);
        }
        index++;
    }
    for (int i = 0; i < res.size(); i++) {
        if (res[i] <= n) {
            cout << res[i] << " ";
        }
    }
    return 0;
}
```

# Tổng tam giác số

Cho tam giác số như sau:

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
...
```

Hãy tính tổng các số trong tam giác số có **n** dòng.

**Đầu vào**:

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>9</sup>)

**Đầu ra**:

- In ra tổng các số trong tam giác số có **n** dòng. Vì kết quả có thể rất lớn nên in ra số dư khi chia cho 10<sup>9</sup> + 7


# Số lượng hoán vị

Cho một chuỗi **s** gồm các ký tự từ 'a' đến 'z'. Hãy đếm số lượng hoán vị của chuỗi **s**. Một hoán vị của chuỗi **s** là một chuỗi khác **s** nhưng có cùng số lượng các ký tự.

**Đầu vào**:

- Dòng đầu tiên chứa chuỗi **s** (1 ≤ |**s**| ≤ 10<sup>5</sup>)

**Đầu ra**:

- In ra số lượng hoán vị của chuỗi **s**. Vì kết quả có thể rất lớn nên in ra số dư khi chia cho 10<sup>9</sup> + 7

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| abc | 6 |

**Giải thích**:

Có 6 hoán vị của chuỗi "abc" là "abc", "acb", "bac", "bca", "cab", "cba"

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| aab | 3 |

**Giải thích**:

Có 3 hoán vị của chuỗi "aab" là "aab", "aba", "baa"