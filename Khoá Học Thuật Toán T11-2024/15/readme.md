Dãy đầu vào: dãy a

- Tạo dãy b là dãy a sau khi sắp xếp không giảm
- Tạo dãy c là dãy a sau khi sắp xếp không tăng

a: 1 2 4 4 7
b: 1 2 4 4 7
c: 7 4 4 2 1 

if (a == b || a == c)
	cout << "YES";
else ...

dpt: O(NlogN)

---------------------------------------
Gán cờ:

- flag1: Dãy đơn điệu tăng
- flag2: Dãy đơn điệu giảm

a1 ≤ a2 ≤ . . . ≤ an
+ Tất cả a[i - 1] ≤ a[i] thì là dãy tăng
+ Chỉ cần có 1 cặp a[i - 1] > a[i] thì không phải dãy tăng

flag1 = 1;
for (int i = 1; i < n; i++) {
    if (a[i - 1] > a[i]) {
        flag1 = 0;
        break;
    }
}

a1 ≥ a2 ≥ . . . ≥ an.
- Tất cả a[i - 1] ≥ a[i] thì là dãy giảm
- Chỉ cần có 1 cặp a[i - 1] < a[i] thì không phải dãy giảm

flag2 = 1;
for (int i = 1; i < n; i++) {
    if (a[i - 1] < a[i]) {
        flag2 = 0;
        break;
    }
}

if (flag1 == 1 || flag2 == 1)
    cout << "YES";
else
    cout << "NO";


------------------------------------------
long long dem = 0;
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (a[i] == a[j])
            dem++;
    }
}


unordered_map <long long, long long> dem;

// dem[x]: lưu số lần xuất hiện của x

for (int i = 0; i < n; i++) {
	dem[a[i]]++;
}

dem[2] = 2
dem[4] = 3
long long res = 0;
for (pair<long long, long long> x : dem)
	res += dem.second * (dem.second - 1) / 2;

Cho một dãy số nguyên, 
hãy dếm xem trong dãy có bao cặp số ai, aj 
sao cho a[i] = a[j] và i = j.

5
4 4 2 4 2

