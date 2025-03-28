# Bảng mã ASCII

Bảng mã ASCII (American Standard Code for Information Interchange) là một bảng mã ký tự bao gồm 128 ký tự được thiết kế để mã hóa các ký tự trong tiếng Anh. Bảng mã ASCII được thiết kế vào năm 1960 và được chuẩn hóa bởi American National Standards Institute (ANSI) vào năm 1963. Bảng mã ASCII bao gồm các ký tự in được và không in được, bao gồm các ký tự số, chữ cái, dấu câu và các ký tự đặc biệt.

<!-- Thẻ p image -->
![Bảng mã ASCII](./images/ascii.png)

# Cách nhập xuất một ký tự

```cpp

#include <iostream>

using namespace std;

int main() {
    char c = 'A';
    cout << c << endl;
}
```

# Cách chuyển đổi ký tự sang số và ngược lại

```cpp

#include <iostream>

using namespace std;

int main() {
    char c = 'A';
    int n = c;
    cout << n << endl; // 65

    int m = 65;
    char d = m;
    cout << d << endl; // A
}
```

# Chuỗi ký tự

```cpp

#include <iostream>

using namespace std;

int main() {
    string s = "Hello";
    cout << s << endl;
}
```

# Cách nhập xuất một chuỗi ký tự

```cpp

#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s << endl;
}
```

# Cách nhập xuất một chuỗi ký tự có khoảng trắng

```cpp

#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s << endl;
}
```



