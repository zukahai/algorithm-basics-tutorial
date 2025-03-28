# Ước của chuỗi

## Đề bài 

Một chuỗi X gọi là ước của chuỗi S, khi có thể tạo ra chuỗi S bằng cách lặp lại chuỗi X nhiều lần.<br> Ví dụ:

- Chuỗi "abab" là ước của chuỗi "abababab"
- Chuỗi "ab" là ước của chuỗi "abababab"
- Chuỗi "ababab" không phải là ước của chuỗi "abababab"

Cho một chuỗi S. Hãy tìm ước ngắn nhất của chuỗi S.

## Phân tích ý tưởng

### Phần 1: Phân tích bài toán

Để tìm ước ngắn nhất của chuỗi S, ta sẽ duyệt qua chuỗi X có thể là ước của chuỗi S.<br>
Ví dụ S = "abaaba" Thì ta sẽ duyệt lần lượt các chuỗi X = "a", "ab", "aba", "abaa", "abaab", "abaaba" để kiểm tra X có phải là ước của S không. Nếu X là ước của S thì đưa ra X luôn. <br>
Nên ta cần tìm cách kiểm tra chuỗi X có phải là ước của chuỗi S không.

### Phần 2: Kiểm tra chuỗi X có phải là ước của chuỗi S không

Để kiểm tra chuỗi X có phải là ước của chuỗi S không, ta sẽ thực hiện như sau:

Nhận định rằng nếu X là ước của S thì khi cộng các chuỗi X lại với nhau sẽ bằng chuỗi S. Ví dụ:

- S = "abababab" và X = "abab" thì X là ước của S vì "abab" + "abab" = "abababab"
- S = "ababab" thì X = "ab" là ước của S vì "ab" + "ab" + "ab" = "ababab"

Nên ta sẽ thực hiện như sau:

Tạo mỗi chuỗi p rỗng, cộng chuỗi p với chuỗi X cho đến khi chuỗi p có độ dài lớn hơn hoặc bằng chuỗi S.<br>
Sau đó kiểm tra chuỗi p có bằng chuỗi S không. <br>
Nếu bằng thì X là ước của S.

### Phần 3: Cài đặt thuật toán

Ta sẽ thực hiện như sau:

Viết hàm check để kiểm tra chuỗi X có phải là ước của chuỗi S không. Hàm check sẽ nhận vào 2 chuỗi S và X. Trong hàm check, ta sẽ thực hiện như sau:

```
hàm check(S, X):
    Gán chuỗi p = ""
    Trong khi độ dài chuỗi p nhỏ hơn độ dài chuỗi S:
        Cộng chuỗi p với chuỗi X
    Nếu chuỗi p bằng chuỗi S:
        Trả về True
    Ngược lại:
        Trả về False

```

Sau khi viết hàm check, ta sẽ thực hiện như sau:

```
Đọc chuỗi S từ input
Gán X = ""

Duyệt i là các chỉ số của chuỗi S
    Cộng chuỗi X với ký tự S[i]
    Nếu hàm check(S, X) trả về True:
        In ra X
        Kết thúc chương trình

```

Thử cài đặt thuật toán bằng C++ thử Quyết nhé.