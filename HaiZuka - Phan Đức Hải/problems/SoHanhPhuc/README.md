# Số hạnh phúc

Bạn có thể biến đổi số **N** thành tổng bình phương các chữ số của nó. Ví dụ: 19 -> 1<sup>2</sup> + 9<sup>2</sup> = 82. Bạn có thể lặp lại vô hạn quá trình này. Nếu sau một số bước nào đó bạn nhận được số 1, bạn gọi số **N** là số hạnh phúc. Nếu không, bạn gọi số **N** là số bất hạnh.

Ví dụ 19 là số hạnh phúc vì 1<sup>2</sup> + 9<sup>2</sup> = 82, 8<sup>2</sup> + 2<sup>2</sup> = 68, 6<sup>2</sup> + 8<sup>2</sup> = 100, 1<sup>2</sup> + 0<sup>2</sup> + 0<sup>2</sup> = 1.

Hãy đếm số lượng số hạnh phúc nằm trong khoảng **a** đến **b**.

**Dữ liệu**:

- Dòng đầu là số nguyên **T** (1 ≤ **T** ≤ 10<sup>5</sup>) – số lượng test.
- Mỗi test gồm 2 số nguyên **a**, **b** (1 ≤ **a** ≤ **b** ≤ 10<sup>7</sup>).

**Kết quả**:

- Với mỗi test, in ra số lượng số hạnh phúc nằm trong khoảng **a** đến **b**.

## Ví dụ

### Đầu vào

```
3
1 7
5 10
1 20
```
### Đầu ra

```
2
2
5
```