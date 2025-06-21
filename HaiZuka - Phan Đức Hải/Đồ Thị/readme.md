# Đường đi giữa 2 thành phố

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Hãy kiểm tra xem có đường đi giữa 2 thành phố a và b hay không. Một đường đi có thể đi qua nhiều thành phố khác nhau. Nghĩa là từ a có thể đi đến b thông qua một số thành phố khác. Ví dụ: a -> x -> y -> b. Hãy kiểm tra xem có đường đi giữa 2 thành phố a và b hay không. Nếu có hãy in ra YES, nếu không có hãy in ra NO.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 1000) là số thành phố.
- Dòng thứ 2 là hai số nguyên a, b (1 ≤ a, b ≤ n) là hai thành phố cần kiểm tra.
- Dòng thứ 3 là số nguyên m (1 ≤ m ≤ 100000) là số đường đi giữa các thành phố.
- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng. Đường đi giữa 2 thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Nếu có đường đi giữa 2 thành phố thì in ra YES, nếu không có thì in ra NO.

**Đầu ra:**

- Nếu có đường đi giữa 2 thành phố a và b thì in ra YES, nếu không có thì in ra NO.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 1 4 <br> 8 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10| YES |

Có đoạn đường đi từ 1 đến 4 là 1 ->  3 -> 6 -> 4

**Ví dụ 2:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 3 8 <br> 8 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10| NO |

Không có đường đi từ 3 đến 8

# N thành phố liên thông

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Hãy kiểm tra xem tất cả các thành phố có liên thông với nhau hay không, nghĩa là từ bất kỳ thành phố nào cũng có thể đến được tất cả các thành phố khác. Nếu tất cả các thành phố đều liên thông với nhau thì in ra YES, nếu không thì in ra NO.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 1000) là số thành phố.
- Dòng thứ 2 là số nguyên m (1 ≤ m ≤ 100000) là số đường đi giữa các thành phố.

- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng. Đường đi giữa 2 thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Nếu tất cả các thành phố đều liên thông với nhau thì in ra YES, nếu không thì in ra NO.

**Đầu ra:**
- Nếu tất cả các thành phố đều liên thông với nhau thì in ra YES, nếu không thì in ra NO.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 8 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10| NO |

Không phải tất cả các thành phố đều liên thông với nhau. Có những thành phố không đi được đến với nhau ví dụ giữa 3 và 8

**Ví dụ 2:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 10 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10 <br> 3 2 <br> 10 7| YES |

# Mở rộng các đoạn đường trong thành phố

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Một hòn đảo được coi là lên thông khi giữa 2 thành phố bất kỳ đều có đường đi. Tuy nhiên, trong một số trường hợp, giữa 2 thành phố không có đường đi. Tính toán xem cần mở rộng ít nhất bao nhiêu đoạn đường để tất cả các thành phố đều liên thông với nhau. Một đoạn đường được coi là mở rộng khi có thể đi từ thành phố a đến b và ngược lại.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 1000) là số thành phố.
- Dòng thứ 2 là số nguyên m (1 ≤ m ≤ 100000) là số đường đi giữa các thành phố.
- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng. Đường đi giữa 2 thành phố a và b có thể đi theo chiều x -> y hoặc y -> x. Nếu tất cả các thành phố đều liên thông với nhau thì in ra YES, nếu không thì in ra NO.

**Đầu ra:**

- In ra số đoạn đường ít nhất cần mở rộng để tất cả các thành phố đều liên thông với nhau.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 8 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10| 2 |

Có thể mở 2 đoạn đường để tất cả các thành phố đều liên thông với nhau là:

- 3 -> 2
- 10 -> 7

**Ví dụ 2:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|10<br> 10 <br> 1 3 <br> 5 3 <br> 4 6 <br> 3 6 <br> 2 8 <br> 9 7 <br> 2 10 <br> 8 10 <br> 3 2 <br> 10 7| 0 |

Tất cả các thành phố đều liên thông với nhau nên không cần mở thêm đoạn đường nào.

