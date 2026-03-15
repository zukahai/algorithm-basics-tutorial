# Đếm số phần tử khác nhau trong mỗi đoạn

Cho một mảng gồm `n` số nguyên, hãy đếm số phần tử khác nhau trong mỗi đoạn `[l, r]` của mảng.

**Đầu vào**

- Dòng đầu tiên chứa một số nguyên `n` (1 ≤ n ≤ 2x10<sup>5</sup>) - số lượng phần tử trong mảng.
- Dòng thứ hai chứa `n` số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^6) - các phần tử của mảng.
- Dòng thứ ba chứa một số nguyên `q` (1 ≤ q ≤ 2x10<sup>5</sup>) - số lượng truy vấn.
- Mỗi trong số `q` dòng tiếp theo chứa hai số nguyên `l` và `r` (1 ≤ l ≤ r ≤ n) - chỉ số của đoạn cần xét.

**Đầu ra**
- In ra `q` dòng, mỗi dòng chứa một số nguyên - số phần tử khác nhau trong đoạn `[l, r]`.

**Ví dụ**

|Đầu vào|Đầu ra|
|:-------|:------|
|5<br>1 1 2 1 3<br>4<br>1 5<br>2 4<br>3 5 <br> 1 2|3<br>2<br>3<br>1|

**Ràng buộc**
- 50% số test có n, q ≤ 2000.
- 50% số test còn lại có n, q ≤ 2x10<sup>5</sup>.

# Đếm số cặp bằng nhau trong đoạn

Cho một mảng gồm `n` số nguyên, hãy đếm số cặp phần tử bằng nhau trong mỗi đoạn `[l, r]` của mảng.

**Đầu vào**

- Dòng đầu tiên chứa một số nguyên `n` (1 ≤ n ≤ 2x10<sup>5</sup>) - số lượng phần tử trong mảng.
- Dòng thứ hai chứa `n` số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^6) - các phần tử của mảng.
- Dòng thứ ba chứa một số nguyên `q` (1 ≤ q ≤ 2x10<sup>5</sup>) - số lượng truy vấn.
- Mỗi trong số `q` dòng tiếp theo chứa hai số nguyên `l` và `r` (1 ≤ l ≤ r ≤ n) - chỉ số của đoạn cần xét.

**Đầu ra**
- In ra `q` dòng, mỗi dòng chứa một số nguyên - số cặp phần tử bằng nhau trong đoạn `[l, r]`.

**Ví dụ**

|Đầu vào|Đầu ra|
|:-------|:------|
|5<br>1 1 2 1 2<br>4<br>1 5<br>2 4<br>3 5 <br> 2 3|4<br>1<br>1<br>0|

**Ràng buộc**

- 50% số test có n, q ≤ 2000.
- 50% số test còn lại có n, q ≤ 2x10<sup>5</sup>.

# Đếm số cặp bằng K trong đoạn

Cho một mảng gồm `n` số nguyên, hãy đếm số cặp phần tử bằng `k` trong mỗi đoạn `[l, r]` của mảng.

**Đầu vào**

- Dòng đầu tiên chứa một số nguyên `n` và `k` (1 ≤ n ≤ 2x10<sup>5</sup>, 1 ≤ k ≤ 10<sup>6</sup>) - số lượng phần tử trong mảng và giá trị k.
- Dòng thứ hai chứa `n` số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10^6) - các phần tử của mảng.
- Dòng thứ ba chứa một số nguyên `q` (1 ≤ q ≤ 2x10<sup>5</sup>) - số lượng truy vấn.
- Mỗi trong số `q` dòng tiếp theo chứa hai số nguyên `l` và `r` (1 ≤ l ≤ r ≤ n) - chỉ số của đoạn cần xét.

**Đầu ra**

- In ra `q` dòng, mỗi dòng chứa một số nguyên - số cặp phần tử bằng `k` trong đoạn `[l, r]`.

**Ví dụ**

|Đầu vào|Đầu ra|
|:-------|:------|
|5 3<br>1 1 2 1 2<br>4<br>1 5<br>2 4<br>3 5 <br> 1 2|6<br>2<br>2<br>0|

**Ràng buộc**

- 50% số test có n, q ≤ 2000.
- 50% số test còn lại có n, q ≤ 2x10<sup>5</sup>.

# Tổng bình phương tần suất

Cho một mảng gồm `n` số nguyên, hãy tính tổng bình phương tần suất của các phần tử trong mỗi đoạn `[l, r]` của mảng.

Ví nếu đoạn `[l, r]` có các phần tử `1, 1, 1, 1, 2, 2, 3` thì tần suất của `1` là `4`, tần suất của `2` là `2`, tần suất của `3` là `1`. Tổng bình phương tần suất là `4^2 + 2^2 + 1^2 = 21`.

**Đầu vào**

- Dòng đầu tiên chứa một số nguyên `n` (1 ≤ n ≤ 2x10<sup>5</sup>) - số lượng phần tử trong mảng.
- Dòng thứ hai chứa `n` số nguyên a1, a2, ..., an (1 ≤ ai ≤ 10<sup>6</sup>) - các phần tử của mảng.
- Dòng thứ ba chứa một số nguyên `q` (1 ≤ q ≤ 2x10<sup>5</sup>) - số lượng truy vấn.
- Mỗi trong số `q` dòng tiếp theo chứa hai số nguyên `l` và `r` (1 ≤ l ≤ r ≤ n) - chỉ số của đoạn cần xét.

**Đầu ra**
- In ra `q` dòng, mỗi dòng chứa một số nguyên - tổng bình phương tần suất trong đoạn `[l, r]`.

**Ví dụ**

|Đầu vào|Đầu ra|
|:-------|:------|
|5<br>1 1 2 1 3<br>4<br>1 5<br>2 4<br>3 5 <br> 1 2|11<br>5<br>3<br>4|

**Ràng buộc**

- 50% số test có n, q ≤ 2000.
- 50% số test còn lại có n, q ≤ 2x10<sup>5</sup>.