## Bài 1: Dãy số giống nhau liên tiếp dài nhất

Cho trước dãy số nguyên **a** gồm **n** phần tử. Hãy tìm dãy con liên tiếp dài nhất trong dãy **a** sao cho tất cả các phần tử trong dãy con đó giống nhau.

*Bài này em làm rồi, nhưng em thử làm theo các ngược lại.
dp[i] sẽ là độ dài của dãy con giống nhau liên tiếp dài nhất bắt đầu tại i.
Làm theo cách này sẽ áp dụng được bài sau*

**Input**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Output**

- In ra độ dài dãy con liên tiếp dài

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 2 2 2 | 3 |

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | 5 |

```
dp[i]: Độ dài dãy con giống nhau liên tiếp dài nhất bắt đầu tại i

dp[n] = 1

For n - 1 -> 1:
    if a[i] == a[i + 1]:
        dp[i] = dp[i + 1] + 1
    else:
        dp[i] = 1

```

## Bài 2: Dãy số giống nhau liên tiếp dài nhất (phần 2)

Cho trước dãy số nguyên **a** gồm **n** phần tử. Bạn có quyền xoá nhiều nhất 1 phần tử trong dãy **a** (có thể xoá 1 phần tử hoặc không xoá). Hãy tìm dãy con liên tiếp dài nhất trong dãy **a** sao cho tất cả các phần tử trong dãy con đó giống nhau (có thể xoá 1 phần tử).

**Đầu vào**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra độ dài dãy con liên tiếp dài

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 2 1 2 2 2 | 4 |

**Giải thích:** Xoá phần tử thứ 2, ta được dãy con liên tiếp dài nhất là 2 2 2 2.

```
dp[i]: Kết thúc tại i
dp2[i]: Bắt đầu từ i

7
3 3 5 3 3 3 

dp[i - 1] + dp2[i + 1]

```

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | 5 |

**Gợi ý**

- Sử dụng mảng **dp** để lưu độ dài dãy con giống nhau liên tiếp dài nhất kết thúc tại vị trí **i**.

- Sử dụng mảng **dp2** để lưu độ dài dãy con giống nhau liên tiếp dài nhất bắt đầu từ vị trí **i**.

- Đầu tiên cứ xét trường hợp không xoá số nào, cứ xét tìm max của **dp**.

- Xét trường hợp xoá 1 số, ta sẽ xét **dp[i-1]** và **dp2[i+1]** nếu như **a[i-1] == a[i+1]**.

## Bài 3: Dãy số chẵn liên tiếp dài nhất

Cho trước dãy số nguyên **a** gồm **n** phần tử. Bạn có thể xoá nhiều nhất 1 phần tử trong dãy **a** (có thể xoá 1 phần tử hoặc không xoá). Hãy tìm dãy con liên tiếp dài nhất trong dãy **a** sao cho tất cả các phần tử trong dãy con đó là số chẵn (có thể xoá 1 phần tử).

**Đầu vào**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra độ dài dãy con liên tiếp dài

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 2 1 8 4 4 | 4 |

**Giải thích:** Xoá phần tử thứ 2, ta được dãy con liên tiếp dài nhất là 2 8 4 4.

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 1 1 1 1 | 0 |

## Bài 4: Dãy tăng dần liên tiếp dài nhất

Cho trước dãy số nguyên **a** gồm **n** phần tử. Bạn có quyền xoá nhiều nhất 1 phần tử trong dãy **a** (có thể xoá 1 phần tử hoặc không xoá). Hãy tìm dãy con liên tiếp dài nhất trong dãy **a** sao cho tất cả các phần tử trong dãy con đó tăng dần.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra độ dài dãy con liên tiếp dài

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 1 5 | 4 |

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 2 1 | 3 |

## Bài 5: Dãy tăng dần liên tiếp dài nhất (phần 2)

Cho trước dãy số nguyên **a** gồm **n** phần tử. Bạn có quyền xoá nhiều nhất 1 phần tử trong dãy **a** (có thể xoá 1 phần tử hoặc không xoá). Hãy tìm dãy con liên tiếp dài nhất trong dãy **a** sao cho tất cả các phần tử trong dãy con đó tăng dần. Đưa ra dãy con dài nhất có thể, nếu có nhiều dãy con cùng độ dài thì in ra dãy con có số nhỏ nhất.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra dãy con liên tiếp dài nhất

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 1 5 | 1 2 3 5|

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 2 1 | 1 2 3 |

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 4 5 | 1 2 3 4 5 |

## Bài 6: Dãy con tăng dần dài nhất

Cho trước dãy số nguyên **a** gồm **n** phần tử. Hỏi bạn cần xoá in nhất bao nhiêu phần tử để dãy con còn lại là dãy tăng dần.

**Đầu vào**

- Dòng đầu tiên chứa số nguyên **n** (1 ≤ **n** ≤ 10<sup>6</sup>),

- Dòng thứ hai chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>).

**Đầu ra**

- In ra số lượng phần tử cần xoá

**Ví dụ**

**Ví dụ 1**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 3 1 5 | 1 |

**Giải thích:** Xoá phần tử thứ 4, ta được dãy con tăng dần dài nhất là 1 2 3 5.

**Ví dụ 2**

| Input | Output |
|:-------|:--------|
| 5 <br> 1 0 3 8 1 | 2 |

**Giải thích:** một trong những cách xoá đó là xoá phần tử thứ 2 và 5, ta được dãy con tăng dần dài nhất là 1 3 8.

**Ví dụ 3**

| Input | Output |
|:-------|:--------|
| 5 <br> 5 4 3 2 1 | 4 |

