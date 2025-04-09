# Mảng cộng dồn

## Bài 1: Tổng nhiều đoạn con

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của đoạn con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy tính tổng của đong con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>9</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần tính tổng. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra tổng của đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 1 2 3 4 5 <br> 3 <br> 1 3 <br> 2 4 <br> 1 5 | 6 <br> 9 <br> 15 |

## Bài 2: Đếm số chẵn trong đoạn con

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là số lượng số chẵn trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Số lượng số chẵn trong đoạn con này là số lượng số chẵn trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng số chẵn trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>9</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần đếm số lượng số chẵn. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra số lượng số chẵn trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 1 2 3 4 5 <br> 3 <br> 1 3 <br> 2 4 <br> 5 5 | 1 <br> 2 <br> 0 |

## Bài 3: Đếm số chính phương trong đoạn con

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là số lượng số chính phương trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Số lượng số chính phương trong đoạn con này là số lượng số chính phương trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng số chính phương trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>9</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần đếm số lượng số chính phương. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra số lượng số chính phương trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 1 4 8 10 25 <br> 3 <br> 1 3 <br> 2 5 <br> 1 5 | 1 <br> 2 <br> 3 |

## Bài 4: Tổng các số chính phương trong đoạn con

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các số chính phương trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng các số chính phương trong đoạn con này là tổng các số chính phương trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy tính tổng các số chính phương trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>9</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần tính tổng các số chính phương. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra tổng các số chính phương trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 1 4 8 10 25 <br> 3 <br> 1 3 <br> 2 5 <br> 1 5 | 1 <br> 29 <br> 30 |

## Bài 5: Tổng các số nguyên tố trong đoạn con

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các số nguyên tố trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng các số nguyên tố trong đoạn con này là tổng các số nguyên tố trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy tính tổng các số nguyên tố trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>6</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần tính tổng các số nguyên tố. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra tổng các số nguyên tố trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 1 2 3 4 5 <br> 3 <br> 1 3 <br> 2 4 <br> 1 5 | 5 <br> 5 <br> 10 |

## Bài 6: Tính tổng các số siêu nguyên tố trong đoạn con

Số siêu nguyên tố là số nguyên tố, khi xoá lần lượt các chữ số của nó từ trái sang phải, vẫn là số nguyên tố. Ví dụ: 233 là số siêu nguyên tố vì 233, 23 và 3 đều là số nguyên tố. Tuy nhiên, 237 không phải là số siêu nguyên tố vì 237 không phải là số nguyên tố.

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các số siêu nguyên tố trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng các số siêu nguyên tố trong đoạn con này là tổng các số siêu nguyên tố trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy tính tổng các số siêu nguyên tố trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>12</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần tính tổng các số siêu nguyên tố. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra tổng các số siêu nguyên tố trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 233 2 37 4 5 <br> 3 <br> 1 3 <br> 2 4 <br> 5 5 | 272 <br> 39 <br> 5 |

## Bài 7: Đếm các số giai thừa trong đoạn con

