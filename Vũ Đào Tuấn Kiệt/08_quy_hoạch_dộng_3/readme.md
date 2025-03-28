## Bài 1: Dãy số cùng tính chất chẵn lẻ

Cho một dãy số nguyên a1, a2, ..., an.<br>
Xác định dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chẵn hoặc toàn số lẻ. Nếu có nhiều dãy con thỏa mãn, in ra dãy con có chỉ số bắt đầu nhỏ nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chẵn hoặc toàn số lẻ.<br>

### Ví dụ

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 6<br> 1 2 4 8 6 11 | 2 4 8 6|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 8<br> 3 4 4 4 5 5 7 5| 5 5 7 5|

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5<br> 1 2 4 3 5 | 2 4|


## Bài 2: Dãy số nguyên tố

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp dài nhất sao cho dãy con đó toàn số nguyên tố. Nếu không có dãy con nào thì in ra -1.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó toàn số nguyên tố.<br>

### Ví dụ

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 6<br> 1 2 3 7 6 11 | 2 3 7|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 8<br> 2 4 4 4 5 5 5 5| 5 5 5 5|

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5<br> 1 6 4 9 50 | -1|

## Bài 3: Dãy chính phương tăng dần

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chính phương và dãy con đó tăng dần. Nếu không có dãy con nào thì in ra -1.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó toàn số chính phương và dãy con đó tăng dần.<br>

### Ví dụ

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 6<br> 1 4 16 7 6 11 | 1 4 16|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 8<br> 2 4 16 49 5 5 5 5| 4 16 49|

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5<br> 1 6 40 99 50 | -1|

## Bài 4: Dãy số có cùng số lượng chữ số

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp dài nhất sao cho dãy con đó toàn số có cùng số lượng chữ số. Ví dụ 123 và 456 có cùng số lượng chữ số. 

Nếu có nhiều dãy con thỏa mãn thì in ra dãy con có chỉ số bắt đầu nhỏ nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br> 

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó toàn số có cùng số lượng chữ số.<br>

### Ví dụ

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 6<br> 1 2 4 8 23 11 | 1 2 4 8|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 6<br> 2 4 42 32 43 5| 42 32 43|

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5<br> 8 21 234 4567 67678 | 8|

## Bài 5 : Dãy cấp số cộng dài nhất

Cho một dãy số nguyên a1, a2, ..., an.<br>

Xác định dãy con liên tiếp dài nhất sao cho dãy con đó là dãy cấp số cộng.

*Dãy cấp số cộng là dãy số mà hiệu giữa 2 số liên tiếp bất kỳ trong dãy là một hằng số.*

Nếu có nhiều dãy con thì in ra dãy con có chỉ số bắt đầu nhỏ nhất.

**Input**<br>

Dòng đầu tiên chứa số nguyên n (1 ≤ n ≤ 10<sup>6</sup>).<br>

Dòng thứ hai chứa n số nguyên a1, a2, ..., an (-10<sup>9</sup> ≤ ai ≤ 10<sup>9</sup>).<br>

**Output**<br>

Dãy con liên tiếp dài nhất sao cho dãy con đó là dãy cấp số cộng.<br>

### Ví dụ

**Ví dụ 1:**

| Input | Output |
|:-------|:--------|
| 5<br> 1 2 4 6 7 | 2 4 6|

**Ví dụ 2:**

| Input | Output |
|:-------|:--------|
| 6<br> 2 4 6 8 10 12| 2 4 6 8 10 12|

**Ví dụ 3:**

| Input | Output |
|:-------|:--------|
| 5<br> 1 2 4 7 10 | 4 7 10|

