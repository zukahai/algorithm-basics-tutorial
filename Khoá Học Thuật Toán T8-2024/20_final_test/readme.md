# Chiêu mô tân binh

Thời xa xưa, đa phần mỗi tướng quân đều có một đội quân riêng, và việc chiêu mộ tân binh là một trong những việc quan trọng nhất của họ. Mỗi tướng quân đều muốn có được những tân binh tốt nhất, những người có khả năng chiến đấu tốt nhất, và đương nhiên, họ cũng muốn có được nhiều tân binh nhất có thể.

Mỗi bình lính sẽ mang một con số riêng biệt. Biết rằng một binh lính **x** có thể tự chiêu mộ một binh lính **y** gia nhập quân đội nếu như **x** chia hết cho **y** (không tính chính nó). Ví dụ, binh lính 6 có thể chiêu mộ binh lính 3, nhưng binh lính 4 thì không thể chiêu mộ binh lính 5.

Tướng quân VKU đang có trong tay **n** binh lính, và muốn chiêu mộ thêm nhiều binh lính nhất có thể. Tương quân đã ra lệnh cho mỗi binh lính hiện tại của mình tự chiêu mộ thêm tất cả những binh lính mà nó có thể chiêu mộ, đương nhiên những binh lính mới chiêu mộ được cũng có thể chiêu mộ tiếp. Hãy giúp tướng quân VKU xác định số lượng quân lính tối đa mà ông ta có thể có được.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:

- Dòng đầu tiên chứa một số nguyên **n** (1 ≤ **n** ≤ 10<sup>2</sup>),
- Dòng thứ 2 chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, . . ., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>, **i** = 1 ÷ **n**).

**Kết quả**: Đưa ra thiết bị xuất chuẩn một số nguyên – số lượng binh lính lớn nhất có thể có được.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 3 <br> 6 12 5 | 7 |

**Giải thích**:

- Ban đầu tướng quân VKU có 3 binh lính với sức mạnh lần lượt là 6, 12 và 5.
- Binh lính 6 có thể chiêu mộ thêm 3 bình lính chưa có đó là 1, 2 và 3. Đội quân hiện tại là 6, 12, 5, 1, 2, 3.
- Binh lính 12 có thể chiêu mộ thêm 4, Đội quân hiện tại là 6, 12, 5, 1, 2, 3, 4.
- Tất cả 7 binh lính đều không thể chiêu mộ thêm ai nữa.

## Substack

- 40% số test có 1 ≤ **a[i]** ≤ 10<sup>4</sup>,
- 60% số test còn lại không có giới hạn gì thêm.

# Trò chơi rút số

Trong thời gian rảnh rỗi, Hải và Linh chơi một trò chơi rút số. Luật chơi như sau:

- Ban đầu, sẽ có một số nguyên dương **N**. Khi rút được số **x**, số **N** sẽ giảm đi **x**.

- Hai người chơi sẽ luân phiên rút một số nguyên dương **x**, trong đó **x** là một chữ số của số **N** hiện tại, và **x** > 0. Ví dụ, nếu **N** = 1203 thì **x** có thể là 1, 2 hoặc 3.

- Người chơi nào rút về số 0 sẽ thắng.