N! là giai thừa của số nguyên dương N, được định nghĩa là tích của tất cả các số nguyên dương từ 1 đến N. Ví dụ: 5! = 1 * 2 * 3 * 4 * 5 = 120.

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là số lượng số giai thừa trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Số lượng số giai thừa trong đoạn con này là số lượng số giai thừa trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng số giai thừa trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (0 ≤ a[i] ≤ 10<sup>12</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần đếm số lượng số giai thừa. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra số lượng số giai thừa trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 6 7 24 10 120 <br> 3 <br> 1 3 <br> 2 4 <br> 1 5 | 2 <br> 1 <br> 3 |

## Bài 8: Đếm số lượng số hoàn hảo trong đoạn con

Số hoàn hảo là số nguyên dương mà tổng các ước số của nó (không bao gồm chính nó) lớn hơn hoạc bằng chính nó. Ví dụ: 6 là số hoàn hảo vì 1 + 2 + 3 >= 6. Số 12 cũng là số hoàn hảo vì 1 + 2 + 3 + 4 + 6 >= 12. Tuy nhiên, số 5 không phải là số hoàn hảo vì 1 >= 5.

Một đoạn con từ **l** đến **r** của mảng **a** được định nghĩa là số lượng số hoàn hảo trong đoạn con từ chỉ số **l** đến chỉ số **r** trong mảng. Số lượng số hoàn hảo trong đoạn con này là số lượng số hoàn hảo trong các số **a[l], a[l+1], ... ,a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng số hoàn hảo trong đoạn con từ **l** đến **r** trong mảng. Bạn có thể thực hiện nhiều truy vấn trên mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>6</sup>)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần đếm số lượng số hoàn hảo. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra số lượng số hoàn hảo trong đoạn con từ **l** đến **r** trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br> 6 12 10 9 12 <br> 3 <br> 1 3 <br> 2 4 <br> 1 5 | 2 <br> 1 <br> 3 |

