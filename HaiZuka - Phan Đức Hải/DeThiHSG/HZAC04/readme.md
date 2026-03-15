# Giấc mơ bàn cờ vua của Đức Mạnh

Đức Mạnh là một học sinh rất chăm chỉ và thông minh. Cậu ấy luôn cố gắng học tập để trở thành một người tốt và có ích cho xã hội. Mỗi ngày, Đức Mạnh đều dành thời gian để đọc sách, làm bài tập và tham gia các hoạt động ngoại khóa.

Một ngày nọ, trong khi đang đọc sách về lịch sử cờ vua, Đức Mạnh đã mơ thấy mình trở thành một kỳ thủ cờ vua xuất sắc. Trong giấc mơ, cậu thấy mình hoá thân thành vị vua trong một bàn cờ vô cùng rộng lớn. Tuy nhiên cậu lại thấy có rất nhiều quân cờ khác muốn tấn công cậu. Đức Mạnh muốn thoát ra khỏi bàn cờ đó nhanh nhất cả thể. Câu nhận ra được có một lối ra ở vị trí (x, y) trên bàn cờ. Cậu cần phải di chuyển đến vị trí đó để thoát ra. Tuy nhiên, mỗi bước của chỉ có thể di chuyển đến các ô lân cận, ví dụ nếu cậu đang ở toạ độ (x, y) thì cậu có thể di chuyển đến 8 ô xung quanh đó là (x-1, y), (x+1, y), (x, y-1), (x, y+1), (x-1, y-1), (x+1, y+1), (x-1, y+1), (x+1, y-1). Cậu cần phải tìm ra đường đi ngắn nhất để đến vị trí thoát ra. Hãy tính toán số bước đi ngắn nhất để đến vị trí thoát ra.

**Đầu vào:**

- Dòng đầu tiên chứa 2 số x và y, là toạ độ của vị trí thoát ra. (1 ≤ x, y ≤ 10<sup>18</sup>)
- Dòng thứ hai chứa 2 số a và b, là toạ độ của vị trí hiện tại của Đức Mạnh. (1 ≤ a, b ≤ 10<sup>18</sup>)

**Đầu ra:**

- Một số nguyên là số bước đi ngắn nhất để đến vị trí thoát ra.

**Ví dụ 1:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|5 1<br>5 3|2|

**Giải thích:** Đức Mạnh đang ở vị trí (5, 3) và cần di chuyển đến (5, 1). Cậu có thể di chuyển từ (5, 3) đến (5, 2) và sau đó đến (5, 1), tổng cộng là 2 bước.

**Ví dụ 2:**

|**Đầu vào**|**Đầu ra**|
|:---|---|
|1 1<br>2 2|1|

**Giải thích:** Đức Mạnh đang ở vị trí (2, 2) và cần di chuyển đến (1, 1). Cậu có thể di chuyển từ (2, 2) đến (1, 1) chỉ trong một bước.

# Các túi kẹo của Nguyên Khoa

Nguyên Khoa là một cậu bé rất thông minh và tốt bụng. Cũng như các đứa trẻ khác, Khoa rất thích ăn kẹo. 

Một hôm ở trường, Khoa và các bạn được phát kẹo. Mỗi bạn có thể chọn 2 trong các túi kẹo. Khoa là một học sinh giỏi nên được ưu tiên chọn đầu tiên, tuy nhiên cậu muốn chọn sau cho tổng số kẹo trong 2 túi có thể chia hết cho 3.

Sau khi xem qua các túi kẹo, Khoa ngay lập tức đã chọn được 2 túi kẹo, có tổng số kẹo chia hết cho 3, và tổng số kẹo đó lớn nhất có thể. Hãy cho biết Nguyên Khoa đã chọn 2 túi kẹo nào.

**Đầu vào:**

- Dòng đầu tiên chứa số lượng túi kẹo n (1 ≤ n ≤ 10<sup>6</sup>)
- Dòng thứ hai chứa n số nguyên a<sub>i</sub> (1 ≤ a<sub>i</sub> ≤ 10<sup>9</sup>), là số kẹo trong từng túi.

**Đầu ra:**

- Tổng số kẹo trong 2 túi mà Khoa đã chọn. Nếu không tìm thấy cặp túi kẹo nào thỏa mãn điều kiện, in ra -1.

**Ví dụ 1:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|5<br>6 5 3 7 1|12|

**Giải thích:** Khoa đã chọn túi kẹo có 5 và 7, tổng cộng là 12. Đây là số kẹo lớn nhất mà Khoa có thể chọn mà tổng số kẹo chia hết cho 3.

**Ví dụ 2:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|3<br>5 2 8|-1|

**Giải thích:** Khoa không thể chọn được cặp túi kẹo nào mà tổng số kẹo chia hết cho 3.

# Cảnh sát trưởng Huy Nghĩa

