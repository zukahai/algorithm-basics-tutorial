# Cặp số bằng nhau

Cho một dãy số nguyên, hãy dếm xem trong dãy có bao cặp số a<sub>i</sub>, a<sub>j</sub> sao cho a<sub>i</sub> = a<sub>j</sub> và i < j.

**Input**

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (1 ≤ |a<sub>i</sub>| ≤ 10<sup>9</sup>).

**Output**

In ra số lượng cặp số thoả mãn yêu câu đề bài.

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 5 <br> 4 4 2 4 2 | 4 |

**Chú thích:**

Có 4 cặp số

- a<sub>0</sub> = a<sub>1</sub> = 4
- a<sub>0</sub> = a<sub>3</sub> = 4
- a<sub>1</sub> = a<sub>3</sub> = 4
- a<sub>2</sub> = a<sub>4</sub> = 2

**Ràng buộc**

- Có 50% số test có n ≤ 1000.
- Có 50% số test khác có n ≤ 10<sup>6</sup>.

# Tổng bằng S

Cho một dãy số nguyên, hãy tìm xem có bao nhiêu cặp số a<sub>i</sub>, a<sub>j</sub> sao cho a<sub>i</sub> + a<sub>j</sub> = S. (i < j)

**Input**

Dòng đầu tiên chứa 2 số nguyên n và S (1 ≤ n ≤ 10<sup>6</sup>, -10<sup>9</sup> ≤ S ≤ 10<sup>9</sup>).

Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (-10<sup>9</sup> ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output**

In ra số lượng cặp số thoả mãn

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 5 5 <br> 1 2 3 4 5 | 2 |

**Chú thích:**

Có 2 cặp số

- a<sub>0</sub> + a<sub>3</sub> = 1 + 4 = 5
- a<sub>1</sub> + a<sub>2</sub> = 2 + 3 = 5

**Ràng buộc**

- Có 50% số test có n ≤ 1000.
- Có 50% số test khác có n ≤ 10<sup>6</sup>.

# Tổng chia hết cho 3

Cho một dãy số nguyên, hãy tìm xem có bao nhiêu cặp số a<sub>i</sub>, a<sub>j</sub> sao cho a<sub>i</sub> + a<sub>j</sub> chia hết cho 3. (i < j)

**Input**

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (0 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output**

In ra số lượng cặp số thoả mãn

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 6 <br> 1 2 3 4 5 6| 5 |

**Chú thích:**

Có 5 cặp số

- a<sub>0</sub> + a<sub>1</sub> = 1 + 2 = 3
- a<sub>0</sub> + a<sub>4</sub> = 1 + 5 = 6
- a<sub>1</sub> + a<sub>2</sub> = 2 + 3 = 5
- a<sub>2</sub> + a<sub>5</sub> = 3 + 6 = 9
- a<sub>3</sub> + a<sub>4</sub> = 4 + 5 = 9

**Ràng buộc**

- Có 50% số test có n ≤ 1000.
- Có 50% số test khác có n ≤ 10<sup>6</sup>.

# Số nguyên dương còn thiếu

Cho một dãy số nguyên dương, hãy tìm số nguyên dương nhỏ nhất không xuất hiện trong dãy.

**Input**

Dòng đầu tiên chứa một số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).

Dòng thứ hai chứa n số nguyên a<sub>0</sub>, a<sub>1</sub>, ..., a<sub>n-1</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

**Output**

In ra số nguyên dương nhỏ nhất không xuất hiện trong dãy.

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 6 <br> 1 3 3 6 2 6 | 4 |

**Chú thích:**

Số nguyên dương nhỏ nhất không xuất hiện trong dãy là 4.

**Ràng buộc**

- Có 50% số test có n ≤ 1000.
- Có 50% số test khác có n ≤ 10<sup>6</sup>.

# Số xuất hiện

Cho dãy a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> và dãy b<sub>1</sub>, b<sub>2</sub>, ..., b<sub>m</sub>. Hãy đếm xem có bao nhiêu số trong dãy b xuất hiện trong dãy a.

**Input**

Dòng đầu tiên chứa 2 số nguyên n và m (1 ≤ n, m ≤ 10<sup>6</sup>).

Dòng thứ hai chứa n số nguyên a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>).

Dòng thứ ba chứa m số nguyên b<sub>1</sub>, b<sub>2</sub>, ..., b<sub>m</sub> (1 ≤ b<sub>i</sub> ≤ 10<sup>9</sup>).

**Output**

In ra số lượng số trong dãy b xuất hiện trong dãy a.

**Ví dụ**

| Input | Output |
| :--- | :--- |
| 5 3 <br> 1 2 3 4 5 <br> 1 3 7 | 2 |

**Chú thích:**

Có 2 số trong dãy b xuất hiện trong dãy a là 1 và 3.

**Ràng buộc**


- Có 70% số test có n, m ≤ 1000.
- Có 30% số test khác có n, m ≤ 10<sup>6</sup>.


