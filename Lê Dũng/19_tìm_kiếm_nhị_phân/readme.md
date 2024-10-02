# Tìm Kiếm Nhị Phân

<details>
<summary>
BÀI 101. Làm bánh (PANCAKES.CPP) 
</summary>
	
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
BÀI 102. SÓC VÀ HẠT DẺ (SQUIRR2.CPP)
</summary>
	
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