Huy Nghĩa là một cảnh sát trưởng rất thông minh và dũng cảm. Anh ấy luôn cố gắng bảo vệ người dân khỏi những tên tội phạm nguy hiểm. Một hôm anh đang nhận nhiệm vụ bảo vệ một sợi dây chuyền vô cùng quý giá, được tạo thành từ các viên đá quý. Tuy nhiên, trong quá trình bảo vệ, sợi dây chuyền đã bị đứt và các viên đá quý rơi ra và nằm rải rác trên mặt đất bị trộn lần vào những viên đá quý khác. Sau khi thu thập lại các viên đá quý, canh sát trưởng thấy số lượng viên đá quý không thay đổi, tuy nhiên, Huy Nghĩa rất sợ có một số viên đá quý bị đánh tráo nên anh ấy cần phải kiểm tra xem các viên đá quý được nhặt lại có thể ghép được thành sợi dây chuyền ban đầu hay không. Anh ấy cần phải kiểm tra xem có thể ghép được sợi dây chuyền ban đầu hay không. In ra "YES" nếu có thể ghép lại thành sợi dây chuyền ban đầu, ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một chuỗi s<sub>1</sub>, là sợi dây chuyền ban đầu. (1 ≤ |s<sub>1</sub>| ≤ 10<sup>5</sup>)
- Dòng thứ hai chứa một chuỗi s<sub>2</sub>, là sợi dây chuyền đã được thu thập lại. (1 ≤ |s<sub>2</sub>| ≤ 10<sup>5</sup>)
- Độ dài của hai chuỗi s<sub>1</sub> và s<sub>2</sub> là bằng nhau.

**Đầu ra:**

- In ra "YES" nếu có thể ghép lại thành sợi dây chuyền ban đầu, ngược lại in ra "NO".

**Ví dụ 1:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|abcde<br>edcba|YES|

**Giải thích:** Các viên đá quý trong sợi dây chuyền ban đầu và sợi dây chuyền đã thu thập lại là giống nhau, do đó có thể ghép lại thành sợi dây chuyền ban đầu.

**Ví dụ 2:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|abcde<br>eecba|NO|

# Số hạnh phúc và may mắn của Hạnh Nguyên

Hạnh Nguyên hiện đang là sinh viên năm nhất của một trường đại học. Cô rất thích những số may mắn và thường xuyên tìm kiếm những con số này trong cuộc sống hàng ngày. Một số may mắn là số mà chỉ chứa các chữ số 4 và 7. Hạnh Nguyên đã dựa vào ngày sinh của mình để định nghĩa một số là số hạnh phúc, số hạnh phúc là số mà chỉ chứa những số 1, 3 và 5.

Từ 1 số nguyên n, Hạnh Nguyên muốn kiếm tra xem n có phân tích được thành tích của một số hạnh phúc và một số may mắn hay không. Hãy kiểm tra và in ra "YES" nếu có thể, ngược lại in ra "NO".

**Đầu vào:**

- Dòng đầu tiên chứa một số nguyên n (0 ≤ n ≤ 10<sup>14</sup>).

**Đầu ra:**

- In ra "YES" nếu n có thể phân tích thành tích của một số hạnh phúc và một số may mắn, ngược lại in ra "NO".

**Ví dụ 1:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|611|YES|

**Giải thích:** 611 = 13 * 47, trong đó 13 là số hạnh phúc và 47 là số may mắn.

**Ví dụ 2:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|12|NO|

**Giải thích:** 12 không thể phân tích thành tích của một số hạnh phúc và một số may mắn.

# Số chính phương của Thuý Diễm


Thuý Diêm là một cô gái rất thích các con số. Cô ấy thường xuyên tìm kiếm những con số đặc biệt trong cuộc sống hàng ngày. Một số chính phương là một số nguyên dương mà có thể biểu diễn dưới dạng bình phương của một số nguyên khác. 

Một hôm Thuý Diễm đã mã hoa một số chính phương n nhưng sau:
- Thay tất cả các chữ số giống nhau trong n thành 1 chữ cái in hoa.
- Các chữ số khác nhau sẽ được thay bằng các chữ cái in thường khác nhau.

Ví dụ, nếu n = 121 thì Thuý Diễm sẽ mã hoá thành "ABA", "CBC", "DAD", v.v.

Cho một chuỗi s là chuỗi đã được mã hoá, hãy kiểm tra xem có thể giải mã được thành một số chính phương hay không. In ra số chính phương nhỏ nhất nếu có thể nếu có thể giải mã được, ngược lại in ra -1.

**Đầu vào:**

- Dòng đầu tiên chứa một chuỗi s (1 ≤ |s| ≤ 12). Các ký tự trong chuỗi s là các chữ cái in hoa từ 'A' đến 'Z'

**Đầu ra:**

- In ra số chính phương nhỏ nhất nếu có thể giải mã được, ngược lại in ra -1.

**Ví dụ 1:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|DDK|225|

Có nhiều số chính phương có thể mã hoá thành "DDK" như 225, 441. Nhưng số chính phương nhỏ nhất là 225.

**Ví dụ 2:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|ABA|121|

**Ví dụ 3:**

|**Đầu vào**|**Đầu ra**|
|:---|:---|
|ZZ| -1|
