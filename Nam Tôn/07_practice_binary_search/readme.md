## Bài 1

Cho 2 mảng số nguyên a và b. Đếm xem có bao nhiều phần tử cùng xuất hiện trong mảng a và b.

Ví dụ:

- Với a = [1, 2, 3, 4] và b = [3, 4, 5, 6], thì kết quả count_same_elements(a, b) = 2.

- Với a = [1, 2, 3] và b = [4, 5, 6], thì kết quả count_same_elements(a, b) = 0.

## Bài 2

Một công ty sữa có khuyến mãi như sau:
- Nếu mua ít hơn 10 hộp sữa thì không được tặng.
- Nếu mua nhiều hơn hoặc bằng 10 hợp sữa thì cứ mua 5 hộp sẽ được tặng 1 hộp sữa.
- Nếu mua nhiều hơn 100 hộp sữa thì cứ mua 3 hộp sẽ được tặng 1 hộp sữa.
- Nếu mua nhiều hơn 1000 hộp sữa thì cứ mua 2 hộp sẽ được tặng 1 hộp sữa.

Hãy viết hàm tính số lượng sữa mà bạn nhận được khi mua **N** hộp sữa.

**Ví dụ:**

- Với n = 9, thì kết quả bonusMilk(n) = 9.
- Với n = 10, thì kết quả bonusMilk(n) = 12.
- Với n = 100, thì kết quả bonusMilk(n) = 133.
- Với n = 1000, thì kết quả bonusMilk(n) = 1500.
- Với n = 2001, thì kết quả bonusMilk(n) = 3001

## Bài 3

Một công ty sữa có khuyến mãi như sau:
- Nếu mua ít hơn 10 hộp sữa thì không được tặng.
- Nếu mua nhiều hơn hoặc bằng 10 hợp sữa thì cứ mua 5 hộp sẽ được tặng 1 hộp sữa.
- Nếu mua nhiều hơn hoặc bằng 100 hộp sữa thì cứ mua 3 hộp sẽ được tặng 1 hộp sữa.
- Nếu mua nhiều hơn hoặc bằng 1000 hộp sữa thì cứ mua 2 hộp sẽ được tặng 1 hộp sữa.

Bạn đang cần đủ **N** hộp sữa, hãy tính sẽ hộp sữa ít nhất bạn cần mua để đủ số lượng sữa cần thiết.

**Ví dụ:**

- Với n = 9, thì kết quả minMilk(n) = 9.
- Với n = 11, thì kết quả minMilk(n) = 10.
Bạn chỉ cần mua 10 hộp sữa, sẽ được tặng thêm 2 hộp, có tổng 12 hôp sữa.
- Với n = 200, thì kết quả minMilk(n) = 150.
Bạn chỉ cần mua 150 hộp sữa, sẽ được tặng thêm 50 hộp, có tổng 200 hộp sữa.
- Với n = 10000, thì kết quả minMilk(n) = 6667.
Bạn chỉ cần mua 6667 hộp sữa, sẽ được tặng thêm 3333 hộp, có tổng 10000 hộp sữa.
- Với n = 1234567 thì kết quả minMilk(n) = 823045.
Bạn chỉ cần mua 823045 hộp sữa, sẽ được tặng thêm 411522 hộp, có tổng 1234567 hộp sữa.

