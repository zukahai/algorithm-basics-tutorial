# Bài 1

Cho 1 danh sachs gồm N số nguyên.
In ra các số chẵn có trong danh sách. Nếu không có số chẵn nào thì in ra -1.

**Input**:

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^3)

- Dòng thứ 2 chứa N số nguyên a1, a2, ..., aN (1 ≤ ai ≤ 10^3)

**Output**:

- In ra các số chẵn trong danh sách theo thứ tự xuất hiện trong danh sách. Mỗi số trên 1 dòng.

**Ví dụ**:

| Input | Output |
|-------|--------|
| 5<br>1 2 3 4 5 | 2<br>4 |

| Input | Output |
|-------|--------|
| 3<br>1 3 5 | -1 |

# Bài 2

Cho mảng a[] gồm N số tự nhiên. và một số nguyên dương S.
Đếm xem các bao nhiều cặp a[i], a[j] thỏa mãn a[i] + a[j] = S.

**Input**:

- Dòng đầu tiên chứa số nguyên N (1 ≤ N ≤ 10^6)

- Dòng thứ 2 chứa N số nguyên a1, a2, ..., aN (1 ≤ ai ≤ 10^9)

- Dòng thứ 3 chứa số nguyên S (1 ≤ S ≤ 10^9)

**Output**:

- In ra số lượng cặp thỏa mãn.

**Ví dụ**:

| Input | Output |
|-------|--------|
| 5<br>1 2 3 4 5<br>5 | 2 |

| Input | Output |
|-------|--------|
| 3<br>1 2 3<br>6 | 0 |

| Input | Output |
|-------|--------|
| 4<br>3 3 3 3<br>6 | 6 |

## Hướng dẫn

Dùng mảng b để đếm số lần xuất hiện của các số trong mảng a. Sau đó duyệt qua mảng a, với mỗi phần tử a[i] ta kiểm tra xem S - a[i] có tồn tại trong mảng a không. Nếu tồn tại thì cộng vào kết quả số lần xuất hiện của S - a[i] trong mảng a.

## Chú ý

- Cần chú ý trường hợp a[i] = S - a[i] thì cần trừ đi 1 khỏi kết quả vì không thể chọn 2 phần tử giống nhau.
- Kết quả sẽ bị trùng nhau, ví dụ 2 + 3 và 3 + 2 sẽ được tính là 2 cặp. Nên cần chia kết quả cho 2 để tránh trường hợp trùng lặp.
