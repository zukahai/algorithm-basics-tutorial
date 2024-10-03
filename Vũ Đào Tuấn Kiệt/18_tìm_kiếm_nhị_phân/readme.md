# Tìm Kiếm Nhị Phân

<details>

<summary>
<b>
BÀI 101. Làm bánh (PANCAKES.CPP)
</b>
</summary>


<br>
Nhận định: Mỗi con gà sẽ có thời gian để trứng là t<sub>i</sub>. 

Sau thời gian là **T** thì con gà **i** sẽ để được phần trứng là **T/t<sub>i</sub>**.

Có **N** con gà và cần **x** quả trứng.

Nhận thấy nếu **T** càng lớn thì số lượng trứng càng nhiều. Nên mình sẽ tìm kiếm nhị phần để tìm ra thời gian nhỏ nhất để có **x** quả trứng.

Đầu tiên khoảng thời gian T có thể từ 1 đến 10<sup>18</sup>. Mình sẽ tìm kiếm nhị phân trong khoảng này.

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long x, T;
	cin >> n >> x;
	vector<int> t(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	long long l = 1, r = 1e18;
	long long ans = 0;
	while (l <= r) {
		long long m = (l + r) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += m / t[i];
		}
		if (sum >= x) {
			ans = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	cout << ans << endl;
	return 0;
}

```

</details>

<details>
<summary>
<b>
BÀI 102. SÓC VÀ HẠT DẺ (SQUIRR2.CPP)
</b>
</summary>

<br>
Nhận định: Mỗi cây hạt dẻ có thời gian chờ hạt đầu tiên là t<sub>i</sub>. Tiếp đó cứ sau mỗi thời gian là **p<sub>i</sub>** thì cây sẽ cho ra thêm 1 hạt dẻ.

Sau thời gian là **T** thì cây **i** sẽ cho ra được phần hạt dẻ là **(T - t<sub>i</sub>) / p<sub>i</sub>** + 1.

Nhận thấy nếu **T** càng lớn thì số lượng hạt dẻ càng nhiều. Có **M** cây hạt dẻ, **N** chú sóc và cần **K** hạt dẻ.

Nên mình sẽ tìm kiếm nhị phần trong **T**. Mỗi **T** chúng ta có được số lượng hạt dẻ của mỗi cây trong **M** cây, tìm **N** cây có nhiều hạt dẻ nhất. Nếu tổng số hạt dẻ của **N** cây đó >= **K**, thì đó có thể là đán án, tiếp tục tìm T nhỏ hơn. Ngược lại thì tìm T lớn hơn.

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
	int m, n, k;
	cin >> m >> n >> k;
	vector<int> t(m), p(m);
	for (int i = 0; i < m; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> p[i];
	}
	long long l = 0, r = 1e18;
	long long ans = 0;
	while (l <= r) {
		long long T = (l + r) / 2;
		vector<long long> a(m);
		for (int i = 0; i < m; i++) {
			a[i] = (T - t[i]) / p[i] + 1;
		}
		sort(a.begin(), a.end(), greater<long long>());
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		if (sum >= k) {
			ans = T;
			r = T - 1;
		} else {
			l = T + 1;
		}
	}
	cout << ans << endl;
	return 0;
}
```

</details>

## Dãy số

Tóm tắt đề: Cho một dãy số gồm **N** phần tử. Đếm xem có bao nhiều a<sub>p</sub>, sao cho 3 * a<sub>p</sub> = a<sub>i</sub> + a<sub>j</sub> +  a<sub>k</sub> (i ≠ j ≠ k). q có thể trùng với i, j, k.

(3 ≤ N ≤ 1000, |a<sub>i</sub>| ≤ 10<sup>8</sup>)

Nhận định, N ≤ 1000 nên chúng ta có thể sử dụng giải thuật O(N<sup>2</sup>).

Đánh giá bài toán tổng quan sẽ cần tìm 4 chỉ số i, j, k, p sao cho a<sub>p</sub> = (a<sub>i</sub> + a<sub>j</sub> + a<sub>k</sub>) / 3. Trong đó p có thể trùng với i, j, k, còn i, j, k phải khác nhau.

Ý tưởng:

Duyệt qua từng phần tử a<sub>p</sub> trong dãy số, sau đó duyệt qua từng cặp i.

```
for q chạy từ 1 đến N:
	for i chạy từ 1 đến N:
		Kiểm tra xem có tồn tại a[j] + a[k] = 3 * a[q] - a[i] không.
```

Cần kiểm tra xem có a[j] + a[k] = 3 * a[q] - a[i] không. Để làm được điều này, chúng ta cần tạo ra mảng chứa tất cả các tổ hợp của a[j] + a[k].

Tiện thể đếm số lần xuất hiện của mỗi tổ hợp.

```
for i chạy từ 1 đến N - 1:
	for j chạy từ i + 1 đến N:
		Thêm a[i] + a[j] vào mảng.
		Thêm mp[a[i] + a[j]] ++
```

Lúc này để kiểm tra xem có tồn tại a[j] + a[k] = 3 * a[q] - a[i] không, chúng ta chỉ cần kiểm tra xem mp[3 * a[q] - a[i]] có khác 0 không.

Ví dụ:

```
N = 3
a = [3, 1, 2]

mp = {
	3: 1,
	4: 1,
	5: 1
}

Với q = 3, i = 1, a[q] = 2, a[i] = 3
3 * a[q] - a[i] = 3 * 2 - 3 = 3
mp[3] = 1

Có một cặp j, k thoả mãn a[j] + a[k] = 3

Tuy nhiên cần kiểm tra xem j, k có khác i không.

Để làm được điều này thì ta cần trừ đi mp[3] cho tất cả các cách tạo ra số 3 thì a[i], ta cần trừ đi mp[3 - a[i]].

mp[3] - mp[3 - a[i]] = mp[3] - mp[0] = 1 - 0 = 1

Ta thấy mp[3] - mp[3 - a[i]] > 0 nên có thể tìm được cặp j, k thoã mãn a[j] + a[k] = 3 * a[q] - a[i] với i, j, k khác nhau.


```
for q chạy từ 1 đến N:
	for i chạy từ 1 đến N:
		Sjk = 3 * a[q] - a[i]
		x = mp[Sjk]
		Cần trừ đi trong x, những cặp được tạo ra bởi chính a[i]
		Lưu ý: Xét riêng trường hợp a[i] = Sjk - a[j]

```

```cpp