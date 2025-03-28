# Hướng dẫn giải bài toán: Phát quà theo thứ tự giảm dần

## **Phân tích bài toán**
1. **Input:**
   - Số lượng học sinh \( n \).
   - Tổng số gói quà \( m \).

2. **Yêu cầu:**
   - Đếm số cách phân phát quà sao cho:
     - Dãy số lượng quà phát cho từng học sinh **giảm dần**.
     - Tổng số quà đúng bằng \( m \).
   - Kết quả phải lấy dư \( 123456789 \).

3. **Ràng buộc:**
   - Mỗi học sinh không được nhận nhiều hơn \( m / n + 1 \) gói quà.

---

## **Ý tưởng giải**
Bài toán có thể giải bằng lập trình động. sử dụng bảng DP để lưu số cách phâ

1. **Bảng DP:**

   - \( dp[i][j] \): Số cách phân phát \( i \) gói quà cho \( j \) học sinh sao cho các số lượng quà giảm dần.

2. **Công thức chuyển:**

   - Với học sinh thứ \( j \) nhận \( k \) gói quà (\( k \leq i \)):
     \[
     dp[i][j] = \sum_{k=0}^{\min(i, m/n + 1)} dp[i-k][j-1]
     \]
   - Điều kiện bổ sung: \( k \leq \) số quà của học sinh trước đó (để đảm bảo dãy giảm dần).

3. **Khởi tạo:**
   - \( dp[0][0] = 1 \): Không có học sinh và không có quà thì có 1 cách (không làm gì).
   - Các giá trị khác của \( dp[0][j] \) là \( 0 \).

4. **Kết quả cuối cùng:**
   - Giá trị \( dp[m][n] \) là số cách phân phát quà hợp lệ.
