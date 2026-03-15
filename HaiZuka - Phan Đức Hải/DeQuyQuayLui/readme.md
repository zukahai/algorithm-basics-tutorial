## Bài toán N quân xe

Trong bàn cờ vua, có N quân xe được đặt trên các ô vuông khác nhau. Hai quân xe có thể tấn công nhau nếu chúng nằm trên cùng một hàng hoặc cùng một cột. Hãy đếm số cách sắp xếp N quân xe trên bàn cờ 8x8 sao cho không có quân nào có thể tấn công nhau.

**Đầu vào**: Một số nguyên N (1 ≤ N ≤ 10) - số quân xe.

**Đầu ra**: Một số nguyên - số cách sắp xếp N quân xe trên bàn cờ 8x8 sao cho không có quân nào có thể tấn công nhau.

**Ví dụ**:

|Đầu vào|Đầu ra|
|:---|:---|
|4|2|


# Biểu thức cộng

Có một chuỗi "123456789" bạn được phép chèn dấu cộng vào bất kỳ vị trí nào trong chuỗi để tạo thành các biểu thức cộng. Ví dụ, bạn có thể tạo ra "1+2+3+4+567+89" hoặc "123+456+78+9". Nhiệm vụ của bạn là tìm tất cả các biểu thức cộng có thể để giá trị của biểu thức bằng một số nguyên N cho trước.

Nếu không có biểu thức nào có thể tạo ra giá trị N, hãy in ra "No solution".

**Đầu vào**: Một số nguyên N (1 ≤ N ≤ 10<sup>9</sup>) - giá trị cần đạt được.

**Đầu ra**: Tất cả các biểu thức cộng có thể tạo ra giá trị N. Nếu có nhiều hơn một biểu thức, hãy in mỗi biểu thức trên một dòng riêng biệt. Thứ tự in sao cho các biểu thức được sắp xếp theo thứ tự từ điển. Nếu không có biểu thức nào, hãy in "No solution".


**Ví dụ 1:**

|Đầu vào|Đầu ra|
|:---|:---|
|666|1+2+3+4+567+89<br>123+456+78+9|

**Ví dụ 2:**

|Đầu vào|Đầu ra|
|:---|:---|
|100|No solution|

# Biểu thức cộng trừ

Tương tự như bài toán biểu thức cộng, nhưng lần này bạn có thể chèn dấu cộng hoặc dấu trừ vào chuỗi "123456789". Nhiệm vụ của bạn là tìm tất cả các biểu thức cộng trừ có thể để giá trị của biểu thức bằng một số nguyên N cho trước. Lưu ý rằng không được chèn dấu cộng hoặc dấu trừ ở đầu chuỗi.

**Đầu vào**: Một số nguyên N (1 ≤ N ≤ 10<sup>9</sup>) - giá trị cần đạt được.

**Đầu ra**: Tất cả các biểu thức cộng trừ có thể tạo ra giá trị N. Nếu có nhiều hơn một biểu thức, hãy in mỗi biểu thức trên một dòng riêng biệt. Thứ tự in sao cho các biểu thức được sắp xếp theo thứ tự từ điển. Nếu không có biểu thức nào, hãy in "No solution".

**Ví dụ**

|Đầu vào|Đầu ra|
|:---|:---|
|100|1+2+3-4+5+6+78+9<br>1+2+34-5+67-8+9<br>1+23-4+5+6+78-9<br>1+23-4+56+7+8+9<br>12+3+4+5-6-7+89<br>12+3-4+5+67+8+9<br>12-3-4+5-6+7+89<br>123+4-5+67-89<br>123+45-67+8-9<br>123-4-5-6-7+8-9<br>123-45-67+89|

# Số chuỗi con khác nhau

Cho trước một chuỗi s, bạn có thể tách nó ra thành nhiều chuỗi con khác nhau, các ký tự trong mỗi chuỗi con phải liên tiếp và không được thay đổi thứ tự. Nhiệm vụ của bạn tìm các tính được được nhiều chuỗi con khác nhau nhất có thể được tạo ra từ chuỗi s.

**Đầu vào**: Một chuỗi s (1 ≤ |s| ≤ 20) - chuỗi cần phân tích.

**Đầu ra**: Số lượng chuỗi con khác nhau có thể được tạo ra từ chuỗi s.

**Ví dụ:**

|Đầu vào|Đầu ra|
|:---|:---|
|ababab|4|

Bạn có thể tách thành "a" + "ba" + "b" + "ab", sẽ tạo ra 4 chuỗi con khác nhau: "a", "b", "ab", "ba".

Ví dụ như bạn tách thành "a" + "b" + "ab" + "ab", sẽ chỉ tạo ra 3 chuỗi con khác nhau: "a", "b", "ab".