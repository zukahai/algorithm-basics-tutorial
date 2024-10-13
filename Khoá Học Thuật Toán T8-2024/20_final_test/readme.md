# Chiêu mộ tân binh

Thời xa xưa, đa phần mỗi tướng quân đều có một đội quân riêng, và việc chiêu mộ tân binh là một trong những việc quan trọng nhất của họ. Mỗi tướng quân đều muốn có được những tân binh tốt nhất, những người có khả năng chiến đấu tốt nhất, và đương nhiên, họ cũng muốn có được nhiều tân binh nhất có thể.

Mỗi bình lính sẽ mang một con số riêng biệt. Biết rằng một binh lính **x** có thể tự chiêu mộ một binh lính **y** gia nhập quân đội nếu như **x** chia hết cho **y** (không tính chính nó). Ví dụ, binh lính 6 có thể chiêu mộ binh lính 3, nhưng binh lính 4 thì không thể chiêu mộ binh lính 5.

Tướng quân VKU đang có trong tay **n** binh lính, và muốn chiêu mộ thêm nhiều binh lính nhất có thể. Tương quân đã ra lệnh cho mỗi binh lính hiện tại của mình tự chiêu mộ thêm tất cả những binh lính mà nó có thể chiêu mộ, đương nhiên những binh lính mới chiêu mộ được cũng có thể chiêu mộ tiếp. Hãy giúp tướng quân VKU xác định số lượng quân lính tối đa mà ông ta có thể có được.

**Dữ liệu**: Vào từ thiết bị nhập chuẩn:

- Dòng đầu tiên chứa một số nguyên **n** (1 ≤ **n** ≤ 10<sub>2</sub>),
- Dòng thứ 2 chứa **n** số nguyên **a<sub>1</sub>, a<sub>2</sub>, . . ., a<sub>n</sub>** (1 ≤ **a<sub>i</sub>** ≤ 10<sub>9</sub>, **i** = 1 ÷ **n**).

**Kết quả**: Đưa ra thiết bị xuất chuẩn một số nguyên – số lượng binh lính lớn nhất có thể có được.

**Ví dụ**:

| Input | Output |
|:-------|:--------|
| 3 <br> 6 12 5 | 7 |

**Giải thích**:

- Ban đầu tướng quân VKU có 3 binh lính với sức mạnh lần lượt là 6, 12 và 5.
- Binh lính 6 có thể chiêu mộ thêm 3 bình lính chưa có đó là 1, 2 và 3. Đội quân hiện tại là 6, 12, 5, 1, 2, 3.
- Binh lính 12 không thể chiêu mộ thêm ai.
- Binh lính 5 có thể chiêu mộ thêm 1 binh lính là 5. Đội quân hiện tại là 6, 12, 5, 1, 2, 3, 5.
- Tất cả 7 binh lính đều không thể chiêu mộ thêm ai nữa.

## Substack

- 40% số test có 1 ≤ **a[i]** ≤ 10<sub>4</sub>,
- 60% số test còn lại không có giới hạn gì thêm.