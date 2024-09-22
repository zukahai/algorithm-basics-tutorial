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

## Bài 4: Tổ hợp

Cho số nguyên dương **n** và **k**. Hãy in ra tất cả các cách chọn **k** phần tử từ tập hợp {1, 2, 3, ..., **n**}. 2 cách chọn gọi là khác nhau nếu có các phần tử khác nhau.

**Input**

Gồm 2 số nguyên **n** và **k** (1 ≤ **k** ≤ **n** ≤ 10).

**Output**

In ra tất cả các cách chọn **k** phần tử từ tập hợp {1, 2, 3, ..., **n**}. Mỗi cách chọn in ra **k** số nguyên cách nhau bởi dấu cách. Các cách chọn không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 3 2   | 1 2<br>1 3<br>2 3|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 4 3   | 1 2 3<br>1 2 4<br>1 3 4<br>2 3 4|

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 5 2   | 1 2<br>1 3<br>1 4<br>1 5<br>2 3<br>2 4<br>2 5<br>3 4<br>3 5<br>4 5|

## Bài 5: Hoán vị

Cho số nguyên dương **n**. Hãy in ra tất cả các hoán vị của tập hợp {1, 2, 3, ..., **n**}. 2 hoán vị gọi là khác nhau nếu có ít nhất một vị trí mà 2 hoán vị khác nhau.

**Input**

Một số nguyên **n** (1 ≤ **n** ≤ 10).

**Output**

In ra tất cả các hoán vị của tập hợp {1, 2, 3, ..., **n**}. Mỗi hoán vị in ra **n** số nguyên cách nhau bởi dấu cách. Các hoán vị không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 3     | 1 2 3<br>1 3 2<br>2 1 3<br>2 3 1<br>3 1 2<br>3 2 1|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 4     | 1 2 3 4<br> 1 2 4 3<br> 1 3 2 4<br> 1 3 4 2<br> 1 4 2 3<br> 1 4 3 2<br> 2 1 3 4<br> 2 1 4 3<br> 2 3 1 4<br> 2 3 4 1<br> 2 4 1 3<br> 2 4 3 1<br> 3 1 2 4<br> 3 1 4 2<br> 3 2 1 4<br> 3 2 4 1<br> 3 4 1 2<br> 3 4 2 1<br> 4 1 2 3<br> 4 1 3 2<br> 4 2 1 3<br> 4 2 3 1<br> 4 3 1 2<br> 4 3 2 1|

## Bài 6: Hoán vị dãy số

Cho dãy số nguyên **a** gồm **n** phần tử khác nhau. Hãy in ra tất cả các hoán vị của dãy số **a**. 2 hoán vị gọi là khác nhau nếu có ít nhất một vị trí mà 2 hoán vị khác nhau.

**Input**

Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10).

Dòng thứ 2 chứa **n** số nguyên **a1**, **a2**, ..., **an** (1 ≤ **ai** ≤ 10).

**Output**

In ra tất cả các hoán vị của dãy số **a**. Mỗi hoán vị in ra **n** số nguyên cách nhau bởi dấu cách. Các hoán vị không cần phải theo thứ tự tăng dần.

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 3<br>2 4 6 | 2 4 6<br>2 6 4<br>4 2 6<br>4 6 2<br>6 4 2<br>6 2 4|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 4<br>1 3 6 9| 1 3 6 9<br>1 3 9 6<br>1 6 3 9<br>1 6 9 3<br>1 9 3 6<br>1 9 6 3<br>3 1 6 9<br>3 1 9 6<br>3 6 1 9<br>3 6 9 1<br>3 9 1 6<br>3 9 6 1<br>6 3 1 9<br>6 3 9 1<br>6 1 3 9<br>6 1 9 3<br>6 9 3 1<br>6 9 1 3<br>9 3 6 1<br>9 3 1 6<br>9 6 3 1<br>9 6 1 3<br>9 1 3 6<br>9 1 6 3|