# Đường đi dài nhất giữa 2 thành phố

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố x và y có thể đi theo chiều x -> y hoặc y -> x. Hãy tìm đường đi dài nhất giữa 2 thành phố a và b. Một đường đi có thể đi qua nhiều thành phố khác nhau. Nghĩa là từ a có thể đi đến b thông qua một số thành phố khác. Ví dụ: a -> x -> y -> b. Hãy tìm đường đi dài nhất giữa 2 thành phố a và b, mỗi thành phố chỉ được đi qua một lần. Nếu không có đường đi thì in ra -1.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 1000) là số thành phố.
- Dòng thứ 2 là hai số nguyên a, b (1 ≤ a, b ≤ n) là hai thành phố cần kiểm tra.
- Dòng thứ 3 là số nguyên m (1 ≤ m ≤ 100000) là số đường đi giữa các thành phố.
- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng.

**Đầu ra:**

- In ra độ dài của đường đi dài nhất giữa 2 thành phố a và b (Số lượng thành phố đã đi qua từ a đến b). Nếu không có đường đi thì in ra -1.

**Ví dụ:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|7 <br> 7 3 <br> 10 <br> 2 4<br> 5 7 <br> 6 2 <br> 4 1 <br> 1 7 <br> 3 7 <br> 6 3 <br> 3 2 <br> 4 5<br> 5 3| 6|

Đường đi dài nhất từ 7 đến 3 là 7 -> 1 -> 4 -> 2 -> 6 -> 3. Số lượng thành phố đã đi qua là 6.

# Số đường đi giữa 2 thành phố

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố x và y có thể đi theo chiều x -> y hoặc y -> x. Hãy tìm số lượng đường đi giữa 2 thành phố a và b. Một đường đi có thể đi qua nhiều thành phố khác nhau. Nghĩa là từ a có thể đi đến b thông qua một số thành phố khác. Ví dụ: a -> x -> y -> b. Hãy tìm số lượng đường đi giữa 2 thành phố a và b. Hai đường đi được coi là khác nhau nếu chúng đi qua các thành phố khác nhau. Nếu không có đường đi thì in ra 0.


**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 20) là số thành phố.
- Dòng thứ 2 là hai số nguyên a, b (1 ≤ a, b ≤ n) là hai thành phố cần kiểm tra.
- Dòng thứ 3 là số nguyên m (1 ≤ m ≤ n * (n - 1) / 2) là số đường đi giữa các thành phố.
- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng.

**Đầu ra:**

- In ra số lượng đường đi giữa 2 thành phố a và b. Nếu không có đường đi thì in ra 0.

**Ví dụ:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|7 <br> 7 3 <br> 10 <br> 2 4<br> 5 7 <br> 6 2 <br> 4 1 <br> 1 7 <br> 3 7 <br> 6 3 <br> 3 2 <br> 4 5<br> 5 3| 7|

Có 7 đường đi từ 7 đến 3 là:
- 7 -> 3
- 7 -> 5 -> 3
- 7 -> 5 -> 4 -> 2 -> 3
- 7 -> 5 -> 4 -> 2 -> 6 -> 3
- 7 -> 1 -> 4 -> 5 -> 3
- 7 -> 1 -> 4 -> 2 -> 3
- 7 -> 1 -> 4 -> 2 -> 6 -> 3

# Chuyến du lịch đặc biệt

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố x và y có thể đi theo chiều x -> y hoặc y -> x. Một chuyển du lịch đặc biệt là một chuyến du lịch mà trong bạn có thể đi qua tất các các thành phố trên hòn , mỗi thành phố chỉ đi qua đúng 1 lần. Hãy kiểm tra xem có chuyến du lịch đặc biệt hay không. Nếu có chuyến du lịch đặc biệt thì in ra YES, nếu không thì in ra NO.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 10) là số thành phố.
- Dòng thứ 2 là số nguyên m (1 ≤ m ≤ n * (n - 1) / 2) là số đường đi giữa các thành phố.

- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng.

**Đầu ra:**

- Nếu có chuyến du lịch đặc biệt thì in ra YES, nếu không thì in ra NO.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|7 <br> 7 3 <br> 10 <br> 2 4<br> 5 7 <br> 6 2 <br> 4 1 <br> 1 7 <br> 3 7 <br> 6 3 <br> 3 2 <br> 4 5<br> 5 3| YES|

