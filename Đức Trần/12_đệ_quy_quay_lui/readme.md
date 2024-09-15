## Bài 1: Chọn bi

Có 3 loại bị 1, 2, 3. Mỗi loại bị có số lượng không giới hạn.

In ra tất cả các chọn 3 viên bị. 2 cách chọn gọi là khác nhau nếu có ít nhất một vị trí mà 2 cách chọn khác nhau.

**Input**

Không có input

**Output**

In ra tất cả các cách chọn 3 viên bị. Mỗi cách chọn in ra 3 số nguyên cách nhau bởi dấu cách. Các cách chọn không cần phải theo thứ tự tăng dần.

**Ví dụ**

| Input | Output |
|:-------|:--------|
|       | 1 1 1<br>1 1 2<br>1 1 3<br>1 2 1 <br>1 2 2<br>1 2 3<br>1 3 1<br>1 3 2<br>1 3 3<br>2 1 1<br>2 1 2<br>2 1 3<br>2 2 1<br>2 2 2<br>2 2 3<br>2 3 1<br>2 3 2<br>2 3 3<br>3 1 1<br>3 1 2<br>3 1 3<br>3 2 1<br>3 2 2<br>3 2 3<br>3 3 1<br>3 3 2<br>3 3 3|

## Bài 2. Chọn bi (tiếp theo)

Có 3 loại bị 1, 2, 3. Mỗi loại bị có số lượng không giới hạn.

In ra tất cả các cách chọn **n** viên bị. 2 cách chọn gọi là khác nhau nếu có ít nhất một vị trí mà 2 cách chọn khác nhau.

**Input**

Một số nguyên **n** (1 ≤ **n** ≤ 10).

**Output**

In ra tất cả các cách chọn **n** viên bị. Mỗi cách chọn in ra **n** số nguyên cách nhau bởi dấu cách. Các cách chọn không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 1     | 1<br>2<br>3|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 2     | 1 1<br>1 2<br>1 3<br>2 1<br>2 2<br>2 3<br>3 1<br>3 2<br>3 3|

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 3     | 1 1 1<br>1 1 2<br>1 1 3<br>1 2 1<br>1 2 2<br>1 2 3<br>1 3 1<br>1 3 2<br>1 3 3<br>2 1 1<br>2 1 2<br>2 1 3<br>2 2 1<br>2 2 2<br>2 2 3<br>2 3 1<br>2 3 2<br>2 3 3<br>3 1 1<br>3 1 2<br>3 1 3<br>3 2 1<br>3 2 2<br>3 2 3<br>3 3 1<br>3 3 2<br>3 3 3|

```cpp

#include <bits/stdc++.h>

using namespace std;

vector<int> a(10);
int N;

void dequy(int n) {
    if (n == N) {
        for (int i = 0; i < N; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= 3; i++) {
        a[n] = i;
        dequy(n + 1);
    }
}

int main() {
    cin >> N;
    dequy(0);
}

```

## Bài 3. Chọn bi (tiếp theo)

Có 3 loại bị 1, 2, 3. Mỗi loại bị có số lượng không giới hạn.

In ra tất cả các cách chọn **n** viên bị sao cho các viên bị có thú tự không giảm. 2 cách chọn gọi là khác nhau nếu có ít nhất một vị trí mà 2 cách chọn khác nhau.

**Input**

Một số nguyên **n** (1 ≤ **n** ≤ 10).

**Output**

In ra tất cả các cách chọn **n** viên bị sao cho các viên bị có thú tự không giảm. Mỗi cách chọn in ra **n** số nguyên cách nhau bởi dấu cách. Các cách chọn không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 1     | 1<br>2<br>3|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 2     | 1 1<br>1 2<br>1 3<br>2 2<br>2 3<br>3 3|

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 3     | 1 1 1<br>1 1 2<br>1 1 3<br>1 2 2<br>1 2 3<br>1 3 3<br>2 2 2<br>2 2 3<br>2 3 3<br>3 3 3|
