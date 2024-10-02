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