Bạn có thể đi qua tất cả các thành phố trên hòn đảo bằng chuyến du lịch 7 -> 1 -> 4 -> 2 -> 6 -> 3 -> 5.

**Ví dụ 2:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|4 <br> 3 <br> 3 1 <br> 3 4 <br> 2 3| NO |

**Ví dụ 3:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|4 <br> 4 <br> 3 1 <br> 1 2 <br> 4 1 <br> 2 4| YES |

Có thể đi qua tất cả các thành phố trên hòn đảo bằng chuyến du lịch 3 -> 1 -> 4 -> 2.

# Chuyến du lịch để về nhà

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố x và y có thể đi theo chiều x -> y hoặc y -> x. Một chuyến du lịch để về nhà là một chuyến du lịch mà trong bạn có thể đi qua tất các các thành phố trên hòn đảo, mỗi thành phố chỉ đi qua đúng 1 lần và **kết thúc tại thành phố đầu tiên**. Hãy kiểm tra xem có chuyến du lịch để về nhà hay không. Nếu có chuyến du lịch để về nhà thì in ra YES, nếu không thì in ra NO.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 10) là số thành phố.
- Dòng thứ 2 là số nguyên m (1 ≤ m ≤ n * (n - 1) / 2) là số đường đi giữa các thành phố.
- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng.

**Đầu ra:**

- Nếu có chuyến du lịch để về nhà thì in ra YES, nếu không thì in ra NO.

**Ví dụ 1:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|7 <br> 7 3 <br> 10 <br> 2 4<br> 5 7 <br> 6 2 <br> 4 1 <br> 1 7 <br> 3 7 <br> 6 3 <br> 3 2 <br> 4 5<br> 5 3| YES|

Bạn có thể đi qua tất cả các thành phố trên hòn đảo bằng chuyến du lịch 7 -> 1 -> 4 -> 2 -> 6 -> 3 -> 5.

**Ví dụ 2:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|4 <br> 3 <br> 3 1 <br> 3 4 <br> 2 3| NO |

**Ví dụ 3:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|4 <br> 4 <br> 3 1 <br> 1 2 <br> 4 1 <br> 2 4| NO |

# Đường đi ngắn nhất giữa 2 thành phố

Trong một một hòn đảo có n thành phố được đánh số từ 1 đến n. Ở giữa 2 thành phố có thể có đường đi hoặc không. Đường đi giữa hai thành phố x và y có thể đi theo chiều x -> y hoặc y -> x. Hãy tìm đường đi ngắn nhất giữa 2 thành phố a và b. Một đường đi có thể đi qua nhiều thành phố khác nhau. Nghĩa là từ a có thể đi đến b thông qua một số thành phố khác. Ví dụ: a -> x -> y -> b. Hãy tìm đường đi ngắn nhất giữa 2 thành phố a và b, mỗi thành phố chỉ được đi qua một lần. Nếu không có đường đi thì in ra -1.

**Đầu vào:**

- Dòng đầu tiên là số nguyên n (1 ≤ n ≤ 1000) là số thành phố.
- Dòng thứ 2 là hai số nguyên a, b (1 ≤ a, b ≤ n) là hai thành phố cần kiểm tra.
- Dòng thứ 3 là số nguyên m (1 ≤ m ≤ 100000) là số đường đi giữa các thành phố.

- **m** dòng tiếp theo là 2 số nguyên x, y (1 ≤ x, y ≤ n) là 2 thành phố có đường đi giữa chúng.

**Đầu ra:**

- In ra độ dài của đường đi ngắn nhất giữa 2 thành phố a và b (Số lượng thành phố đã đi qua từ a đến b). Nếu không có đường đi thì in ra -1.

**Ví dụ:**

| Đầu vào | Đầu ra |
|:---------|:--------|
|7 <br> 7 6 <br> 10 <br> 2 4<br> 5 7 <br> 6 2 <br> 4 1 <br> 1 7 <br> 3 7 <br> 6 3 <br> 3 2 <br> 4 5<br> 5 3| 3|

Đường đi ngắn nhất từ 7 đến 6 là 7 -> 3 -> 6. Số lượng thành phố đã đi qua là 3.

