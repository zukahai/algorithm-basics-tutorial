# Cô chủ nhỏ Trâm Anh

Trâm Anh là một cô bé xinh xăn và thông minh, cô đang có một cửa hàng bán đồ trang trí nhỏ. Cô ấy rất yêu thích công việc của mình và luôn tìm cách để làm cho cửa hàng của mình trở nên đặc biệt hơn.

Trâm Anh nhận ra rằng có rất nhiều khách hàng đến cửa hàng của cô để tìm kiếm những chữ cái để ghép thành tên của họ hoặc những từ ý nghĩa. Một hôm, cô nhận được một đơn hàng rất lớn từ một khách hàng muốn mua rất nhiều bộ chữ cái giống nhau để trang trí cho một bữa tiệc sinh nhật. Tuy nhiên cửa hàng của cô chỉ có một số lượng chữ cái nhất định và có khả năng không đáp ứng đủ số lượng yêu cầu. Cô muốn tính được số bộ chữ cái tối đa mà cô có thể cung cấp cho khách hàng.

**Đầu vào:**

- Một chuỗi `s` gồm các chữ cái từ, đại diện cho các chữ cái có trong cửa hàng của Trâm Anh.
- Một chuỗi `t` gồm các chữ cái, đại diện cho các chữ cái cần thiết để tạo thành một bộ chữ cái.
- Độ dài của chuỗi `s` và `t` không vượt quá 10<sup>5</sup> ký tự.

**Đầu ra:**

- Một số nguyên, đại diện cho số bộ chữ cái tối đa mà Trâm Anh có thể cung cấp cho khách hàng.

**Ví dụ 1:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|aaabbbcc<br>bac|2|

**Giải thích:** Trong ví dụ này, Trâm Anh có 3 chữ 'a', 3 chữ 'b' và 2 chữ 'c'. Để tạo thành bộ chữ cái "bac", cô cần 1 chữ 'b', 1 chữ 'a' và 1 chữ 'c'. Vì vậy, cô có thể tạo được 2 bộ chữ cái "bac" từ các chữ cái có sẵn.

**Ví dụ 2:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|aaaaabbbbccc<br>aabc|2|

**Giải thích:** Trong ví dụ này, Trâm Anh có 5 chữ 'a', 4 chữ 'b' và 3 chữ 'c'. Để tạo thành bộ chữ cái "aabc", cô cần 2 chữ 'a', 1 chữ 'b' và 1 chữ 'c'. Vì vậy, cô có thể tạo được 2 bộ chữ cái "aabc" từ các chữ cái có sẵn.


# Tên người dùng của nhân viên FPT software

FPT là một công ty gia công phần mềm hàng đầu tại Việt Nam, chuyên cung cấp các giải pháp công nghệ thông tin cho khách hàng trong và ngoài nước. Nhân viên của FPT software thường sử dụng các tên người dùng theo định dạng nhất định để dễ dàng quản lý và nhận diện.
Là một công ty lớn và có rất nhiều nhân viên, FPT software đã quy định một định dạng tên người dùng nhất định để đảm bảo tính nhất quán và dễ dàng nhận diện. Tên người dùng của nhân viên FPT software thường bao gồm:

- Tên của nhân viên đã lược bỏ dấu và được viết hoa. Ví dụ tên "Hải" thì sẽ trở thành "HAI".
- Chữ cái đầu tiên của họ được viết hoa. Ví dụ họ "Phan Đức" thì sẽ trở thành "PD".

Ví dụ, nếu tên của nhân viên là "Phan Đức Hải", thì tên người dùng sẽ là "HAIPD".

Tuy nhiên, nếu tên người dùng đã tồn tại trong hệ thống, ví dụ "Phan Đức Hải" và "Phạm Đăng Hải" đều có tên người dùng là "HAIPD", thì FPT software sẽ thêm một số đếm vào cuối tên người dùng để phân biệt. Ví dụ, nếu "Phan Đức Hải" đã có tên người dùng là "HAIPD", và "Phạm Đăng Hải" là nhân viên tham gia công ty sau này thì sẽ có tên người dùng là "HAIPD2", nếu có thêm nhân viên mới cùng tên thì sẽ là "HAIPD3", và cứ tiếp tục như vậy.

Cho một danh sách các tên nhân viên, hãy xác định tên người dùng tương ứng cho mỗi nhân viên theo quy tắc trên.

**Đầu vào:**

- Một số nguyên `n` (1 ≤ n ≤ 10<sup>5</sup>) là số lượng nhân viên.
- **n** dòng tiếp theo, mỗi dòng chứa họ và tên nhân viên gồm các chữ cái và khoảng trắng, không có dấu câu. Tên có độ dài không quá 100 ký tự. Thứ tự từ trên xuống là thứ tự tham gia công ty của nhân viên.

**Đầu ra:**

- **n** dòng, mỗi dòng chứa tên người dùng tương ứng với nhân viên theo định dạng đã nêu.

**Ví dụ:**

|**Đầu vào:**|**Đầu ra:**|
|:---|:---|
|6<br>Phan Thi My Linh<br>Phan Duc Hai<br>Pham Dang Hai<br>Nguyen Van Anh<br>Tran Thi Binh<br>Pham Thi Mai Linh|LINHPTM<br>HAIPD<br>HAIPD2<br>ANHNV<br>BINHTT<br>LINHPTM2|

**Lưu ý lỗi bộ nhớ đệm khi dùng C++**

Khi sử dụng C++ khi nhập số, xong sau đó nhập chuỗi, có thể gặp lỗi bộ nhớ đệm. Để khắc phục, cần sử dụng `cin.ignore()` sau khi nhập số.

```cpp
int n;
cin >> n;
cin.ignore(); // Bỏ qua ký tự newline
for (int i = 0; i < n; i++) {
    string name;
    getline(cin, name); // Nhập chuỗi tên
    // Xử lý tên ở đây
}
```