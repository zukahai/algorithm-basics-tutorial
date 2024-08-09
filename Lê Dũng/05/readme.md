

<p align="center"> <img src="./problem.jfif" alt="bg" /> </p>

# Phân tích đề

Về cơ bản sẽ cần đếm các cặp l, r sao cho a <sub>k </sub> < max (a <sub>l </sub>, a <sub>r </sub>), với l < k < r.

Nghĩa là cần tìm các cặp l, r sao cho các số từ chỉ số l + 1 đến chỉ số r - 1 đều nhỏ hơn số ở chỉ số l hoặc chỉ số r. Chỉ số l hoặc r sẽ là chỉ số của số lớn nhất trong đoạn l đến r.

# Thiết kế thuật toán

Với mỗi chỉ số i ta cần xét các cặp (L, i) và (i, R) sao cho a[i] là số lớn nhất trong đoạn đang xét.

Với mỗi i ta cần số R (R > i) gần nhất sau cho a[R] > a[i]. Lúc này tất cả các số từ i + 1 đến R - 1 đều nhỏ hơn a[i] nên số lượng cặp (i, k) mà i < k < R sẽ là R - i - 1.

Tương tự với mỗi chỉ số i ta cần số L (L < i) gần nhất trước cho a[L] > a[i]. Lúc này tất cả các số từ L + 1 đến i - 1 đều nhỏ hơn a[i] nên số lượng cặp (k, i) mà L < k < i sẽ là i - L - 1.

Vậy số cặp (l, r) mà a[l] < a[r] sẽ là (i - L - 1) + (R - i - 1) với i là chỉ số của số lớn nhất trong đoạn l đến r.

Tạo mảng L[i] là chỉ số L gần nhất của i sao cho a[L] > a[i].

Tạo mảng R[i] là chỉ số R gần nhất của i sao cho a[R] > a[i].

Ví dụ với a = [1, 4, 2, 3]

- L = [-1, -1, 1, 1]
- R = [1, 4, 3, 4]

Tạo 2 mảng này sẽ dùng stack để tạo

Để tạo mảng L

- Khởi tạo stack rỗng
- Duyệt từ 1 đến n
    - Nếu stack không rỗng và a[stack.top] <= a[i] thì pop stack
    - Nếu stack rỗng thì L[i] = -1
    - Ngược lại L[i] = stack.top
    - Push i vào stack

```cpp

stack<int> s;

for (int i = 0; i < n; i++) {
    while (!s.empty() && a[s.top()] < a[i]) {
        s.pop();
    }
    l[i] = (!s.empty() ? s.top() : -1);
    s.push(i);
}

```

Tương tự với mảng R

- Khởi tạo stack rỗng
- Duyệt từ n - 1 đến 0
    - Nếu stack không rỗng và a[stack.top] < a[i] thì pop stack
    - Nếu stack rỗng thì R[i] = n
    - Ngược lại R[i] = stack.top
    - Push i vào stack

```cpp

// xoá rỗng s
while (!s.empty()) {
    s.pop();
}

for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && a[s.top()] < a[i]) {
        s.pop();
    }
    r[i] = (!s.empty() ? s.top() : n);
    s.push(i);
}

```

Đánh giá độ phức tạp khi tao mảng L và R là O(n), vì mỗi phần tử chỉ được thêm vào stack 1 lần và được xoá ra khỏi stack 1 lần.

Nên độ phức tạp của thuật toán là O(n).