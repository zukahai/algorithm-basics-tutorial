## Bài 1

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy trả về độ dài dãy con toàn số lẻ liên tiếp dài nhất.

**Ví dụ:**

- Với `a = [3, 2, 1, 11, 9, 6, 4]` thì `longest_odd(a) = 3`.<br>Vì dãy con toàn số lẻ liên tiếp dài nhất là `[1, 11, 9]`.
- Với `a = [1, 2, 3, 4, 5, 6, 7]` thì `longest_odd(a) = 1`.
- Với `a = [2, 4, 6, 8]` thì `longest_odd(a) = 0`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s (Java Script) và 0.7s (Python)
- [Đầu vào] Array of integers `a`<br>5 ≤ a.length ≤ 10^5.<br>0 ≤ a[i] ≤ 10^5.
- [Đầu ra] Integer

## Bài 2

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy trả độ dài của dãy số nguyên tố liên tiếp dài nhất trong `a`.

**Ví dụ:**

- Với `a = [1, 2, 3, 5, 6, 7]` thì `longest_prime(a) = 3`.<br>Vì dãy con toàn số nguyên tố liên tiếp dài nhất là `[2, 3, 5]`.
- Với `a = [1, 4, 6, 8, 10]` thì `longest_prime(a) = 0`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s (Java Script) và 0.7s (Python)
- [Đầu vào] Array of integers `a`<br>5 ≤ a.length ≤ 10^5.<br>0 ≤ a[i] ≤ 10^5.
- [Đầu ra] Integer

## Bài 3

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy trả về độ dài dãy con dài nhất liên tiếp, đều là số nguyên dương.

**Ví dụ:**

- Với `a = [1, -2, 3, 5, 6, -7]` thì `longestPositive(a) = 3`.<br>Vì dãy con toàn số nguyên dương liên tiếp dài nhất là `[3, 5, 6]`.
- Với `a = [1, 2, 3, 4, 5, 6, 7]` thì `longestPositive(a) = 7`.
- Với `a = [-1, -2, -3, -4, -5, -6, -7]` thì `longestPositive(a) = 0`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s (Java Script) và 0.7s (Python)
- [Đầu vào] Array of integers `a`<br>5 ≤ a.length ≤ 10^5.<br>0 ≤ a[i] ≤ 10^5.
- [Đầu ra] Integer

## Bài 4

Cho một mảng số nguyên `a` gồm `n` phần tử. Hãy trả về độ dài dãy con dài nhất liên tiếp sao cho 2 phần tử liền kề chênh nhau đúng 1 đơn vị.

**Ví dụ:**

- Với `a = [10, 2, 3, 2, 3, 4, 9]` thì `longestDistance(a) = 5`.<br>Vì dãy con toàn số nguyên tố liên tiếp dài nhất là `[2, 3, 2, 3, 4]`.
- Với `a = [1, 2, 3, 4, 5, 6, 7]` thì `longestDistance(a) = 7`.
- Với `a = [1, 3, 6, 7, 0]` thì `longestDistance(a) = 0`.

**Đầu vào/Đầu ra**

- [Thời gian] 0.1s (Java Script) và 0.7s (Python)
- [Đầu vào] Array of integers `a`<br>5 ≤ a.length ≤ 10^5.<br>0 ≤ a[i] ≤ 10^5.
- [Đầu ra] Integer