## Bài 9: Số dãy con có tổng bằng 0

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của dãy con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng dãy con có tổng bằng 0 trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (-10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra số lượng dãy con có tổng bằng 0 trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 7 <br>4 1 0 -1 2 -2 3 | 4 |

*Giải thích:*

Các dãy con có tổng bằng 0 là:
- 1 0 -1
- 0
- 2 -2
- 1 0 -1 2 -2

## Bài 10: Dãy con dài nhất có tổng bằng 0

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của dãy con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy tìm độ dài của dãy con có tổng bằng 0 trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (-10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra độ dài của dãy con có tổng bằng 0 trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 7 <br>4 1 0 -1 2 -2 3 | 5 |

**Giải thích:**

Dãy con có tổng bằng 0 dài nhất là:
- 1 0 -1 2 -2

## Bài 11: Số dãy con có tổng bằng K

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của dãy con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng dãy con có tổng bằng K trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** và **k** là kích thước của mảng và tổng cần tìm. (1 ≤ n ≤ 10<sup>6</sup>, -10<sup>18</sup> ≤ k ≤ 10<sup>18</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (-10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra số lượng dãy con có tổng bằng K trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 7 3 <br>4 1 0 -1 2 -2 3 | 4 |

**Giải thích:**

Các dãy con có tổng bằng 3 là:
- 1 0 -1 2 -2 3
- 0 -1 2 -2 3
- 2 -2 3
- 3

## Bài 12: Số dãy con có tổng chia hết cho K

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của dãy con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy đếm số lượng dãy con có tổng chia hết cho K trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** và **k** là kích thước của mảng và tổng cần tìm. (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ k ≤ 10<sup>9</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (0</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra số lượng dãy con có tổng chia hết cho K trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 7 5 <br>4 1 4 6 10 1 9 | 10 |

**Giải thích:**

Các dãy con có tổng chia hết cho 5 là:
- 4 1
- 4 1 4 6
- 4 1 4 6 10
- 4 1 4 6 10 1 9
- 1 4
- 4 6
- 4 6 10
- 4 6 10 1 9
- 10
- 10 1 9

## Bài 13: Dãy con có tổng chia hết cho K dài nhất

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là tổng các phần tử từ chỉ số **l** đến chỉ số **r** trong mảng. Tổng của dãy con này là **a[l] + a[l+1] + ... + a[r]**.

Cho một mảng số nguyên dương, hãy tìm độ dài của dãy con có tổng chia hết cho K trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** và **k** là kích thước của mảng và tổng cần tìm. (1 ≤ n ≤ 10<sup>6</sup>, 1 ≤ k ≤ 10<sup>9</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (0</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra độ dài của dãy con có tổng chia hết cho K trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 7 5 <br>11 1 4 6 10 1 9 | 6 |


## Bài 14: Đếm dãy con có số lượng số chẵn và số lẻ bằng nhau

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là các số **a[l], a[l+1], ... ,a[r]**.

Hãy đếm số lượng dãy con có số lượng số chẵn và số lẻ bằng nhau trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>9</sup>)

*Đầu ra:*

- In ra số lượng dãy con có số lượng số chẵn và số lẻ bằng nhau trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 6 <br>1 2 2 3 8 5 | 7 |

Các dãy con có số lượng số chẵn và số lẻ bằng nhau là:

- 1 2
- 2 3
- 3 8
- 8 5
- 1 2 2 3
- 2 3 8 5
- 1 2 2 3 8 5

## Bài 15: Đếm dãy con có số lượng số nguyên âm và số dương bằng nhau

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là các số **a[l], a[l+1], ... ,a[r]**.

Hãy đếm số lượng dãy con có số lượng số nguyên âm và số dương bằng nhau trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (-10<sup>9</sup> ≤ a[i] ≤ 10<sup>9</sup>)

**Đầu ra:**

- In ra số lượng dãy con có số lượng số nguyên âm và số dương bằng nhau trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br>1 -2 -3 4 5 | 4 |

Các dãy con có số lượng số nguyên âm và số dương bằng nhau là:

- 1 -2
- -3 4
- 1 -2 -3 4
- -2 -3 4 5

## Bài 16: Đếm dãy con có số lượng số tố và số chính phương bằng nhau

Một dãy con từ **l** đến **r** của mảng **a** được định nghĩa là các số **a[l], a[l+1], ... ,a[r]**.

Hãy đếm số lượng dãy con có số lượng số nguyên tố và số chính phương bằng nhau trong mảng.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của mảng. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của mảng. (1 ≤ a[i] ≤ 10<sup>6</sup>)

**Đầu ra:**

- In ra số lượng dãy con có số lượng số nguyên tố và số chính phương bằng nhau trong mảng.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 5 <br>1 2 3 4 5 | 5 |

Các dãy con có số lượng số nguyên tố và số chính phương bằng nhau là:

- 1 2
- 2 3
- 3 4
- 4 5
- 1 2 3 4

## Bài 17: Danh sách điểm số

Một danh sách tập hợp các số nguyên dương được định nghĩa là danh sách điểm số. Các điểm số sẽ là các số nguyên từ 0 đến 10.

Cho một danh sách điểm số gồm **n** số nguyên dương từ 0 đến 10. Hãy tìm điểm số nào xuất hiện nhiều nhất trong danh sách từ khoảng **l** đến **r**. Nếu có nhiều điểm số xuất hiện nhiều nhất, hãy in ra điểm số lớn nhất trong số đó.

**Đầu vào:**

- Dòng đầu tiên chứa số nguyên dương **n** là kích thước của danh sách điểm số. (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa **n** số nguyên dương **a[i]** là các phần tử của danh sách điểm số. (0 ≤ a[i] ≤ 10)
- Dòng thứ ba chứa số nguyên dương **q** là số lượng truy vấn. (1 ≤ q ≤ 10<sup>6</sup>)
- **q** dòng tiếp theo, mỗi dòng là một cặp **l** và **r** là các chỉ số của đoạn con mà bạn cần tìm điểm số xuất hiện nhiều nhất. (1 ≤ l ≤ r ≤ n)

**Đầu ra:**

- Với mỗi truy vấn, in ra điểm số xuất hiện nhiều nhất trong đoạn con từ **l** đến **r** trong danh sách điểm số. Nếu có nhiều điểm số xuất hiện nhiều nhất, hãy in ra điểm số lớn nhất trong số đó.

**Ví dụ:**

| Đầu vào | Đầu ra |
| :------- | :------- |
| 13 <br>1 1 1 2 3 2 2 3 4 10 10 3 9 <br>3 <br>1 10 <br>1 6 <br>2 13 | 2 <br>1 <br>3 |