Hải và Linh đều chơi tối ưu, tức là cả hai đều sẽ chơi sao cho có cơ hội thắng cao nhất. Hãy xác định người chiến thắng, biết rằng Hải sẽ chơi trước.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **N** (1 ≤ **N** ≤ 10<sup>6</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn tên người chiến thắng: `Hai` hoặc `Linh`.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 10   | Linh    |

**Giải thích**:

- Hải chỉ có thể rút 1, **N** giảm còn 9. Linh rút 9, **N** giảm còn 0. Linh thắng.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 11   | Hải    |

## Substack

- 40% số test có 1 ≤ **N** ≤ 10<sup>3</sup>,
- 60% số test còn lại không có giới hạn gì thêm.


# Số siêu nguyên tố gần nhất

Số siêu nguyên tố là số nguyên tố mà khi xóa các chữ số từ phải qua trái, ta vẫn được một số nguyên tố. Ví dụ, số 2333 là số siêu nguyên tố vì 2333, 233, 23, 2 đều là số nguyên tố.

Cho một số số nguyên dương **n**, Tìm số siêu nguyên tố gần nhất lớn hơn **n**. Nếu có nhiều số thì đưa ra số nhỏ nhất.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm một số nguyên **n** (1 ≤ **n** ≤ 10<sup>18</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn số siêu nguyên tố lớn hơn **n**.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 2337 | 2339 |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 26 | 23 29 |

## Substack

- 40% số test có 1 ≤ **n** ≤ 10<sup>5</sup>,
- 60% số test còn lại không có giới hạn gì thêm.

# Số lượng ô vuông

Hải rất thích hình học, và anh ta đang nghiên cứu về các hình vuông. Hải đặt một bảng hình vuông kích thước **n** x **n** (n hàng, mỗi hàng có n ô vuông). Hải muốn biết có bao nhiêu hình vuông trên bảng này.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm hai số nguyên **n** và **m** (1 ≤ **n** ≤ 10<sup>18</sup>, 1 ≤ **m** ≤ 10<sup>18</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn số lượng hình vuông trên bảng. Kết quả có thể rất lớn, nên chỉ cần đưa ra phần dư của kết quả khi chia cho 10<sup>9</sup> + 7.

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 2 3 | 8 |

**Giải thích**:

<p align="center">
  <img src="https://i.imgur.com/rlnmdPz.png" alt="image"   />

</p>

Có tất cả 6 hình vuông nhỏ 1x1 và 2 hình vuông cỡ 2x2.

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 3 3 | 14 |

## Substack

- 40% số test có 1 ≤ **n, m** ≤ 10<sup>5</sup>,
- 60% số test còn lại không có giới hạn gì thêm.

# Số chẵn lẻ

Số chẵn lẻ là số mà 2 chữ số liên tiếp trong số đó không cùng chẵn hoặc cùng lẻ. Ví dụ, 1238, 250, 12121,... là số chẵn lẻ.

Hãy đếm xem trong đoạn từ **a** đến **b** có bao nhiêu số chẵn lẻ.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn gồm hai số nguyên **a** và **b** (1 ≤ **a** ≤ **b** ≤ 10<sup>9</sup>).

**Kết quả**: Đưa ra thiết bị xuất chuẩn số lượng số chẵn lẻ trong đoạn từ **a** đến **b**.

**Ví dụ**:


| Input | Output |
|:-------|:--------|
| 8 15 | 5 |

Có 5 số chẵn lẻ là 8, 9, 10, 12, 14

## Substack

- 40% số test có 1 ≤ **a, b** ≤ 10<sup>5</sup>,
- 60% số test còn lại không có giới hạn gì thêm.

# Dãy số đơn điệu

Cho dãy số **a<sub>1</sub>, a<sub>2</sub>, . . ., a<sub>n</sub>**. Ta gọi dãy số này là đơn điệu tăng nếu **a<sub>1</sub>** ≤ **a<sub>2</sub>** ≤ . . . ≤ **a<sub>n</sub>**, và đơn điệu giảm nếu **a<sub>1</sub>** ≥ **a<sub>2</sub>** ≥ . . . ≥ **a<sub>n</sub>**.

Hãy kiểm tra xem dãy số đã cho có phải là đơn điệu tăng hay đơn điệu giảm hay không.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:

- Dòng đầu tiên chứa một số nguyên **n** (1 ≤ **n** ≤ 10<sup>5</sup>),
- Dòng thứ 2 chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, . . ., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sup>9</sup>, **i** = 1 ÷ **n**).

**Kết quả**: Đưa ra thiết bị xuất chuẩn một dòng chứa chuỗi `YES` nếu dãy số đã cho là đơn điệu tăng hoặc đơn điệu giảm, `NO` nếu không.

**Ví dụ**:

**Ví dụ 1**:

| Input | Output |
|:-------|:--------|
| 5 <br> 1 2 4 4 7 | YES |

**Ví dụ 2**:

| Input | Output |
|:-------|:--------|
| 5 <br> 9 4 2 1 -4 | YES |

**Ví dụ 3**:

| Input | Output |
|:-------|:--------|
| 5 <br> 3 5 2 1 6 | NO |

